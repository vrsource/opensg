/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGGLU.h"

#include "OSGGLFuncProtos.h"

#if !defined(WIN32) && !defined(__APPLE__) && !defined(OSG_EMBEDDED)
# if defined(OSG_USE_OGL3_PROTOS) || defined(OSG_USE_OGL4_PROTOS)
//#  include <GL3/glx3.h>
#  include <GLArb/glxarb.h>
# else
#  include <GL/glx.h>
# endif
#endif

#if defined(OSG_EMBEDDED) && defined(WIN32)
#include <gles/egl.h>
#endif

#if defined(__sgi) || defined(__APPLE__) || defined(__linux)
#include <dlfcn.h>
#endif

#if defined(__APPLE__)
#include <mach-o/dyld.h>
#endif

#if defined(__sun)
#include <dlfcn.h>
#include <link.h>
#endif

#include <boost/algorithm/string.hpp>    

#include "OSGBaseFunctions.h"

#include "OSGViewport.h"

#include "OSGBackground.h"
#include "OSGCamera.h"
#include "OSGWindow.h"

#include "OSGRenderActionBase.h"
#include "OSGRenderActionTask.h"

#include "OSGTraversalValidator.h"
#include "OSGShaderCache.h"

//#define OSG_WIN_QUEUE_ALL 1

OSG_BEGIN_NAMESPACE

#if defined(OSG_WIN32_ICL) && !defined(OSG_CHECK_FIELDSETARG)
#pragma warning (disable)
#endif

// If true, then try just using glXGetProcAddress() directly.
#define TRY_USING_GLXGETPROC_DIRECTLY 1

// Documentation for this class is emited in the
// OSGWindowBase.cpp file.
// To modify it, please change the .fcd file (OSGWindow.fcd) and
// regenerate the base file.

// Window-sytem specific virtual functions

/*! \fn void OSG::Window::init(void)
  
  Initialize the Window and its OpenGL context. This method needs to be
  called once after the Window has been created and its Window
  System-specific parameters are set.  
  
  It leaves the OpenGL context current to simplify modifying the OpenGL
  state. 
 */

/*! \fn void OSG::Window::activate(void)
  
  Activate the Window's OpenGL context, so that OpenGL can be called. 
 */

/*! \fn void OSG::Window::deactivate(void)
  
  Deativate the Window's OpenGL context. OpenGL calls are no longer possible
  after this call.
 */

/*! \fn void OSG::Window::swap(void)
  
  Swap the back and front buffers. 
  
  \warning The correct OpenGL context needs to be active for this to work!
 */

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/*! The global window list, needed by Window::refreshGLObject. All Windows are 
  added here at creation time and removed at deletion. 
 */

Window::WindowStore OSG::Window::_allWindows;
Int32               OSG::Window::_currentWindowId = 0;

// GLobject handling

/*! The lock used to mutex access of the GLObjects' reference count. One 
  should be enough for all of them, as they are pretty rarely changed, only 
  when they are used for the first time.
 */

LockRefPtr                            OSG::Window::_GLObjectLock = NULL;

/*! The lock used to mutex access of the Window's static elements to manage
  OpenGL extensions/functions/constants/objects.
 */

LockRefPtr                            OSG::Window::_staticWindowLock = NULL;

/*! Global list of all GL Objects used in the system. See \ref
  PageSystemOGLObjects for a description.
 */ 

std::vector<OSG::Window::GLObject *>  OSG::Window::_glObjects; 

// GL extension handling

// The name of the dynamic library for OpenGL extension functions
// By default it's NULL, which tries to find them in the current 
// executable
const Char8 *OSG::Window::_glLibraryName = NULL;    

std::vector<std::string            >  OSG::Window::_registeredExtensions;
std::vector<std::string            >  OSG::Window::_ignoredExtensions;
std::vector<bool                   >  OSG::Window::_commonExtensions;
std::vector<std::string            >  OSG::Window::_registeredFunctions;
std::vector<Int32                  >  OSG::Window::_registeredFunctionExts;
std::vector<UInt32                 >  OSG::Window::_registeredFunctionVersions;

// GL constant handling

std::vector<GLenum                 >  OSG::Window::_registeredConstants;


// Just a constant to indicate that the GL constant is unknown

const Real32 OSG::Window::unknownConstant =  TypeTraits<Real32>::getMax();

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                -
\*-------------------------------------------------------------------------*/

/*! initialize the static features of the class, e.g. action callbacks
*/

void OSG::Window::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);
}

bool OSG::Window::cleanup(void)
{
    _staticWindowLock = NULL;
    _GLObjectLock     = NULL;

    GLObject *pCurr = NULL;

    for(UInt32 i = 0; i < _glObjects.size(); ++i)
    {
        if(_glObjects[i] != pCurr)
        {
            pCurr = _glObjects[i];

            delete _glObjects[i];
        }
    }

    return true;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  protected                                                              -
\*-------------------------------------------------------------------------*/


/*------------- constructors & destructors --------------------------------*/

/*! Constructor
 */

OSG::Window::Window(void) :
     Inherited          (    ),
    _glObjectDestroyList(    ),
    _lastValidate       (    ),
    _ids                (    ),
    _idInfo             (    ),
    _glVersion          (   0),
    _extensions         (    ),
    _availExtensions    (    ),
    _extFunctions       (    ),
    _availConstants     (    ),
    _windowId           (  -1),
    _pTravValidator     (NULL),
    _pShaderCache       (NULL),

    _pInitTask          (NULL),
    _pWaitTask          (NULL),
    _pSwapTask          (NULL),
    _pFrameInitTask     (NULL),
    _pFrameExitTask     (NULL),
    _pActivateTask      (NULL),
    _pDeactivateTask    (NULL),
    _pGLFinishTask      (NULL),
    _oEnv               (    )
{
    // only called for prototypes, no need to init them
    _oEnv.setWindow(this);
}

/*! Copy Constructor
 */

OSG::Window::Window(const Window &source) :
    Inherited           (source                        ),
    _glObjectDestroyList(source._glObjectDestroyList   ),
    _lastValidate       (source._lastValidate.size(), 0),
    _ids                (source._ids.size(),          0),
    _idInfo             (source._idInfo.size(),       0),
    _glVersion          (                             0),
    _extensions         (                              ),
    _availExtensions    (                              ),
    _extFunctions       (                              ),
    _availConstants     (                              ),
    _windowId           (                            -1),
    _pTravValidator     (NULL                          ),
    _pShaderCache       (NULL                          ),
    _pInitTask          (NULL                          ),
    _pWaitTask          (NULL                          ),
    _pSwapTask          (NULL                          ),
    _pFrameInitTask     (NULL                          ),
    _pFrameExitTask     (NULL                          ),
    _pActivateTask      (NULL                          ),
    _pDeactivateTask    (NULL                          ),
    _pGLFinishTask      (NULL                          ),
    _oEnv               (                              )
{       
    _oEnv.setWindow(this);
}

/*! Destructor
*/

OSG::Window::~Window(void)
{
    // delete the ports and the context
}


/*-------------------------------------------------------------------------*\
 -  private                                                                -
\*-------------------------------------------------------------------------*/

/*! Instance initialisation
*/

void OSG::Window::onCreate(const Window *source)
{
    Inherited::onCreate(source);

    // Don't add the prototype instances to the list
    if(GlobalSystemState != Running)
        return;

    staticAcquire();

    if(source != NULL)
    {
        // mark all GL objects as not yet initialized
        doResetGLObjectStatus(1, UInt32(_glObjects.size() - 1));
    }

    _allWindows.push_back(this);

    _windowId = _currentWindowId++;

    staticRelease();

    char buffer[50];
    sprintf(buffer, "Window(%d)::_pContextThread", _windowId);

    _pContextThread = WindowDrawThread::get(buffer, false);
}

void OSG::Window::onCreateAspect(const Window *createAspect, 
                                 const Window *source)
{
    Inherited::onCreateAspect(createAspect, source);

    // Don't add the prototype instances to the list
    if(GlobalSystemState != Running)
        return;

    if(createAspect != NULL)
    {
        _windowId = createAspect->_windowId;
    }

    _pTravValidator = new TraversalValidator;
    _pShaderCache   = new ShaderCache;
}

/*! instance deletion
*/

void OSG::Window::onDestroy(UInt32 uiContainerId)
{
    staticAcquire();

    // decrement GLObjects reference counter.
    for(UInt32 i = 1; i < _glObjects.size(); ++i)
    {
        GLObject *obj = _glObjects[i];

        if(obj == NULL)
        {
            FDEBUG(("Window::onDestroy: object %u already destroyed!\n", i));
            continue;
        }

        // has the object been used in this context at all?
        if(i < getMFGlObjectLastReinitialize()->size() && 
           getGlObjectLastReinitialize(i) != 0)
        {
            obj->decRefCounter();
            // we can't call here the destroy callbacks because the
            // gl context is not guaranteed to be current, but destroying
            // the context should delete all gl objects.
        }
    }

    WindowStore::iterator winIt;

    winIt = std::find(_allWindows.begin(), 
                      _allWindows.end  (), 
                      this);
    
    // prototype window are not added to the list, so they might not be found.

    if(winIt != _allWindows.end()) 
        _allWindows.erase(winIt);

    staticRelease();

    Inherited::onDestroy(uiContainerId);
}

void OSG::Window::onDestroyAspect(UInt32  uiContainerId,
                                  UInt32  uiAspect     )
{
    delete _pTravValidator;
    delete _pShaderCache;

    _pTravValidator = NULL;
    _pShaderCache   = NULL;

    if(_pAspectStore->getRefCount() == 1 && _pContextThread != NULL)
    {
        if(_pContextThread->isRunning() == true)
        {
            fprintf(stderr, "Terminate context thread %p %p\n", 
                    static_cast<void *>(this),
                    static_cast<void *>(_pContextThread.get()));

            if(0x0000 != (_sfDrawMode.getValue() & ExternalContext))
            {
                this->doDeactivate();
               
                _pContextThread->queueTask(_pActivateTask);
            }

            _pContextThread->queueTask(
                new WindowDrawTask(WindowDrawTask::EndThread));

            Thread::join(_pContextThread);
        }
        else
        {
            if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                     SequentialPartitionDraw &&
               this->hasContext() == true)
            {
                activate   ();
                doFrameExit(); // after frame cleanup: delete dead GL objects
                deactivate ();
            }
        }
    }

    _pWaitTask       = NULL;
    _pSwapTask       = NULL;
    _pFrameInitTask  = NULL;
    _pFrameExitTask  = NULL;
    _pActivateTask   = NULL;
    _pDeactivateTask = NULL;
    _pGLFinishTask   = NULL;

    _pContextThread = NULL;

    Inherited::onDestroyAspect(uiContainerId, uiAspect);
}

