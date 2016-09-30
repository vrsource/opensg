/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class PostShaderStageData!
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



#include "OSGChunkMaterial.h"           // ShaderMaterials Class
#include "OSGFrameBufferObject.h"       // RenderTargets Class
#include "OSGCamera.h"                  // Camera Class

#include "OSGPostShaderStageDataBase.h"
#include "OSGPostShaderStageData.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PostShaderStageData
    Data used for rendering by the Fog effect stage
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ChunkMaterial * PostShaderStageDataBase::_mfShaderMaterials
    
*/

/*! \var Int32           PostShaderStageDataBase::_sfWidth
    
*/

/*! \var Int32           PostShaderStageDataBase::_sfHeight
    
*/

/*! \var FrameBufferObject * PostShaderStageDataBase::_mfRenderTargets
    
*/

/*! \var Camera *        PostShaderStageDataBase::_sfCamera
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<PostShaderStageData *, nsOSG>::_type(
    "PostShaderStageDataPtr", 
    "StageDataPtr", 
    PostShaderStageData::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(PostShaderStageData *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PostShaderStageDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecChunkMaterialPtr::Description(
        MFUnrecChunkMaterialPtr::getClassType(),
        "ShaderMaterials",
        "",
        ShaderMaterialsFieldId, ShaderMaterialsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStageData::editHandleShaderMaterials),
        static_cast<FieldGetMethodSig >(&PostShaderStageData::getHandleShaderMaterials));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "Width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStageData::editHandleWidth),
        static_cast<FieldGetMethodSig >(&PostShaderStageData::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "Height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStageData::editHandleHeight),
        static_cast<FieldGetMethodSig >(&PostShaderStageData::getHandleHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecFrameBufferObjectPtr::Description(
        MFUnrecFrameBufferObjectPtr::getClassType(),
        "RenderTargets",
        "",
        RenderTargetsFieldId, RenderTargetsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStageData::editHandleRenderTargets),
        static_cast<FieldGetMethodSig >(&PostShaderStageData::getHandleRenderTargets));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecCameraPtr::Description(
        SFUnrecCameraPtr::getClassType(),
        "Camera",
        "",
        CameraFieldId, CameraFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PostShaderStageData::editHandleCamera),
        static_cast<FieldGetMethodSig >(&PostShaderStageData::getHandleCamera));

    oType.addInitialDesc(pDesc);
}


PostShaderStageDataBase::TypeObject PostShaderStageDataBase::_type(
    PostShaderStageDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&PostShaderStageDataBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&PostShaderStageData::initMethod),
    reinterpret_cast<ExitContainerF>(&PostShaderStageData::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&PostShaderStageData::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"PostShaderStageData\"\n"
    "    parent=\"StageData\"\n"
    "    library=\"EffectGroups\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    docGroupBase=\"GrpEffectsGroupsMisc\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)\"\n"
    "    >\n"
    "    Data used for rendering by the Fog effect stage\n"
    "    <Field\n"
    "        name=\"ShaderMaterials\"\n"
    "        type=\"ChunkMaterial\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"Width\"\n"
    "        type=\"Int32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"0\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"Height\"\n"
    "        type=\"Int32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"0\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"RenderTargets\"\n"
    "        type=\"FrameBufferObject\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        category=\"pointer\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"Camera\"\n"
    "        type=\"Camera\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "Data used for rendering by the Fog effect stage\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PostShaderStageDataBase::getType(void)
{
    return _type;
}

const FieldContainerType &PostShaderStageDataBase::getType(void) const
{
    return _type;
}

UInt32 PostShaderStageDataBase::getContainerSize(void) const
{
    return sizeof(PostShaderStageData);
}

/*------------------------- decorator get ------------------------------*/


//! Get the PostShaderStageData::_mfShaderMaterials field.
const MFUnrecChunkMaterialPtr *PostShaderStageDataBase::getMFShaderMaterials(void) const
{
    return &_mfShaderMaterials;
}

