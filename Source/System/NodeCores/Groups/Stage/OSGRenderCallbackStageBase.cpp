/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class RenderCallbackStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#ifdef WIN32 
#pragma warning(disable: 4355) // turn off 'this' : used in base member initializer list warning
#pragma warning(disable: 4290) // disable exception specification warning
#endif

#include "OSGConfig.h"




#include "OSGRenderCallbackStageBase.h"
#include "OSGRenderCallbackStage.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RenderCallbackStage
    Extension to the Stage core that groups its subtree. It inherits all
    parameters from it parent.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var RenderFunctorCallback RenderCallbackStageBase::_mfPreRenderCallbacks
    The foreground additions to the rendered image.
*/

/*! \var RenderFunctorCallback RenderCallbackStageBase::_mfPostRenderCallbacks
    The foreground additions to the rendered image.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<RenderCallbackStage *, nsOSG>::_type(
    "RenderCallbackStagePtr", 
    "StagePtr", 
    RenderCallbackStage::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(RenderCallbackStage *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RenderCallbackStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFRenderFunctorCallback::Description(
        MFRenderFunctorCallback::getClassType(),
        "preRenderCallbacks",
        "The foreground additions to the rendered image.\n",
        PreRenderCallbacksFieldId, PreRenderCallbacksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&RenderCallbackStage::invalidEditField),
        static_cast     <FieldGetMethodSig >(&RenderCallbackStage::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFRenderFunctorCallback::Description(
        MFRenderFunctorCallback::getClassType(),
        "postRenderCallbacks",
        "The foreground additions to the rendered image.\n",
        PostRenderCallbacksFieldId, PostRenderCallbacksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&RenderCallbackStage::invalidEditField),
        static_cast     <FieldGetMethodSig >(&RenderCallbackStage::invalidGetField));

    oType.addInitialDesc(pDesc);
}


RenderCallbackStageBase::TypeObject RenderCallbackStageBase::_type(
    RenderCallbackStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&RenderCallbackStageBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&RenderCallbackStage::initMethod),
    reinterpret_cast<ExitContainerF>(&RenderCallbackStage::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&RenderCallbackStage::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"RenderCallbackStage\"\n"
    "   parent=\"Stage\"\n"
    "   library=\"Group\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"true\"\n"
    "   docGroupBase=\"GrpGroupStage\"\n"
    "   >\n"
    "  Extension to the Stage core that groups its subtree. It inherits all\n"
    "  parameters from it parent.\n"
    "\n"
    "  <Field\n"
    "     name=\"preRenderCallbacks\"\n"
    "     type=\"RenderFunctorCallback\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"none\"\n"
    "     >\n"
    "    The foreground additions to the rendered image.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"postRenderCallbacks\"\n"
    "     type=\"RenderFunctorCallback\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"none\"\n"
    "     >\n"
    "    The foreground additions to the rendered image.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Extension to the Stage core that groups its subtree. It inherits all\n"
    "parameters from it parent.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RenderCallbackStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &RenderCallbackStageBase::getType(void) const
{
    return _type;
}

UInt32 RenderCallbackStageBase::getContainerSize(void) const
{
    return sizeof(RenderCallbackStage);
}

/*------------------------- decorator get ------------------------------*/








/*------------------------------ access -----------------------------------*/

SizeT RenderCallbackStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PreRenderCallbacksFieldMask & whichField))
    {
        returnValue += _mfPreRenderCallbacks.getBinSize();
    }
    if(FieldBits::NoField != (PostRenderCallbacksFieldMask & whichField))
    {
        returnValue += _mfPostRenderCallbacks.getBinSize();
    }

    return returnValue;
}

void RenderCallbackStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PreRenderCallbacksFieldMask & whichField))
    {
        _mfPreRenderCallbacks.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PostRenderCallbacksFieldMask & whichField))
    {
        _mfPostRenderCallbacks.copyToBin(pMem);
    }
}

void RenderCallbackStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PreRenderCallbacksFieldMask & whichField))
    {
        editMField(PreRenderCallbacksFieldMask, _mfPreRenderCallbacks);
        _mfPreRenderCallbacks.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PostRenderCallbacksFieldMask & whichField))
    {
        editMField(PostRenderCallbacksFieldMask, _mfPostRenderCallbacks);
        _mfPostRenderCallbacks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RenderCallbackStageTransitPtr RenderCallbackStageBase::createLocal(BitVector bFlags)
{
    RenderCallbackStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RenderCallbackStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RenderCallbackStageTransitPtr RenderCallbackStageBase::createDependent(BitVector bFlags)
{
    RenderCallbackStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RenderCallbackStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RenderCallbackStageTransitPtr RenderCallbackStageBase::create(void)
{
    RenderCallbackStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RenderCallbackStage>(tmpPtr);
    }

    return fc;
}

RenderCallbackStage *RenderCallbackStageBase::createEmptyLocal(BitVector bFlags)
{
    RenderCallbackStage *returnValue;

    newPtr<RenderCallbackStage>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RenderCallbackStage *RenderCallbackStageBase::createEmpty(void)
{
    RenderCallbackStage *returnValue;

    newPtr<RenderCallbackStage>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RenderCallbackStageBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RenderCallbackStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RenderCallbackStage *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RenderCallbackStageBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RenderCallbackStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RenderCallbackStage *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RenderCallbackStageBase::shallowCopy(void) const
{
    RenderCallbackStage *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RenderCallbackStage *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RenderCallbackStageBase::RenderCallbackStageBase(void) :
    Inherited(),
    _mfPreRenderCallbacks     (),
    _mfPostRenderCallbacks    ()
{
}

RenderCallbackStageBase::RenderCallbackStageBase(const RenderCallbackStageBase &source) :
    Inherited(source),
    _mfPreRenderCallbacks     (source._mfPreRenderCallbacks     ),
    _mfPostRenderCallbacks    (source._mfPostRenderCallbacks    )
{
}


/*-------------------------- destructors ----------------------------------*/

RenderCallbackStageBase::~RenderCallbackStageBase(void)
{
}


GetFieldHandlePtr RenderCallbackStageBase::getHandlePreRenderCallbacks (void) const
{
    MFRenderFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr RenderCallbackStageBase::editHandlePreRenderCallbacks(void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr RenderCallbackStageBase::getHandlePostRenderCallbacks (void) const
{
    MFRenderFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr RenderCallbackStageBase::editHandlePostRenderCallbacks(void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RenderCallbackStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RenderCallbackStage *pThis = static_cast<RenderCallbackStage *>(this);

    pThis->execSync(static_cast<RenderCallbackStage *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RenderCallbackStageBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RenderCallbackStage *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RenderCallbackStage *>(pRefAspect),
                  dynamic_cast<const RenderCallbackStage *>(this));

    return returnValue;
}
#endif

void RenderCallbackStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfPreRenderCallbacks.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPostRenderCallbacks.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