void OSG::Window::staticAcquire(void)
{
    // Is the ThreadManager initialized yet?
    if(GlobalSystemState != Running)
        return;
        
    if(_staticWindowLock == NULL)
    {
        _staticWindowLock =
            ThreadManager::the()->getLock("OSG::Window::_staticWindowLock", 
                                          false);

        addPostFactoryExitFunction(&Window::cleanup);
    }
    _staticWindowLock->acquire();
}

void OSG::Window::staticRelease(void)
{
    // Is the ThreadManager initialized yet?
    if(GlobalSystemState != Running)
        return;
        
    _staticWindowLock->release();
}

/*-------------------------------------------------------------------------*\
 -  public                                                                 -
\*-------------------------------------------------------------------------*/

/*! react to field changes
*/

void OSG::Window::changed(ConstFieldMaskArg whichField, 
                          UInt32            origin,
                          BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

/*------------------------------ access -----------------------------------*/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_EXT)

/*------------------------ GL object handling -----------------------------*/

/*! Register a number of OpenGL objects. By default the number is 1, but more
    can be necessary for things like text. It returns the first id of the
    contiguous reserved ID block.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept. 
*/

UInt32 OSG::Window::registerGLObject(GLObjectFunctor        functor, 
                                     GLObjectDestroyFunctor destroy, 
                                     UInt32                 num)
{
    UInt32    osgId, i; 
    GLObject *pGLObject;

    staticAcquire();
    
    // reserve index 0, illegal for most OpenGL functions
    if(_glObjects.empty())
        _glObjects.push_back(NULL);

    osgId     = UInt32(_glObjects.size());
    pGLObject = new GLObject(functor, destroy);
    
    // does the requested block fit into the capacity?
    
    if(_glObjects.capacity() >= osgId + num)
    {
        _glObjects.insert(_glObjects.end(), num, pGLObject );
        
        resetGLObjectStatus(osgId, num);

        staticRelease();

        return osgId;
    }
    
    // doesn't fit, try to find a block in the middle
    
    UInt32 cnt = 0;

    // start searching at 1, id 0 is reserved for GL
    for(i = 1; i < _glObjects.size(); ++i)
    {       
        if(_glObjects[i] == NULL) 
        {
            if(cnt == 0)
            {
                osgId = i;
            }

            ++cnt;

            if(cnt == num) 
            {
                // block of unused entries found ...
                        
                while(i >= osgId) 
                {
                    _glObjects[i] = pGLObject;
                    i = i - 1;
                } 
                
                resetGLObjectStatus(osgId, num);

                staticRelease();

                return osgId;
            }
        }
        else
        {
            cnt   = 0;
            osgId = 0;
        }
    }
    
    // no block found, add at the end
    
    if(osgId > 0) // ok the last entries in the vector were empty
    {
        // fill the empty slots at the end 
        i = osgId + cnt - 1;

        while(i >= osgId)
        {
            _glObjects[i] = pGLObject;

            i = i - 1;
        }
    }
    else
    {
        // we found no empty entries so the new id is the size of the vector.
        osgId = UInt32(_glObjects.size());
    }

    // expand the vector for the rest 
    for(i = 1; i <= num - cnt; i++) 
    {       
        _glObjects.push_back(pGLObject);
    }
                
    resetGLObjectStatus(osgId, num);
    
    staticRelease();
    
    return osgId;
}

/*! Validate the given object, i.e. make sure it is up-to-date in the current
    context.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept. 
*/
UInt32 OSG::Window::validateGLObject(UInt32   osgId, 
                                     DrawEnv *pEnv, 
                                     UInt64   uiOptions)
{
    UInt32 returnValue = 0;
    
    if ( osgId == 0 )
    {
        SWARNING << "Window::validateGLObject: id is 0!" << std::endl;
        return returnValue;
    }

    staticAcquire();

    GLObject *obj = _glObjects[osgId];
    
    if(obj == NULL)
    {
        SWARNING << "Window::validateGLObject: obj with id " << osgId 
                 <<" is NULL!" << std::endl;
        staticRelease();
        return returnValue;
    }

    if(osgId >= _lastValidate.size()) // can happen if multi-threading
    {
        _lastValidate.resize(osgId + 1, 0);
    }
    
    if(osgId >= _mfGlObjectLastReinitialize.size())
    {
        editMField( GlObjectLastReinitializeFieldId,
                   _mfGlObjectLastReinitialize      );

        _mfGlObjectLastReinitialize.resize(osgId + 1, 0);
    }

    if(osgId >= _mfGlObjectLastRefresh.size())
    {
        editMField(GlObjectLastRefreshFieldId, _mfGlObjectLastRefresh);

        _mfGlObjectLastRefresh.resize(osgId + 1, 0);
    }

    FDEBUG(("Window 0x%p (event %d,ri:%" PRISize ",rf:%" PRISize "): "
            "Validating object %d: last reinit:%d, last validate:"
            "%d last refresh: %d => %s\n", 
            static_cast<void *>(this), getGlObjectEventCounter(), 
            _mfGlObjectLastReinitialize.size(),
            _mfGlObjectLastRefresh.size(),
            osgId, 
            (_mfGlObjectLastReinitialize.size() > osgId)?
                _mfGlObjectLastReinitialize[osgId]:0xffffffff,
            _lastValidate[osgId],
            (_mfGlObjectLastRefresh.size() > osgId)?
                _mfGlObjectLastRefresh[osgId]:0xffffffff,
            (_mfGlObjectLastReinitialize[osgId] == 0)?"init":
            ((_mfGlObjectLastReinitialize[osgId] > _lastValidate[osgId])?"reinit":
            ((_mfGlObjectLastRefresh[osgId] > _lastValidate[osgId])?"refresh":
            "up-to-date"))
          ));
    
    if(_mfGlObjectLastReinitialize[osgId] == 0)
    {
        editMField( GlObjectLastReinitializeFieldId, 
                   _mfGlObjectLastReinitialize     );

        obj->incRefCounter();
        returnValue = obj->getFunctor()(pEnv, osgId, initialize, uiOptions);
        _mfGlObjectLastReinitialize[osgId] = 1;
        _lastValidate[osgId] = getGlObjectEventCounter();
    }
    else if(_mfGlObjectLastReinitialize[osgId] > _lastValidate[osgId])
    {
        returnValue = obj->getFunctor()(pEnv, osgId, reinitialize, uiOptions);
        _lastValidate[osgId] = getGlObjectEventCounter();
    }
    else if(_mfGlObjectLastRefresh[osgId] > _lastValidate[osgId])
    {
        returnValue = obj->getFunctor()(pEnv, osgId, needrefresh, uiOptions);
        _lastValidate[osgId] = getGlObjectEventCounter();
    }

    staticRelease();

    return returnValue;
}