MFUnrecChunkMaterialPtr *PostShaderStageDataBase::editMFShaderMaterials(void)
{
    editMField(ShaderMaterialsFieldMask, _mfShaderMaterials);

    return &_mfShaderMaterials;
}
ChunkMaterial * PostShaderStageDataBase::getShaderMaterials(const UInt32 index) const
{
    return _mfShaderMaterials[index];
}

SFInt32 *PostShaderStageDataBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFInt32 *PostShaderStageDataBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFInt32 *PostShaderStageDataBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFInt32 *PostShaderStageDataBase::getSFHeight(void) const
{
    return &_sfHeight;
}


//! Get the PostShaderStageData::_mfRenderTargets field.
const MFUnrecFrameBufferObjectPtr *PostShaderStageDataBase::getMFRenderTargets(void) const
{
    return &_mfRenderTargets;
}

MFUnrecFrameBufferObjectPtr *PostShaderStageDataBase::editMFRenderTargets  (void)
{
    editMField(RenderTargetsFieldMask, _mfRenderTargets);

    return &_mfRenderTargets;
}
FrameBufferObject * PostShaderStageDataBase::getRenderTargets(const UInt32 index) const
{
    return _mfRenderTargets[index];
}

//! Get the PostShaderStageData::_sfCamera field.
const SFUnrecCameraPtr *PostShaderStageDataBase::getSFCamera(void) const
{
    return &_sfCamera;
}

SFUnrecCameraPtr    *PostShaderStageDataBase::editSFCamera         (void)
{
    editSField(CameraFieldMask);

    return &_sfCamera;
}

//! Get the value of the PostShaderStageData::_sfCamera field.
Camera * PostShaderStageDataBase::getCamera(void) const
{
    return _sfCamera.getValue();
}

//! Set the value of the PostShaderStageData::_sfCamera field.
void PostShaderStageDataBase::setCamera(Camera * const value)
{
    editSField(CameraFieldMask);

    _sfCamera.setValue(value);
}




void PostShaderStageDataBase::pushToShaderMaterials(ChunkMaterial * const value)
{
    editMField(ShaderMaterialsFieldMask, _mfShaderMaterials);

    _mfShaderMaterials.push_back(value);
}

void PostShaderStageDataBase::assignShaderMaterials(const MFUnrecChunkMaterialPtr &value)
{
    MFUnrecChunkMaterialPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecChunkMaterialPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<PostShaderStageData *>(this)->clearShaderMaterials();

    while(elemIt != elemEnd)
    {
        this->pushToShaderMaterials(*elemIt);

        ++elemIt;
    }
}

void PostShaderStageDataBase::removeFromShaderMaterials(UInt32 uiIndex)
{
    if(uiIndex < _mfShaderMaterials.size())
    {
        editMField(ShaderMaterialsFieldMask, _mfShaderMaterials);

        _mfShaderMaterials.erase(uiIndex);
    }
}

void PostShaderStageDataBase::removeObjFromShaderMaterials(ChunkMaterial * const value)
{
    Int32 iElemIdx = _mfShaderMaterials.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ShaderMaterialsFieldMask, _mfShaderMaterials);

        _mfShaderMaterials.erase(iElemIdx);
    }
}
void PostShaderStageDataBase::clearShaderMaterials(void)
{
    editMField(ShaderMaterialsFieldMask, _mfShaderMaterials);


    _mfShaderMaterials.clear();
}

void PostShaderStageDataBase::pushToRenderTargets(FrameBufferObject * const value)
{
    editMField(RenderTargetsFieldMask, _mfRenderTargets);

    _mfRenderTargets.push_back(value);
}

void PostShaderStageDataBase::assignRenderTargets(const MFUnrecFrameBufferObjectPtr &value)
{
    MFUnrecFrameBufferObjectPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecFrameBufferObjectPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<PostShaderStageData *>(this)->clearRenderTargets();

    while(elemIt != elemEnd)
    {
        this->pushToRenderTargets(*elemIt);

        ++elemIt;
    }
}

void PostShaderStageDataBase::removeFromRenderTargets(UInt32 uiIndex)
{
    if(uiIndex < _mfRenderTargets.size())
    {
        editMField(RenderTargetsFieldMask, _mfRenderTargets);

        _mfRenderTargets.erase(uiIndex);
    }
}