/*! Validate all existing GL objects. Use with care, and only if the correct
    OpenGL context is active.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept. 
*/
void OSG::Window::validateAllGLObjects(void)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        activate();
        doFrameInit();

        // NOTE: This is less than ideal, but we need to acquire the lock
        //       before accessing _glObjects and we don't want to make a copy.
        //       This method is not called in normal operations though.
        staticAcquire();
        for (UInt32 i = 1; i < _glObjects.size(); ++i)
        {
            if(_glObjects[i] != NULL)
            {
                staticRelease();
                validateGLObject(i, &_oEnv);
                staticAcquire();
            }
        }
        staticRelease();
    
        doFrameExit();
        deactivate();
    }   
    else if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                         ParallelPartitionDraw)
    {
        fprintf(stderr, "Window::validateAllGLObjects::pardraw NI\n");
    }
    else
    {
        fprintf(stderr, "Unknow partition draw mode\n");
    }
}
 
/*! Mark the given object for refresh. The next time it is validated the
    registered callback function will be called for a refresh action.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept. 
 */

void OSG::Window::refreshGLObject(UInt32 osgId)
{
    if(osgId == 0)
    {
        SWARNING << "Window::refreshGLObject: id is 0!" << std::endl;
        return;
    }

    staticAcquire();

    doRefreshGLObject(osgId);

    staticRelease();
}

/*! Refresh all existing GL objects.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept. 
*/
void OSG::Window::refreshAllGLObjects(void)
{
    staticAcquire();

    for(UInt32 i = 1; i < _glObjects.size(); ++i)
        doRefreshGLObject(i);

    staticRelease();
}

/*! Do the actual refresh work, without checks.
    \note This function must be called while holding _staticWindowLock
          and \a osgId must not be 0.
*/
void Window::doRefreshGLObject(UInt32 osgId)
{
    // NOTE: staticAcquire() has been called before calling this.
    WindowStore::const_iterator winIt  = _allWindows.begin();
    WindowStore::const_iterator winEnd = _allWindows.end  ();

    for(; winIt != winEnd; ++winIt)
    {
        Window *pWin = *winIt;

        if(pWin == NULL)
            continue;

        pWin->editMField(GlObjectLastRefreshFieldMask,
                         pWin->_mfGlObjectLastRefresh);

        UInt32    lastinv = pWin->getGlObjectEventCounter() + 1;

        MFUInt32 &field   = pWin->_mfGlObjectLastRefresh;

        if(field.size() <= osgId)
            field.resize(osgId + 1, 0);

        field[osgId] = lastinv;

        pWin->setGlObjectEventCounter(lastinv); 
    }
}


/*! Mark the given object for reinitialisation. The next time it is validated
  the
  registered callback function will be called for a reinit action.
  
  See \ref PageSystemOGLObjects for a description of the OpenGL object
  concept. 
 */

void OSG::Window::reinitializeGLObject(UInt32 osgId)
{
    if ( osgId == 0 )
    {
        SWARNING << "Window::reinitializeGLObject: id is 0!" << std::endl;
        return;
    }

    staticAcquire();

    doReinitializeGLObject(osgId);

    staticRelease();
}

/*! Reinitialize all existing GL objects.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept. 
*/
void OSG::Window::reinitializeAllGLObjects(void)
{
    staticAcquire();

    for(UInt32 i = 1; i < _glObjects.size(); ++i)
        doReinitializeGLObject(i);

    staticRelease();
}

/*! Do the actual reinitialization work, without checks.
    \note This function must be called while holding _staticWindowLock
          and \a osgId must not be 0.
    
 */
void Window::doReinitializeGLObject(UInt32 osgId)
{
    WindowStore::const_iterator winIt  = _allWindows.begin();
    WindowStore::const_iterator winEnd = _allWindows.end  ();

    // NOTE: staticAcquire() has been called before calling this.
    for(; winIt != winEnd; ++winIt)
    {
        Window *pWin = *winIt;

        if(pWin == NULL)
            continue;

        pWin->editMField(GlObjectLastReinitializeFieldMask,
                         pWin->_mfGlObjectLastReinitialize);

        UInt32    lastinv = pWin->getGlObjectEventCounter() + 1;

        MFUInt32 &field   = pWin->_mfGlObjectLastReinitialize;

        if(field.size() <= osgId)
            field.resize(osgId + 1, 0);

        // is it already validated?
        if(field[osgId] == 0)
            continue;

        field[osgId] = lastinv;

        pWin->setGlObjectEventCounter(lastinv);
    }
}


/*! Reset the GL object status counters for the given GL objects
    in all Windows.
    This function must be called while holding _staticWindowLock.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept.
 */
void Window::resetGLObjectStatus(UInt32 osgId, UInt32 num)
{
    // NOTE: staticAcquire() has been called before calling this.
    if(osgId == 0)
    {
        SWARNING << "Window::resetGLObject: osgId is 0." << std::endl;
        return;
    }

    WindowStore::const_iterator winIt  = _allWindows.begin();
    WindowStore::const_iterator winEnd = _allWindows.end  ();

    for(; winIt != winEnd; ++winIt)
    {
        Window *pWin = *winIt;

        if(pWin == NULL)
            continue;

        pWin->doResetGLObjectStatus(osgId, num);
    }
}

/*! Reset the GL object status counters for the given GL objects
    in this window.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept.
 */
void Window::doResetGLObjectStatus(UInt32 osgId, UInt32 num)
{
    // NOTE: staticAcquire() has been called before calling this.

    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);
    editMField(GlObjectLastRefreshFieldMask,      _mfGlObjectLastRefresh     );

    if(_mfGlObjectLastReinitialize.size() < osgId + num)
        _mfGlObjectLastReinitialize.resize(osgId + num, 0);

    if(_mfGlObjectLastRefresh.size() < osgId + num)
        _mfGlObjectLastRefresh.resize(osgId + num, 0);

    if(_lastValidate.size() < osgId + num)
        _lastValidate.resize(osgId + num, 0);

    for(UInt32 i = osgId; i < osgId + num; ++i)
    {
        _mfGlObjectLastReinitialize[i] = 0;
        _mfGlObjectLastRefresh     [i] = 0;
        _lastValidate              [i] = 0;
    }
}

/*! Mark the given objects for destruction. The actual destruction will happen
    later.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
   concept. 
 */

void OSG::Window::destroyGLObject(UInt32 osgId, UInt32 num)
{
    staticAcquire();

#ifdef OSG_DEBUG
    if(osgId >= _glObjects.size() || _glObjects[osgId] == NULL)
    {
        FWARNING(("Window::destroyGLObject: object %d is NULL!\n", osgId));
        staticRelease();
        return;
    }
#endif

    // Has this object ever been used?
    if(_glObjects[osgId] && _glObjects[osgId]->getRefCounter() == 0)
    {
        if(_glObjects[osgId])
            delete _glObjects[osgId];
        
        for(UInt32 j = 0; j < num ; j++)
        {
            _glObjects[osgId + j] = NULL;
        }

        staticRelease();
        return;
    }

    WindowStore::const_iterator winIt  = _allWindows.begin();
    WindowStore::const_iterator winEnd = _allWindows.end  ();

    for(; winIt != winEnd; ++winIt)
    {
        Window *pWin = *winIt;

        if(pWin == NULL)
            continue;

        if(osgId + num > pWin->_mfGlObjectLastReinitialize.size())
        {
            // this can happen if a GLObject is temporarily created in one
            // aspect, used there and then discarded without ever being
            // synced to other aspects.
            // if it can happen and nothing is wrong we don't warn. (GV)

#ifdef OSG_DEBUGX
            FWARNING(("Window(%p)::destroyGLObject: id %d + num %d exceed "
                      "registered objects size %d!\n", pWin, osgId, num, 
                      pWin->_mfGlObjectLastReinitialize.size()));
#endif
            continue;
        }

        // has the object been used in this context at all?
        if(pWin->getGlObjectLastReinitialize(osgId) != 0) 
            pWin->_glObjectDestroyList.push_back(DestroyEntry(osgId, num));
    }

    staticRelease();
}


/*----------------------- GL extension handling ---------------------------*/


/*! Register a new OpenGL extension. 
    
    Ignores NULL strings. 
    See \ref PageSystemOGLExt for details.     
*/
UInt32 OSG::Window::registerExtension(const Char8 *s)
{
    FDEBUG(("Window::registerExtension: register '%s': \n", s));

    staticAcquire();
   
    if(s == NULL)
    {
        staticRelease();
        return TypeTraits<UInt32>::getMax();
    }

    // Check if it has already been registered and if it has then return the
    // index we already used.
    Int32 r = getExtensionIdX(s);

    if(-1 != r)
    {
        FPDEBUG(("reusing id %d\n", r));
    }
    else
    {
        r = Int32(_registeredExtensions.size());

        _registeredExtensions.push_back(s);

        FPDEBUG(("new id %d\n", r));
    }
    
    staticRelease();
    return r;
}

/*! Check if the Window supports the given extension. 
  Should be used for initialisation checks only, for checks done often it's
  recommended to register the extensions and use hasExtension(UInt32)
  instead.  
 */

bool OSG::Window::hasExtension(const Char8 *s)
{
    if(_sfIgnoreAllExtensions.getValue() == true)
        return false;

    if(std::find(_ignoredExtensions.begin(),
                 _ignoredExtensions.end(),
                 s)                         != _ignoredExtensions.end())
    {
        return false;
    }
    
    if(std::find(_extensions.begin(),
                 _extensions.end(),
                 s)                         != _extensions.end())
    {
        return true;
    }
    
    return false;
}

/*! Register new OpenGL extensions to ignore. See \ref PageSystemOGLExt 
  for details. 
  These extensions get added to _ignoredExtensions and are prevented from
  being looked up.
 */

void OSG::Window::ignoreExtensions(const Char8 *s)
{    
    FDEBUG(("Window:: Ignoring extensions '%s'\n", s));

    staticAcquire();
    
    std::back_insert_iterator< std::vector<std::string> > 
            extension_back_inserter(_ignoredExtensions);

    std::string toex(s);
    
    for(string_token_iterator ignit = string_token_iterator(toex, ",. ");
        ignit != string_token_iterator(); ++ignit)
    {          
        std::string ignore = *ignit;

        FDEBUG(("Ignoring '%s':", ignore.c_str()));
        
        if(std::find(_ignoredExtensions.begin(),
                     _ignoredExtensions.end(),
                     ignore.c_str())            != _ignoredExtensions.end())
        {
            FPDEBUG((" already ignored.\n"));
            continue;
        }
        
        _ignoredExtensions.push_back(ignore);
        
        std::vector<std::string>::iterator regit;
        
        // if extension is registered, disable it on all existing Windows
        
        regit = std::find(_registeredExtensions.begin(),
                          _registeredExtensions.end(),
                          ignore.c_str());                                 
        
        Int32 ind = -1;
        
        if(regit != _registeredExtensions.end())
        {
            ind = regit - _registeredExtensions.begin();
            FPDEBUG(("(reg as %d)", ind));
        }

        // Walk all existing windows and remove the ignored extension 
        // from the _extensions vector. Disable it if it was a registered one.
        
        WindowStore::const_iterator winIt  = _allWindows.begin();
        WindowStore::const_iterator winEnd = _allWindows.end  ();

        for(; winIt != winEnd; ++winIt)
        {
            FPDEBUG((" %p:", static_cast<void *>(winIt->get())));
            
            std::vector<std::string>::iterator extit;
            
            extit = std::find((*winIt)->_extensions.begin(),
                              (*winIt)->_extensions.end(),
                              ignore.c_str()); 
                                                                     
            if(extit != (*winIt)->_extensions.end())
            {
                FPDEBUG((" removed"));
                (*winIt)->_extensions.erase(extit);
            }
            else
            {
                FPDEBUG((" nonsupp"));            
            }
                        
            if(ind >= 0)
            {
                if((*winIt)->_availExtensions.size() > UInt32(ind))
                {
                    (*winIt)->_availExtensions[ind] = false;
                    FPDEBUG((" disabled"));            
                }
                if((*winIt)->_commonExtensions.size() > UInt32(ind))
                {
                    (*winIt)->_commonExtensions[ind] = false;
                    FPDEBUG((" uncommoned"));            
                }
            }
        }
        FPDEBUG(("\n"));    
    }

    std::sort(_ignoredExtensions.begin(), _ignoredExtensions.end());
    
    staticRelease();
}

/*! Register a new OpenGL extension function. See \ref PageSystemOGLExt for 
    details. Ignores NULL strings.
 */

UInt32 OSG::Window::registerFunction(const Char8 *s, 
                                           Int32  ext,
                                           UInt32 version)
{
    if(s == NULL)
        return TypeTraits<UInt32>::getMax();

    FDEBUG(("Window::registerFunction: register '%s': \n", s));

    staticAcquire();
    
    std::vector<std::string>::iterator i;
    
    i = std::find(_registeredFunctions.begin(), _registeredFunctions.end(), 
                  s);
    
    if(i < _registeredFunctions.end())
    {
        staticRelease();
        FDEBUG(("reusing id %td\n", i - _registeredFunctions.begin()));
        return i - _registeredFunctions.begin();
    }
            
    UInt32 r = UInt32(_registeredFunctions.size());

    _registeredFunctions       .push_back(s);
    _registeredFunctionExts    .push_back(ext);
    _registeredFunctionVersions.push_back(version);

    FPDEBUG(("new id %d\n", r));
    
    staticRelease();
    return r;
}

/*! Register a new OpenGL constant. See \ref PageSystemOGLExt for 
    details.
 */

void OSG::Window::registerConstant(GLenum val)
{
    staticAcquire();
   
    if(std::find(_registeredConstants.begin(), 
                 _registeredConstants.end  (),
                 val                        ) ==  _registeredConstants.end())
    {
        _registeredConstants.push_back(val);
    }

    staticRelease();
}

#endif // remove the OpenGL object handling from user docs

/*! Dump all the registered extensions to std::cout.

    See \ref PageSystemOGLObjects for a description of the OpenGL object
    concept. 
 */

void OSG::Window::dumpExtensions(void)
{   
    std::vector<std::string>::iterator it;
    std::cout << "GL Extensions: ";

    for(it = _extensions.begin(); it != _extensions.end(); ++it)
    {
        std::cout << it->c_str() << ", ";
    }

    std::cout << std::endl;       
}

void OSG::Window::doTerminate(void)
{
    if(_pContextThread != NULL)
    {
        if(_pContextThread->isRunning() == true)
        {
            fprintf(stderr, "Terminate draw thread %p | %p\n", 
                    static_cast<void *>(this),
                    static_cast<void *>(_pActivateTask.get()));

            if(0x0000 != (_sfDrawMode.getValue() & ExternalContext))
            {
                this->doDeactivate();

                _pContextThread->queueTask(_pActivateTask);
            }

            _pContextThread->queueTask(
                new WindowDrawTask(WindowDrawTask::EndThread));

            Thread::join(_pContextThread);
        }
        else
        {
            if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                       SequentialPartitionDraw)
            {
                activate   ();
                doFrameExit(); // after frame cleanup: delete dead GL objects
                deactivate ();
            }
        }
    }

    _pContextThread = NULL;
}
 
/*! Do everything that needs to be done before the Window is redrawn. This
    function has to be called for every frame the Window is drawn. 
    
    The convenience functions render and draw take care of it, if they are
    used.
    
    The main task currently is checking and updating OpenGL extensions.
 */