void PostShaderStageDataBase::removeObjFromRenderTargets(FrameBufferObject * const value)
{
    Int32 iElemIdx = _mfRenderTargets.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(RenderTargetsFieldMask, _mfRenderTargets);

        _mfRenderTargets.erase(iElemIdx);
    }
}
void PostShaderStageDataBase::clearRenderTargets(void)
{
    editMField(RenderTargetsFieldMask, _mfRenderTargets);


    _mfRenderTargets.clear();
}



/*------------------------------ access -----------------------------------*/

SizeT PostShaderStageDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShaderMaterialsFieldMask & whichField))
    {
        returnValue += _mfShaderMaterials.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (RenderTargetsFieldMask & whichField))
    {
        returnValue += _mfRenderTargets.getBinSize();
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        returnValue += _sfCamera.getBinSize();
    }

    return returnValue;
}

void PostShaderStageDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShaderMaterialsFieldMask & whichField))
    {
        _mfShaderMaterials.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RenderTargetsFieldMask & whichField))
    {
        _mfRenderTargets.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyToBin(pMem);
    }
}

void PostShaderStageDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShaderMaterialsFieldMask & whichField))
    {
        editMField(ShaderMaterialsFieldMask, _mfShaderMaterials);
        _mfShaderMaterials.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        editSField(WidthFieldMask);
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        editSField(HeightFieldMask);
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RenderTargetsFieldMask & whichField))
    {
        editMField(RenderTargetsFieldMask, _mfRenderTargets);
        _mfRenderTargets.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        editSField(CameraFieldMask);
        _sfCamera.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PostShaderStageDataTransitPtr PostShaderStageDataBase::createLocal(BitVector bFlags)
{
    PostShaderStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PostShaderStageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PostShaderStageDataTransitPtr PostShaderStageDataBase::createDependent(BitVector bFlags)
{
    PostShaderStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PostShaderStageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PostShaderStageDataTransitPtr PostShaderStageDataBase::create(void)
{
    PostShaderStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PostShaderStageData>(tmpPtr);
    }

    return fc;
}

PostShaderStageData *PostShaderStageDataBase::createEmptyLocal(BitVector bFlags)
{
    PostShaderStageData *returnValue;

    newPtr<PostShaderStageData>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PostShaderStageData *PostShaderStageDataBase::createEmpty(void)
{
    PostShaderStageData *returnValue;

    newPtr<PostShaderStageData>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PostShaderStageDataBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PostShaderStageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PostShaderStageData *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PostShaderStageDataBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PostShaderStageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PostShaderStageData *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PostShaderStageDataBase::shallowCopy(void) const
{
    PostShaderStageData *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PostShaderStageData *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PostShaderStageDataBase::PostShaderStageDataBase(void) :
    Inherited(),
    _mfShaderMaterials        (),
    _sfWidth                  (Int32(0)),
    _sfHeight                 (Int32(0)),
    _mfRenderTargets          (),
    _sfCamera                 (NULL)
{
}

PostShaderStageDataBase::PostShaderStageDataBase(const PostShaderStageDataBase &source) :
    Inherited(source),
    _mfShaderMaterials        (),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _mfRenderTargets          (),
    _sfCamera                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

PostShaderStageDataBase::~PostShaderStageDataBase(void)
{
}

void PostShaderStageDataBase::onCreate(const PostShaderStageData *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        PostShaderStageData *pThis = static_cast<PostShaderStageData *>(this);

        MFUnrecChunkMaterialPtr::const_iterator ShaderMaterialsIt  =
            source->_mfShaderMaterials.begin();
        MFUnrecChunkMaterialPtr::const_iterator ShaderMaterialsEnd =
            source->_mfShaderMaterials.end  ();

        while(ShaderMaterialsIt != ShaderMaterialsEnd)
        {
            pThis->pushToShaderMaterials(*ShaderMaterialsIt);

            ++ShaderMaterialsIt;
        }

        MFUnrecFrameBufferObjectPtr::const_iterator RenderTargetsIt  =
            source->_mfRenderTargets.begin();
        MFUnrecFrameBufferObjectPtr::const_iterator RenderTargetsEnd =
            source->_mfRenderTargets.end  ();

        while(RenderTargetsIt != RenderTargetsEnd)
        {
            pThis->pushToRenderTargets(*RenderTargetsIt);

            ++RenderTargetsIt;
        }

        pThis->setCamera(source->getCamera());
    }
}

GetFieldHandlePtr PostShaderStageDataBase::getHandleShaderMaterials (void) const
{
    MFUnrecChunkMaterialPtr::GetHandlePtr returnValue(
        new  MFUnrecChunkMaterialPtr::GetHandle(
             &_mfShaderMaterials,
             this->getType().getFieldDesc(ShaderMaterialsFieldId),
             const_cast<PostShaderStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageDataBase::editHandleShaderMaterials(void)
{
    MFUnrecChunkMaterialPtr::EditHandlePtr returnValue(
        new  MFUnrecChunkMaterialPtr::EditHandle(
             &_mfShaderMaterials,
             this->getType().getFieldDesc(ShaderMaterialsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&PostShaderStageData::pushToShaderMaterials,
                    static_cast<PostShaderStageData *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&PostShaderStageData::removeFromShaderMaterials,
                    static_cast<PostShaderStageData *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&PostShaderStageData::removeObjFromShaderMaterials,
                    static_cast<PostShaderStageData *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&PostShaderStageData::clearShaderMaterials,
                    static_cast<PostShaderStageData *>(this)));

    editMField(ShaderMaterialsFieldMask, _mfShaderMaterials);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageDataBase::getHandleWidth           (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             const_cast<PostShaderStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageDataBase::editHandleWidth          (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             this));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageDataBase::getHandleHeight          (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             const_cast<PostShaderStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageDataBase::editHandleHeight         (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             this));


    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageDataBase::getHandleRenderTargets   (void) const
{
    MFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  MFUnrecFrameBufferObjectPtr::GetHandle(
             &_mfRenderTargets,
             this->getType().getFieldDesc(RenderTargetsFieldId),
             const_cast<PostShaderStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageDataBase::editHandleRenderTargets  (void)
{
    MFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  MFUnrecFrameBufferObjectPtr::EditHandle(
             &_mfRenderTargets,
             this->getType().getFieldDesc(RenderTargetsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&PostShaderStageData::pushToRenderTargets,
                    static_cast<PostShaderStageData *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&PostShaderStageData::removeFromRenderTargets,
                    static_cast<PostShaderStageData *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&PostShaderStageData::removeObjFromRenderTargets,
                    static_cast<PostShaderStageData *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&PostShaderStageData::clearRenderTargets,
                    static_cast<PostShaderStageData *>(this)));

    editMField(RenderTargetsFieldMask, _mfRenderTargets);

    return returnValue;
}

GetFieldHandlePtr PostShaderStageDataBase::getHandleCamera          (void) const
{
    SFUnrecCameraPtr::GetHandlePtr returnValue(
        new  SFUnrecCameraPtr::GetHandle(
             &_sfCamera,
             this->getType().getFieldDesc(CameraFieldId),
             const_cast<PostShaderStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PostShaderStageDataBase::editHandleCamera         (void)
{
    SFUnrecCameraPtr::EditHandlePtr returnValue(
        new  SFUnrecCameraPtr::EditHandle(
             &_sfCamera,
             this->getType().getFieldDesc(CameraFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PostShaderStageData::setCamera,
                    static_cast<PostShaderStageData *>(this), _1));

    editSField(CameraFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PostShaderStageDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PostShaderStageData *pThis = static_cast<PostShaderStageData *>(this);

    pThis->execSync(static_cast<PostShaderStageData *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PostShaderStageDataBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PostShaderStageData *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PostShaderStageData *>(pRefAspect),
                  dynamic_cast<const PostShaderStageData *>(this));

    return returnValue;
}
#endif

void PostShaderStageDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<PostShaderStageData *>(this)->clearShaderMaterials();

    static_cast<PostShaderStageData *>(this)->clearRenderTargets();

    static_cast<PostShaderStageData *>(this)->setCamera(NULL);


}


OSG_END_NAMESPACE