void OSG::Window::doFrameInit(bool reinitExtFuctions)
{
    static bool ignoreEnvDone = false;
    
    if(!ignoreEnvDone)
    {
        ignoreEnvDone = true;

        Char8 *p = getenv(OSG_NAMESPACE_PREFIX"_IGNORE_EXTENSIONS");
        
        if(p)
            ignoreExtensions(p);
    }
    
    // get version/extensions and split them
    if(_extensions.empty())
    {
        const char *version = 
                reinterpret_cast<const char *>(glGetString(GL_VERSION));
        
#if defined(OSG_OGL_ES2) && !defined(OSG_OGL_ES2_SIMGL3)
        UInt32 uiVersionOff = 10;
#else
        UInt32 uiVersionOff = 0;
#endif      
        if(version != NULL)
        {
            int major = atoi(version + uiVersionOff);
            int minor = atoi(strchr(version + uiVersionOff, '.') + 1);
        
            _glVersion = (major << 8) + minor;
        }
        else
        {
            FFATAL(("Window::frameInit: Couldn't detect OpenGL version "
                    "assuming version 1.1!\n"));
            _glVersion = (1 << 8) + 1;
        }

#ifdef __APPLE__

        const char* glVendor   = 
            reinterpret_cast<const char *>(glGetString(GL_VENDOR));
        const char* glRenderer = 
            reinterpret_cast<const char *>(glGetString(GL_RENDERER));
    
        if(glVendor != NULL && glRenderer != NULL)
        {
            // TODO; is there a better way to switch some
            // extentions for a specific os/vendor/renderer combo
            FLOG (( "GL Vendor/Renderer: %s/%s\n", glVendor, glRenderer ));
        
            if ( strstr(glVendor, "ATI") && strstr(glRenderer,"X1600") )
            {
                  FWARNING (("Switch of non_power_of_two for ATI\n"));
                  ignoreExtensions("GL_ARB_texture_non_power_of_two");
            }
        }

#endif // __APPLE

#if defined(OSG_USE_OGL3_PROTOS) || \
    defined(OSG_USE_OGL4_PROTOS) || \
    defined(OSG_OGL_ES2_SIMGL3)  || \
    (defined(OSG_OGL_COREONLY) && !defined(OSG_OGL_ES2))

        Int32  iNumExtensions = 0;

        glGetIntegerv(GL_NUM_EXTENSIONS, &iNumExtensions);

        OSGGETGLFUNCBYNAME_GL3(glGetStringi,
                               osgGlGetStringi,
                               "glGetStringi",
                               this);

        for(Int32 i = 0; i < iNumExtensions; ++i)
        {
            std::string gl_extension = 
                reinterpret_cast<const char *>(osgGlGetStringi(GL_EXTENSIONS, 
                                                               i            ));

            if(! std::binary_search(_ignoredExtensions.begin(),
                                    _ignoredExtensions.end(),
                                    gl_extension))
            {
                _extensions.push_back(gl_extension);
            }
        }

#else

        const char *gl_extensions = 
            reinterpret_cast<const char*> (glGetString(GL_EXTENSIONS));

        FDEBUG(("Window %p: GL Version: %4x ('%s')\n", 
                static_cast<void *>(this), 
                _glVersion, glGetString(GL_VERSION) ));

        FDEBUG(("Window %p: GL Extensions: %s\n", 
                static_cast<void *>(this), gl_extensions));

        std::string foo(gl_extensions != NULL ? gl_extensions : "");

        FDEBUG(("Window %p: Ignored extensions: ", static_cast<void *>(this)));

        for(string_token_iterator it = string_token_iterator(foo, ",. ");
            it != string_token_iterator(); ++it)
        {          
            if(! std::binary_search(_ignoredExtensions.begin(),
                                    _ignoredExtensions.end(),
                                    *it))
            {
                _extensions.push_back(*it);
            }
            else
            {
                FPDEBUG(("%s ", (*it).c_str()));
            }
        }
        FPDEBUG(("\n"));

#endif

        std::sort(_extensions.begin(), _extensions.end());
            
        // if we don't have any extensions, add something anyway
        if(_extensions.empty())
            _availExtensions.resize(_registeredExtensions.size(), false);
    }
    
    // any new extension registered ? 
    if(_registeredExtensions.size() > _availExtensions.size())
    {
        staticAcquire();
        FDEBUG(("Window %p: exts: ", static_cast<void *>(this)));

        while(_registeredExtensions.size() > _availExtensions.size())
        {                          
            UInt32 s = UInt32(_availExtensions.size());

            /* perform a binary search over the retrieved extension strings.
               Push back the result as an availability flag for the extension
               requested by the application */         
            bool supported = std::binary_search( 
                                _extensions.begin(),
                                _extensions.end(),
                                _registeredExtensions[s]);

            /* Is this extension ignored? */
            bool ignored   = std::binary_search( 
                                _ignoredExtensions.begin(),
                                _ignoredExtensions.end(),
                                _registeredExtensions[s]);

            _availExtensions.push_back(supported && !ignored);

            FPDEBUG(("%s:", _registeredExtensions[s].c_str()));

            if(_commonExtensions.size() <= s)
            {
                _commonExtensions.push_back(supported && !ignored);

                if(supported && !ignored)
                {
                    FPDEBUG(("ok "));
                }
                else if(!supported)
                {
                    FPDEBUG(("NF "));
                }
                else
                {
                    FPDEBUG(("IGN "));
                }
            }
            else if (!supported)
            {
                _commonExtensions[s] = false;
                FPDEBUG(("NF "));
            }
            else
            {
                _commonExtensions[s] = false;
                FPDEBUG(("IGN "));
            }

            FPDEBUG(("\n"));
        }
        staticRelease();
    }
    
    if(reinitExtFuctions  == true)
    {
        _extFunctions.clear();
    }

    // any new functions registered ? 
    while(_registeredFunctions.size() > _extFunctions.size())
    {   
        const Char8 *s    = _registeredFunctions[_extFunctions.size()].c_str();
        FPDEBUG(("Window %p: Looking up ext function: %s ... ", 
                 static_cast<void *>(this), s));

        Int32        ext  = _registeredFunctionExts    [_extFunctions.size()];
        UInt32       ver  = _registeredFunctionVersions[_extFunctions.size()];

        GLExtensionFunction func = NULL;
        
        // XXX: I think this should be "and".  And what is "ext"?
        if(ext == -1 || _availExtensions[ext] == true || _glVersion >= ver)
        {
            func = getFunctionByName(s);
            if (NULL != func)
            {
                FDEBUG((" FOUND\n"));
            }
            else
            {
                FDEBUG((" NULL\n"));
            }
        }
        else
        {
            FDEBUG((" N/A\n"));
        }

        _extFunctions.push_back(func);
    }

    // any new constants registered ? 
    while(_registeredConstants.size() > _availConstants.size())
    {
        std::vector<GLenum>::const_iterator cIt  =
            _registeredConstants.begin() + _availConstants.size();
        std::vector<GLenum>::const_iterator cEnd =
            _registeredConstants.end  ();

        for(; cIt != cEnd; ++cIt)
        {
            Vec2f val(unknownConstant, unknownConstant);

            glGetFloatv(*cIt, static_cast<GLfloat *>(val.getValues()));
            _availConstants[*cIt] = val;

            FDEBUG(("Window(%p): Constant 0x%x value is %.3f %.3f\n", 
                    static_cast<void *>(this),
                    *cIt, val[0], val[1]));
        }

        glGetError();
    }

    _pTravValidator->incEventCounter();
}

/*! Do everything that needs to be done after the Window is redrawn. This
    function has to be called for every frame the Window is drawn. 
    
    The convenience functions render and draw take care of it, if they are
    used.

    The main task currently is deleting OpenGL objects.
 */

void OSG::Window::doFrameExit(void)
{   
    std::list<DestroyEntry>::iterator st,en;

    st = _glObjectDestroyList.begin();
    en = _glObjectDestroyList.end  ();

    staticAcquire();

    while(st != en)
    {
        UInt32 i = st->first, n = st->second;

        GLObject *obj = _glObjects[i];
        
        if(obj == NULL)
        {
            FDEBUG(("Window::doFrameExit: objects %d (%d) already destroyed ?\n",
                    i, n));
            ++st;
            continue;
        }

        FDEBUG(("Window::doFrameExit: Destroying GLObject %d (%d) - GL id %"
                PRIUSize "\n",
                i, n, getGLObjectId(i)));
           
        UInt32 rc = obj->getRefCounter();

        // has the object been used in this context at all?
        if(getGlObjectLastReinitialize(i) != 0) 
        {                  
            _glObjects[i]->getDestroyFunctor()(&_oEnv, i, destroy);
            doResetGLObjectStatus(i, n);

            for(UInt32 j = 0; j < n ; j++)
            {
                this->setGLObjectId(i+j, 0);
            }   

            if((rc = _glObjects[ i ]->decRefCounter()) <= 0)
            {           
                // call functor with the final-flag
                _glObjects[i]->getDestroyFunctor()(&_oEnv, i, finaldestroy);
            }
        }

        // if the GLObject is removed from each GL-Context, free GLObject-IDs.
        if(rc <= 0)
        {
            delete _glObjects[i];

            for(UInt32 j = 0; j < n ; j++)
            {
                _glObjects[i+j] = NULL;
            }   
        }

        ++st;
    }

    _glObjectDestroyList.clear();

    staticRelease();

    // Test for OpenGL errors. Just a little precaution to catch
    // stray errors. This is the only OpenGL error test in opt mode
    // and it needs to be enabled using the OSG_TEST_GL_ERRORS envvar.
    // In debug mode it is always on.
 
    static bool inited = false;
#ifndef OSG_DEBUG
    static bool testGLErrors = false;
#else
    static bool testGLErrors = true;
#endif

    if(!inited)
    {
        inited = true;
        char *pD = getenv(OSG_NAMESPACE_PREFIX"_DEBUG");
        char *pN = getenv(OSG_NAMESPACE_PREFIX"_NO_GL_CHECK_ON_FRAMEEXIT");

        if(pD)
            testGLErrors = true;

        if(pN)
            testGLErrors = false;
    }
 
    if(testGLErrors && this->hasContext() == true)
    {
        GLenum glerr;
        
        while((glerr = glGetError()) != GL_NO_ERROR)
        {
            FWARNING(("Window::frameExit: Caught stray OpenGL "
                      "error %s (%#x).\n",
                      gluErrorString(glerr),
                      glerr));

#ifndef OSG_DEBUG
            FWARNING(("Rerun with debug-libraries to get more accurate "
                      "information.\n"));
#endif
        }
    }
    
}


// Query for a GL extension function
// Yes, this is system dependent, but the system dependent parts are 
// #ifdefed anyway, and very similar code would show up in a number of places,
// making maintaining it unnecessarily hard
// Note: the order of the cases is important, do not change it!

/*! Query OpenGL for the pointer to an extension function. 

    This is called internally when extension functions are first cached. 
 */

OSG::Window::GLExtensionFunction OSG::Window::getFunctionByName(
    const Char8 *s)
{
    GLExtensionFunction retval = NULL;

    if(_sfIgnoreAllExtensions.getValue() == true)
    {
        return NULL;
    }

    FINFO(("Window::getFunctionByName: %s\n", s));

    FDEBUG(("Window %p: GL Vendor: %s\n", 
            static_cast<void *>(this), glGetString(GL_VENDOR)));

#if defined(__APPLE__) && !defined(OSG_OGL_ES2)

    if (NSIsSymbolNameDefined(s))
    {
        NSSymbol symbol = NSLookupAndBindSymbol(s);

        if(symbol != 0)
            retval = GLExtensionFunction(NSAddressOfSymbol(symbol));
    }
#elif defined(OSG_EMBEDDED) && defined(WIN32)

    retval = (void(__cdecl*)(void)) eglGetProcAddress(s);

#elif defined(WIN32)

    retval = (void(__cdecl*)(void)) wglGetProcAddress(s);
    
#elif defined(__sgi)   || defined(__hpux) || \
      defined(__linux) || defined(__sun)

    /* Workaround for multiple nVidia/Linux installation bugs, based on 
       code by
       Manfred Weiler (Patch 783637) 
     */
    
    static void (*(*__GetProcAddress)(const GLubyte *))(void) = NULL; 

    static void *libHandle = NULL; 
    std::string  libHandleName;

    // If we haven't found the library previously, then look for it.
    if(libHandle == NULL) 
    { 
        libHandle = dlopen(_glLibraryName, RTLD_NOW | RTLD_LOCAL); 

        if(!libHandle) 
        { 
            FWARNING(("Error in dlopen when opening GL lib: %s\n",dlerror())); 
            abort(); 
        } 
        else
        {
            libHandleName = (_glLibraryName == NULL ? "(executable)"
                                                    : _glLibraryName);
            FDEBUG(("Opened lib %s for GL extension handling.\n", 
                    libHandleName.c_str()));
        }
    } 

    if(__GetProcAddress == NULL) 
    { 
        FINFO(("Finding glxGetProcAddress method: "));

#ifdef TRY_USING_GLXGETPROC_DIRECTLY

        // Try pulling in ARB function directly.
/*
#ifdef GLX_ARB_get_proc_address
        if(__GetProcAddress == NULL)
        {
            __GetProcAddress = glXGetProcAddressARB;
            FINFO((" Using glxGetProcAddressARB directly.\n"));
        }
#endif
*/
        // If GLX version is 1.4 or greater then the method should exist.
#ifdef GLX_VERSION_1_4
        if(__GetProcAddress == NULL)
        {
            __GetProcAddress = glXGetProcAddress;
            FPINFO((" Using glxGetProcAddress directly.\n"));
        }
#endif
#endif
        if(__GetProcAddress == NULL)
        {
            __GetProcAddress = 
#if __GNUC__ < 4
                (void (*(*)(const GLubyte*))())
#else
                reinterpret_cast<void (*(*)(const GLubyte*))()>
#endif
                    (dlsym(libHandle, 
                          "glXGetProcAddressARB")); 

            if(__GetProcAddress == NULL) 
            { 
                __GetProcAddress = 
#if __GNUC__ < 4
                    (void (*(*)(const GLubyte*))())
#else
                    reinterpret_cast<void (*(*)(const GLubyte*))()>
#endif
                        (dlsym(libHandle, 
                              "glXGetProcAddress")); 

                if(__GetProcAddress == NULL) 
                {
                    // Couldn't find it linked to the executable. Try to open
                    // libGL.so directly.

                    dlclose(libHandle);

                    libHandle = dlopen("libGL.so", RTLD_NOW | RTLD_GLOBAL); 

                    if(!libHandle) 
                    { 
                        FWARNING(("Error in dlopen: %s\n",dlerror())); 
                        abort(); 
                    } 
                    else
                    {
                        FPINFO((" Using libGL.so directly.\n"));
                    }
                   
                    __GetProcAddress = 
#if __GNUC__ < 4
                        (void (*(*)(const GLubyte*))())
#else
                        reinterpret_cast<void (*(*)(const GLubyte*))()>
#endif
                            (dlsym(libHandle, "glXGetProcAddressARB")); 

                    if(__GetProcAddress == NULL) 
                    { 
                        __GetProcAddress = 
#if __GNUC__ < 4
                            (void (*(*)(const GLubyte*))())
#else
                            reinterpret_cast<void (*(*)(const GLubyte*))()>
#endif
                                (dlsym(libHandle, "glXGetProcAddress")); 
                    }


                    if(__GetProcAddress == NULL) 
                    {
                        FWARNING(("Neither glXGetProcAddress nor "
                                  "glXGetProcAddressARB found! Disabling all "
                                  " extensions for Window %p!\n", 
                                  static_cast<void *>(this))); 

                        _availExtensions.clear();
                        _availExtensions.resize(_registeredExtensions.size(), 
                                                false);
                    }
                } 
                else
                {
                    FPINFO((" Using glXGetProcAddress (from %s).\n",
                            libHandleName.c_str()));
                }
            } 
            else
            {
                FPINFO(("Using glXGetProcAddressARB (from %s).\n",
                        libHandleName.c_str()));                    
            }
        }
    } 

    if(__GetProcAddress != NULL) 
    { 
        retval = 
            reinterpret_cast<GLExtensionFunction>(
                __GetProcAddress(reinterpret_cast<const GLubyte*>(s))); 
    } 
    else 
    { 
        retval = 
#if __GNUC__ < 4
            (GLExtensionFunction)
#else
            reinterpret_cast<GLExtensionFunction>
#endif
                (dlsym(libHandle, s)); 
    } 

#else

    FWARNING(("Window::getFunctionByName: couldn't find implementation!\n"
              "Please contact the developers at info@opensg.org.\n"));

    retval = NULL;
#endif

    if(retval == NULL)
    {
        FWARNING(("Window::getFunctionByName: Couldn't get function '%s' for "
                 "Window %p.\n", s, static_cast<void *>(this)));
    }
    else
    {
        FDEBUG(("Window::getFunctionByName: got function '%s' for "
                 "Window %p at %p.\n", 
                s, 
                static_cast<void *>(this), 
                reinterpret_cast<void *>(retval)));
    }

    return retval;
}


/*! Return the value of the registered constant, (Inf, Inf) if not
    registered or no value received yet.
*/
const Vec2f& OSG::Window::getConstantValuev(GLenum val)
{
    static Vec2f inf(Inf, Inf);

    ConstHash::iterator it = _availConstants.find(val);

    if(it != _availConstants.end())
        return _availConstants[val];

    return inf;
}


/*! Initialize the OpenGL state OpenSG expects. This should be called once
    whenever a new Window is opened.
    
    Don't call it directly, call the Window System-specific init() method
    instead.
 */

void OSG::Window::setupGL( void )
{   
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glPixelStorei(GL_PACK_ALIGNMENT,   1);
    
    glDepthFunc(GL_LEQUAL    );
    glEnable   (GL_DEPTH_TEST);
    
#if !defined(OSG_OGL_COREONLY) || defined(OSG_CHECK_COREONLY)
    glEnable   (GL_NORMALIZE );
    
    // switch off default light
    Real32 nul[4]={0.f,0.f,0.f,0.f};

    glLightfv(GL_LIGHT0, GL_DIFFUSE,  nul);
    glLightfv(GL_LIGHT0, GL_SPECULAR, nul);
#endif
    
    _sfRendererInfo.getValue().assign(
        reinterpret_cast<const char *>(glGetString(GL_VERSION)));

    _sfRendererInfo.getValue() += " - ";

    _sfRendererInfo.getValue() += 
        reinterpret_cast<const char *>(glGetString(GL_RENDERER));

#ifndef __APPLE__
    std::string szVendor = 
        reinterpret_cast<const char *>(glGetString(GL_VENDOR));

    boost::to_lower(szVendor);

    std::string::size_type rc = szVendor.find("nvidia", 0);

    if(rc != std::string::npos)
    {
        _uiOGLFeatures |= HasAttribAliasing;
    }
    else
    {
        rc = szVendor.find("ati", 0);

        if(rc != std::string::npos)
        {
            _uiOGLFeatures |= HasVAODListProblems;
        }
    }
#endif

    doFrameInit();    // call it to setup extensions
}

void Window::setupTasks(void)
{
    _pWaitTask       = new WindowDrawTask(WindowDrawTask::WaitAtBarrier);
    _pSwapTask       = new WindowDrawTask(WindowDrawTask::Swap         );
    _pFrameInitTask  = new WindowDrawTask(WindowDrawTask::FrameInit    );
    _pFrameExitTask  = new WindowDrawTask(WindowDrawTask::FrameExit    );
    _pActivateTask   = new WindowDrawTask(WindowDrawTask::Activate     );
}

/*-------------------------- your_category---------------------------------*/
    
/*! Render the Window using the given RenderAction. 

    It takes care of all initialisation and cleanup functions and contains just
    5 lines of code. If you know that the correct context is active or you want
    to delay swaps (and you knwo what you are doing) you can just copy and 
    manipulate it. 
 */   
void OSG::Window::render(RenderActionBase *action)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        activate   ();
        doFrameInit();    // query recently registered GL extensions
    
        if(_mfDrawTasks.empty() == false)
        {
            MFDrawTask::const_iterator tIt  = _mfDrawTasks.begin();
            MFDrawTask::const_iterator tEnd = _mfDrawTasks.end  ();

            for(; tIt != tEnd; ++tIt)
            {
                (*tIt)->execute(this, &_oEnv);
            }

            editMField(DrawTasksFieldMask, _mfDrawTasks);

            _mfDrawTasks.clear();
        }
       
        doRenderAllViewports(action);
       
        swap       ();
        doFrameExit(); // after frame cleanup: delete dead GL objects
        deactivate ();
    }
    else if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                         ParallelPartitionDraw)
    {
        if(0x0000 != (_sfDrawMode.getValue() & ExternalContext))
        {
            this->doDeactivate();
        }

        OSG_ASSERT(_pContextThread != NULL);

        if(_pWaitTask == NULL)
        {
            setupTasks();
        }

        if(_pContextThread->isRunning() == false)
        {
            WindowDrawThread *pDrawThread = 
                dynamic_cast<WindowDrawThread *>(_pContextThread.get());

            OSG_ASSERT(pDrawThread != NULL);

            fprintf(stderr, "running partition drawthread r\n");
                       
            if(_pInitTask == NULL)
            {
                _pInitTask = new WindowDrawTask(WindowDrawTask::Init);
            }

            pDrawThread->queueTaskFront(_pInitTask);

            pDrawThread->setWindow(this);
            pDrawThread->run(Thread::getCurrentAspect());

            _pInitTask = NULL;

            _pContextThread->queueTask(_pWaitTask);

            _pWaitTask->waitForBarrier();
        }


#ifdef OSG_WIN_QUEUE_ALL
        _pContextThread->queueTask(_pWaitTask);
#endif

        if(0x0000 != (_sfDrawMode.getValue() & ExternalContext))
        {
            _pContextThread->queueTask(_pActivateTask );
        }

        _pContextThread->queueTask(_pFrameInitTask);

        if(_mfDrawTasks.empty() == false)
        {
            MFDrawTask::const_iterator tIt  = _mfDrawTasks.begin();
            MFDrawTask::const_iterator tEnd = _mfDrawTasks.end  ();

            for(; tIt != tEnd; ++tIt)
            {
                _pContextThread->queueTask(*tIt);
            }

            editMField(DrawTasksFieldMask, _mfDrawTasks);

            _mfDrawTasks.clear();
        }

        doRenderAllViewports(action);

#ifdef OSG_WIN_QUEUE_ALL
//        _pDrawThread->dumpTasks();

        _pWaitTask->waitForBarrier();
#endif
        
        if(0x0000 == (_sfDrawMode.getValue() & PassiveContext))
        {
            _pContextThread->queueTask(_pSwapTask);
        }

        _pContextThread->queueTask(_pFrameExitTask);
        
        if(0x0000 == (_sfDrawMode.getValue() & ExternalContext))
        {
            _pContextThread->queueTask(_pWaitTask     );

            _pWaitTask->waitForBarrier();
        }
        else
        {
            if(0x0000 != (_sfDrawMode.getValue() & PassiveContext))
            {
                if(action->getUseGLFinish() == false)
                {
                    if(_pGLFinishTask == NULL)
                    {
                        _pGLFinishTask = 
                            new RenderActionTask(
                                RenderActionTask::HandleGLFinishNoWait);
                    }

                    _pContextThread->queueTask(_pGLFinishTask);
                }
            }

            if(_pDeactivateTask == NULL)
            {
                _pDeactivateTask = 
                    new WindowDrawTask(WindowDrawTask::DeactivateAndWait);
            }
            
            _pContextThread->queueTask(_pDeactivateTask);

            _pDeactivateTask->waitForBarrier();

            this->doActivate();
        }
    }
    else
    {
        fprintf(stderr, "Unknow partition draw mode\n");
    }
}
    
void OSG::Window::renderNoFinish(RenderActionBase *action)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        activate   ();
        doFrameInit();    // query recently registered GL extensions
        
        if(_mfDrawTasks.empty() == false)
        {
            MFDrawTask::const_iterator tIt  = _mfDrawTasks.begin();
            MFDrawTask::const_iterator tEnd = _mfDrawTasks.end  ();

            for(; tIt != tEnd; ++tIt)
            {
                (*tIt)->execute(this, &_oEnv);
            }

            editMField(DrawTasksFieldMask, _mfDrawTasks);

            _mfDrawTasks.clear();
        }

        doRenderAllViewports(action);
    }
    else if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                         ParallelPartitionDraw)
    {
        OSG_ASSERT(_pContextThread != NULL);

        if(_pWaitTask == NULL)
        {
            setupTasks();
        }

        if(_pContextThread->isRunning() == false)
        {
            WindowDrawThread *pDrawThread = 
                dynamic_cast<WindowDrawThread *>(_pContextThread.get());

            OSG_ASSERT(pDrawThread != NULL);

            fprintf(stderr, "running partition drawthread rnf\n");
                       
            if(_pInitTask == NULL)
            {
                _pInitTask = new WindowDrawTask(WindowDrawTask::Init);
            }

            pDrawThread->queueTaskFront(_pInitTask);

            pDrawThread->setWindow(this);
            pDrawThread->run(Thread::getCurrentAspect());

            _pInitTask = NULL;

            _pContextThread->queueTask(_pWaitTask);

            _pWaitTask->waitForBarrier();
        }

        if(_mfDrawTasks.empty() == false)
        {
            MFDrawTask::const_iterator tIt  = _mfDrawTasks.begin();
            MFDrawTask::const_iterator tEnd = _mfDrawTasks.end  ();

            for(; tIt != tEnd; ++tIt)
            {
                _pContextThread->queueTask(*tIt);
            }

            editMField(DrawTasksFieldMask, _mfDrawTasks);

            _mfDrawTasks.clear();
        }

        this->doRenderAllViewports(action);
    }
    else
    {
        fprintf(stderr, "Unknow partition draw mode\n");
    }
}

void OSG::Window::frameFinish(bool bActivate)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        if(bActivate == true)
            activate();
        
        swap       ();
        doFrameExit(); // after frame cleanup: delete dead GL objects

    }
    else if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                         ParallelPartitionDraw)
    {
        OSG_ASSERT(_pContextThread != NULL);

        if(_pWaitTask == NULL || _pContextThread->isRunning() == false)
        {
            fprintf(stderr, "Window::frameFinish::frame not started\n");
        }

        if(bActivate == true)
            _pContextThread->queueTask(_pActivateTask);
        
        _pContextThread->queueTask(_pSwapTask     );

        _pContextThread->queueTask(_pFrameExitTask);

        _pContextThread->queueTask(_pWaitTask     );

        _pWaitTask->waitForBarrier();
    }
    else
    {
        fprintf(stderr, "Unknow partition draw mode\n");
    }
}

void OSG::Window::runFrameExit(void)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        activate  ();
        doFrameExit (); // after frame cleanup: delete dead GL objects
        deactivate();
    }
    else if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                         ParallelPartitionDraw)
    {
        if(_pWaitTask == NULL || _pContextThread->isRunning() == false)
        {
            fprintf(stderr, "Window::runFrameExit::frame not started\n");
        }

        _pContextThread->queueTask(_pActivateTask);
        _pContextThread->queueTask(_pFrameExitTask);

        _pContextThread->queueTask(_pWaitTask     );

        _pWaitTask->waitForBarrier();
    }
    else
    {
        fprintf(stderr, "Unknow partition draw mode\n");
    }
}

void Window::activate(void)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        if(0x0000 == (_sfDrawMode.getValue() & PassiveContext))
        {
            this->doActivate();
        }
    }
}

void Window::deactivate(void)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        if(0x0000 == (_sfDrawMode.getValue() & PassiveContext))
        {
            this->doDeactivate();
        }
    }
}

// swap front and back buffers
bool Window::swap(void)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        if(0x0000 == (_sfDrawMode.getValue() & PassiveContext))
        {
            return this->doSwap();
        }        
    }

    return true;
}

void OSG::Window::frameInit(void)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        this->doFrameInit();
    }
}

void OSG::Window::frameExit(void)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        this->doFrameExit();
    }
}

void OSG::Window::renderAllViewports(RenderActionBase *action)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {
        this->doRenderAllViewports(action);
    }
}

/*! Render all the Viewports of the Window using the given RenderAction. 

    A simple convenience function that loops all Viewports and call their draw
    method.
 */   

void OSG::Window::doRenderAllViewports(RenderActionBase *action)
{
    if(action != NULL)
    {
        commitChanges();

        MFUnrecChildViewportPtr::const_iterator portIt  = getMFPort()->begin();
        MFUnrecChildViewportPtr::const_iterator portEnd = getMFPort()->end  ();
        Int32                                   iVPId   = 0;

        action->setWindow(this);
        
        if(this->getDrawerId() < 0)
        {
            action->setDrawerId(this->_windowId);
        }
        else
        {
            action->setDrawerId(this->getDrawerId());
        }

        if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                       SequentialPartitionDraw)
        {
            action->setDrawPartPar(false);
        }
        else if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                         ParallelPartitionDraw)
        {
            action->setDrawPartPar(true);
        }

        action->frameInit();

        for(; portIt != portEnd; ++portIt, ++iVPId)
        {
            if((*portIt)->getDrawableId() < 0)
            {
                action->setDrawableId(iVPId);
            }
            else
            {
                action->setDrawableId((*portIt)->getDrawableId());
            }

            if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                       SequentialPartitionDraw)
            {
                (*portIt)->render(action);
            }
            else if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                         ParallelPartitionDraw)
            {
                (*portIt)->render(action);

#if 0
                OSG_ASSERT(_pWaitTask != NULL);

                _pContextThread->queueTask(_pWaitTask     );

                _pWaitTask->waitForBarrier();
#endif
            }
        }
    }
    else
    {
        SWARNING << "Window::renderAllViewports: no action!" << std::endl;
    }
}

/*! Resize notifier function. 

    As OpenSG does not do Window System event management it needs to be
    notified whenever the size of a Window changes. 
 */   

void OSG::Window::resize( int width, int height )
{
    setWidth        (width );
    setHeight       (height);
}
    

void OSG::Window::init(GLInitFunctor oFunc)
{
    if((_sfDrawMode.getValue() & PartitionDrawMask) == SequentialPartitionDraw)
    {  
        this->activate();

        setupGL();
              
        if(oFunc)
            oFunc();

        this->deactivate();
    }
    else if((_sfDrawMode.getValue() & DrawerMask) == StdDrawer)
    {
        if(_pInitTask == NULL)
        {
            _pInitTask = new WindowDrawTask(WindowDrawTask::Init);
        }
        
        _pInitTask->setInitFunc(oFunc);

        OSG_ASSERT(_pContextThread != NULL);

        if(_pContextThread->isRunning() == false)
        {
            WindowDrawThread *pDrawThread = 
                dynamic_cast<WindowDrawThread *>(_pContextThread.get());

            OSG_ASSERT(pDrawThread != NULL);

            fprintf(stderr, "running partition drawthread init\n");
                       
            pDrawThread->queueTaskFront(_pInitTask);

            pDrawThread->setWindow(this);
            pDrawThread->run(Thread::getCurrentAspect());

            _pInitTask = NULL;
        }

        if(_pWaitTask == NULL)
        {
            setupTasks();
        }
        
        _pContextThread->queueTask(_pWaitTask);

        _pWaitTask->waitForBarrier();
    }
    else
    {
        fprintf(stderr, "Unknown partition draw mode 0x%04x\n",
                _sfDrawMode.getValue());
    }
}

void OSG::Window::requestStageRun(Int32 iStageId)
{
    if(iStageId < 0)
    {
        SWARNING << "Window::requestStageRun: id is < 0!" << std::endl;
        return;
    }

    WindowStore::const_iterator winIt  = _allWindows.begin();
    WindowStore::const_iterator winEnd = _allWindows.end  ();

    for(; winIt != winEnd; ++winIt)
    {
        Window *pWin = *winIt;

        if(pWin == NULL)
            continue;

        pWin->_pTravValidator->requestRun(iStageId);
    }
}

/*------------------------------- dump ----------------------------------*/

/*! output the instance for debug purposes
*/
void OSG::Window::dump(      UInt32    OSG_CHECK_ARG(uiIndent), 
                       const BitVector OSG_CHECK_ARG(bvFlags )) const
{
    SLOG << "Dump Window NI" << std::endl;
}

void Window::staticDump(void)
{
    staticAcquire();
    fprintf(stderr, "Window::sdump %zd %zd\n",
            _glObjects.size(),
            _glObjects.capacity());

    for(UInt32 i = 0; i < _glObjects.size(); ++i)
    {
        fprintf(stderr, "gl[%d] = %p\n", i, static_cast<void *>(_glObjects[i]));
    }
    staticRelease();
}

void Window::resolveLinks(void)
{
    if(_pShaderCache != NULL)
    {
        _pShaderCache->clear();
    }

    Inherited::resolveLinks();
}

void Window::queueTaskFromDrawer(DrawTask *pTask)
{
    if(pTask == NULL)
        return;

    OSG_ASSERT(_pContextThread != NULL);

    if((_sfDrawMode.getValue() & PartitionDrawMask) == ParallelPartitionDraw)
    {
        _pContextThread->queueTask(pTask);
    }
    else
    {
        pTask->execute(this, &_oEnv);
    }
}

void Window::queueTask(DrawTask *pTask)
{
    if(pTask == NULL)
        return;

    if((_sfDrawMode.getValue() & DrawerMask) == StdDrawer)
    {
        if((_sfDrawMode.getValue() & PartitionDrawMask) == 
                                                         ParallelPartitionDraw)
        {
            if(0x0000 != (_sfDrawMode.getValue() & ExternalContext))
            {
                editMField(DrawTasksFieldMask, _mfDrawTasks);

                _mfDrawTasks.push_back(pTask);
            }
            else
            {
                OSG_ASSERT(_pContextThread != NULL);

                _pContextThread->queueTask(pTask);
            }
        }
        else
        {
            editMField(DrawTasksFieldMask, _mfDrawTasks);

            _mfDrawTasks.push_back(pTask);
        }
    }
    else if((_sfDrawMode.getValue() & DrawerMask) == ParallelDrawer)
    {
        editMField(DrawTasksFieldMask, _mfDrawTasks);

        _mfDrawTasks.push_back(pTask);
    }
}

void OSG::Window::queueGlobalTask(DrawTask *pTask)
{
    if(pTask == NULL)
        return;

    WindowStore::const_iterator winIt  = _allWindows.begin();
    WindowStore::const_iterator winEnd = _allWindows.end  ();

    for(; winIt != winEnd; ++winIt)
    {
        Window *pWin = *winIt;

        if(pWin == NULL)
            continue;

        pWin->queueTask(pTask);
    }
}

void Window::submitTask(HardwareContextTask *pTask)
{
    if(pTask == NULL)
        return;

    OSG_ASSERT(_pContextThread != NULL);

    if((_sfDrawMode.getValue() & PartitionDrawMask) == ParallelPartitionDraw)
    {
        _pContextThread->queueTask(pTask);
    }
    else
    {
        pTask->execute(this, &_oEnv);
    }
}

void Window::submitTaskAndWait(BlockingTask *pTask)
{
    if(pTask == NULL)
        return;

    OSG_ASSERT(_pContextThread != NULL);

    if((_sfDrawMode.getValue() & PartitionDrawMask) == ParallelPartitionDraw)
    {
        pTask->activateBarrier(true);
        pTask->setNumWaitFor(2);

        _pContextThread->queueTask(pTask);

        pTask->waitForBarrier();
    }
    else
    {
        pTask->execute(this, &_oEnv);
    }
}

void Window::pushToDrawTasks(DrawTask * const value)
{
    if(value == NULL)
        return;

    editMField(DrawTasksFieldMask, _mfDrawTasks);

    _mfDrawTasks.push_back(value);
}

void Window::clearDrawTasks(void)
{
    editMField(DrawTasksFieldMask, _mfDrawTasks);

    _mfDrawTasks.clear();
}

OSG_END_NAMESPACE
