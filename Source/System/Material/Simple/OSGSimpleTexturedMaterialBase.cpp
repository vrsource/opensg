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
 **     class SimpleTexturedMaterial!
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


#include "OSGGL.h"                        // MinFilter default header
#include "OSGGL.h"                        // MagFilter default header
#include "OSGGL.h"                        // EnvMode default header

#include "OSGImage.h"                   // Image Class

#include "OSGSimpleTexturedMaterialBase.h"
#include "OSGSimpleTexturedMaterial.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleTexturedMaterial
    The simple textured material class. See \ref
    PageSystemMaterialTexturedSimpleMaterial for a description.

    A OSG::SimpleMaterial with an added texture. It doesn't expose all features 
    of the texture, just the ones needed most often.

    OSG::SimpleTexturedMaterial::_sfImage defines the texture, 
    OSG::SimpleTexturedMaterial::_sfMinFilter and
    OSG::SimpleTexturedMaterial::_sfMagFilter the used filters and 
    OSG::SimpleTexturedMaterial::_sfEnvMode the environment mode. As a special 
    case
    OSG::SimpleTexturedMaterial::_sfEnvMap can be used to use the texture as a
    spherical environment map.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Image *         SimpleTexturedMaterialBase::_sfImage
    Defines the texture image.
*/

/*! \var GLenum          SimpleTexturedMaterialBase::_sfMinFilter
    Defines the minification filter, see glTexParameter for details.
    Default: GL_LINEAR_MIPMAP_LINEAR.
*/

/*! \var GLenum          SimpleTexturedMaterialBase::_sfMagFilter
    Defines the magnification filter, see glTexParameter for details.
    Default: GL_LINEAR
*/

/*! \var GLenum          SimpleTexturedMaterialBase::_sfEnvMode
    Sets the environment mode, defining how texture and lighting color interact.
    Default: GL_REPLACE.
*/

/*! \var bool            SimpleTexturedMaterialBase::_sfEnvMap
    Defines whether to use the texture as a spherical environment map.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<SimpleTexturedMaterial *, nsOSG>::_type(
    "SimpleTexturedMaterialPtr", 
    "SimpleMaterialPtr", 
    SimpleTexturedMaterial::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(SimpleTexturedMaterial *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SimpleTexturedMaterial *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SimpleTexturedMaterial *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SimpleTexturedMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "image",
        "Defines the texture image.\n",
        ImageFieldId, ImageFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterial::editHandleImage),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterial::getHandleImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "minFilter",
        "Defines the minification filter, see glTexParameter for details.\n"
        "Default: GL_LINEAR_MIPMAP_LINEAR.\n",
        MinFilterFieldId, MinFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterial::editHandleMinFilter),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterial::getHandleMinFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "magFilter",
        "Defines the magnification filter, see glTexParameter for details.\n"
        "Default: GL_LINEAR\n",
        MagFilterFieldId, MagFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterial::editHandleMagFilter),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterial::getHandleMagFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "envMode",
        "Sets the environment mode, defining how texture and lighting color interact.\n"
        "Default: GL_REPLACE.\n",
        EnvModeFieldId, EnvModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterial::editHandleEnvMode),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterial::getHandleEnvMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "envMap",
        "Defines whether to use the texture as a spherical environment map.\n",
        EnvMapFieldId, EnvMapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleTexturedMaterial::editHandleEnvMap),
        static_cast<FieldGetMethodSig >(&SimpleTexturedMaterial::getHandleEnvMap));

    oType.addInitialDesc(pDesc);
}


SimpleTexturedMaterialBase::TypeObject SimpleTexturedMaterialBase::_type(
    SimpleTexturedMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&SimpleTexturedMaterialBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&SimpleTexturedMaterial::initMethod),
    reinterpret_cast<ExitContainerF>(&SimpleTexturedMaterial::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&SimpleTexturedMaterial::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SimpleTexturedMaterial\"\n"
    "   parent=\"SimpleMaterial\"\n"
    "   library=\"Drawable\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpDrawablesMaterial\"\n"
    "   >\n"
    "  The simple textured material class. See \\ref\n"
    "  PageSystemMaterialTexturedSimpleMaterial for a description.\n"
    "\n"
    "  A OSG::SimpleMaterial with an added texture. It doesn't expose all features \n"
    "  of the texture, just the ones needed most often.\n"
    "\n"
    "  OSG::SimpleTexturedMaterial::_sfImage defines the texture, \n"
    "  OSG::SimpleTexturedMaterial::_sfMinFilter and\n"
    "  OSG::SimpleTexturedMaterial::_sfMagFilter the used filters and \n"
    "  OSG::SimpleTexturedMaterial::_sfEnvMode the environment mode. As a special \n"
    "  case\n"
    "  OSG::SimpleTexturedMaterial::_sfEnvMap can be used to use the texture as a\n"
    "  spherical environment map.\n"
    "  <Field\n"
    "\t name=\"image\"\n"
    "\t type=\"ImagePtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tDefines the texture image.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"minFilter\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_LINEAR_MIPMAP_LINEAR\"\n"
    "\t defaultHeader=\"&quot;OSGGL.h&quot;\"\n"
    "\t access=\"public\"\n"
    "     potential_values=\"GL_NEAREST, GL_LINEAR, GL_NEAREST_MIPMAP_NEAREST, GL_NEAREST_MIPMAP_LINEAR, GL_LINEAR_MIPMAP_NEAREST, GL_LINEAR_MIPMAP_LINEAR\"\n"
    "\t >\n"
    "\tDefines the minification filter, see glTexParameter for details.\n"
    "    Default: GL_LINEAR_MIPMAP_LINEAR.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"magFilter\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_LINEAR\"\n"
    "\t defaultHeader=\"&quot;OSGGL.h&quot;\"\n"
    "\t access=\"public\"\n"
    "     potential_values=\"GL_NEAREST, GL_LINEAR\"\n"
    "\t >\n"
    "\tDefines the magnification filter, see glTexParameter for details.\n"
    "    Default: GL_LINEAR\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"envMode\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_REPLACE\"\n"
    "\t defaultHeader=\"&quot;OSGGL.h&quot;\"\n"
    "\t access=\"public\"\n"
    "     potential_values=\"GL_MODULATE, GL_DECAL, GL_BLEND, GL_REPLACE, GL_ADD, GL_COMBINE\"\n"
    "\t >\n"
    "\tSets the environment mode, defining how texture and lighting color interact.\n"
    "    Default: GL_REPLACE.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"envMap\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"false\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tDefines whether to use the texture as a spherical environment map.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "The simple textured material class. See \\ref\n"
    "PageSystemMaterialTexturedSimpleMaterial for a description.\n"
    "\n"
    "A OSG::SimpleMaterial with an added texture. It doesn't expose all features \n"
    "of the texture, just the ones needed most often.\n"
    "\n"
    "OSG::SimpleTexturedMaterial::_sfImage defines the texture, \n"
    "OSG::SimpleTexturedMaterial::_sfMinFilter and\n"
    "OSG::SimpleTexturedMaterial::_sfMagFilter the used filters and \n"
    "OSG::SimpleTexturedMaterial::_sfEnvMode the environment mode. As a special \n"
    "case\n"
    "OSG::SimpleTexturedMaterial::_sfEnvMap can be used to use the texture as a\n"
    "spherical environment map.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleTexturedMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleTexturedMaterialBase::getType(void) const
{
    return _type;
}

UInt32 SimpleTexturedMaterialBase::getContainerSize(void) const
{
    return sizeof(SimpleTexturedMaterial);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SimpleTexturedMaterial::_sfImage field.
const SFUnrecImagePtr *SimpleTexturedMaterialBase::getSFImage(void) const
{
    return &_sfImage;
}

SFUnrecImagePtr     *SimpleTexturedMaterialBase::editSFImage          (void)
{
    editSField(ImageFieldMask);

    return &_sfImage;
}

//! Get the value of the SimpleTexturedMaterial::_sfImage field.
Image * SimpleTexturedMaterialBase::getImage(void) const
{
    return _sfImage.getValue();
}

//! Set the value of the SimpleTexturedMaterial::_sfImage field.
void SimpleTexturedMaterialBase::setImage(Image * const value)
{
    editSField(ImageFieldMask);

    _sfImage.setValue(value);
}


SFGLenum *SimpleTexturedMaterialBase::editSFMinFilter(void)
{
    editSField(MinFilterFieldMask);

    return &_sfMinFilter;
}

const SFGLenum *SimpleTexturedMaterialBase::getSFMinFilter(void) const
{
    return &_sfMinFilter;
}


SFGLenum *SimpleTexturedMaterialBase::editSFMagFilter(void)
{
    editSField(MagFilterFieldMask);

    return &_sfMagFilter;
}

const SFGLenum *SimpleTexturedMaterialBase::getSFMagFilter(void) const
{
    return &_sfMagFilter;
}


SFGLenum *SimpleTexturedMaterialBase::editSFEnvMode(void)
{
    editSField(EnvModeFieldMask);

    return &_sfEnvMode;
}

const SFGLenum *SimpleTexturedMaterialBase::getSFEnvMode(void) const
{
    return &_sfEnvMode;
}


SFBool *SimpleTexturedMaterialBase::editSFEnvMap(void)
{
    editSField(EnvMapFieldMask);

    return &_sfEnvMap;
}

const SFBool *SimpleTexturedMaterialBase::getSFEnvMap(void) const
{
    return &_sfEnvMap;
}






/*------------------------------ access -----------------------------------*/

SizeT SimpleTexturedMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        returnValue += _sfImage.getBinSize();
    }
    if(FieldBits::NoField != (MinFilterFieldMask & whichField))
    {
        returnValue += _sfMinFilter.getBinSize();
    }
    if(FieldBits::NoField != (MagFilterFieldMask & whichField))
    {
        returnValue += _sfMagFilter.getBinSize();
    }
    if(FieldBits::NoField != (EnvModeFieldMask & whichField))
    {
        returnValue += _sfEnvMode.getBinSize();
    }
    if(FieldBits::NoField != (EnvMapFieldMask & whichField))
    {
        returnValue += _sfEnvMap.getBinSize();
    }

    return returnValue;
}

void SimpleTexturedMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinFilterFieldMask & whichField))
    {
        _sfMinFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MagFilterFieldMask & whichField))
    {
        _sfMagFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EnvModeFieldMask & whichField))
    {
        _sfEnvMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EnvMapFieldMask & whichField))
    {
        _sfEnvMap.copyToBin(pMem);
    }
}

void SimpleTexturedMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        editSField(ImageFieldMask);
        _sfImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinFilterFieldMask & whichField))
    {
        editSField(MinFilterFieldMask);
        _sfMinFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MagFilterFieldMask & whichField))
    {
        editSField(MagFilterFieldMask);
        _sfMagFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EnvModeFieldMask & whichField))
    {
        editSField(EnvModeFieldMask);
        _sfEnvMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EnvMapFieldMask & whichField))
    {
        editSField(EnvMapFieldMask);
        _sfEnvMap.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleTexturedMaterialTransitPtr SimpleTexturedMaterialBase::createLocal(BitVector bFlags)
{
    SimpleTexturedMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SimpleTexturedMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SimpleTexturedMaterialTransitPtr SimpleTexturedMaterialBase::createDependent(BitVector bFlags)
{
    SimpleTexturedMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SimpleTexturedMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SimpleTexturedMaterialTransitPtr SimpleTexturedMaterialBase::create(void)
{
    SimpleTexturedMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SimpleTexturedMaterial>(tmpPtr);
    }

    return fc;
}

SimpleTexturedMaterial *SimpleTexturedMaterialBase::createEmptyLocal(BitVector bFlags)
{
    SimpleTexturedMaterial *returnValue;

    newPtr<SimpleTexturedMaterial>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleTexturedMaterial *SimpleTexturedMaterialBase::createEmpty(void)
{
    SimpleTexturedMaterial *returnValue;

    newPtr<SimpleTexturedMaterial>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SimpleTexturedMaterialBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SimpleTexturedMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleTexturedMaterial *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleTexturedMaterialBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SimpleTexturedMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleTexturedMaterial *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleTexturedMaterialBase::shallowCopy(void) const
{
    SimpleTexturedMaterial *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SimpleTexturedMaterial *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SimpleTexturedMaterialBase::SimpleTexturedMaterialBase(void) :
    Inherited(),
    _sfImage                  (NULL),
    _sfMinFilter              (GLenum(GL_LINEAR_MIPMAP_LINEAR)),
    _sfMagFilter              (GLenum(GL_LINEAR)),
    _sfEnvMode                (GLenum(GL_REPLACE)),
    _sfEnvMap                 (bool(false))
{
}

SimpleTexturedMaterialBase::SimpleTexturedMaterialBase(const SimpleTexturedMaterialBase &source) :
    Inherited(source),
    _sfImage                  (NULL),
    _sfMinFilter              (source._sfMinFilter              ),
    _sfMagFilter              (source._sfMagFilter              ),
    _sfEnvMode                (source._sfEnvMode                ),
    _sfEnvMap                 (source._sfEnvMap                 )
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleTexturedMaterialBase::~SimpleTexturedMaterialBase(void)
{
}

void SimpleTexturedMaterialBase::onCreate(const SimpleTexturedMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SimpleTexturedMaterial *pThis = static_cast<SimpleTexturedMaterial *>(this);

        pThis->setImage(source->getImage());
    }
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleImage           (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfImage,
             this->getType().getFieldDesc(ImageFieldId),
             const_cast<SimpleTexturedMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleImage          (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfImage,
             this->getType().getFieldDesc(ImageFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&SimpleTexturedMaterial::setImage,
                    static_cast<SimpleTexturedMaterial *>(this), _1));

    editSField(ImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleMinFilter       (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfMinFilter,
             this->getType().getFieldDesc(MinFilterFieldId),
             const_cast<SimpleTexturedMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleMinFilter      (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfMinFilter,
             this->getType().getFieldDesc(MinFilterFieldId),
             this));


    editSField(MinFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleMagFilter       (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfMagFilter,
             this->getType().getFieldDesc(MagFilterFieldId),
             const_cast<SimpleTexturedMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleMagFilter      (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfMagFilter,
             this->getType().getFieldDesc(MagFilterFieldId),
             this));


    editSField(MagFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleEnvMode         (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfEnvMode,
             this->getType().getFieldDesc(EnvModeFieldId),
             const_cast<SimpleTexturedMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleEnvMode        (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfEnvMode,
             this->getType().getFieldDesc(EnvModeFieldId),
             this));


    editSField(EnvModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleTexturedMaterialBase::getHandleEnvMap          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnvMap,
             this->getType().getFieldDesc(EnvMapFieldId),
             const_cast<SimpleTexturedMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleTexturedMaterialBase::editHandleEnvMap         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnvMap,
             this->getType().getFieldDesc(EnvMapFieldId),
             this));


    editSField(EnvMapFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleTexturedMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SimpleTexturedMaterial *pThis = static_cast<SimpleTexturedMaterial *>(this);

    pThis->execSync(static_cast<SimpleTexturedMaterial *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SimpleTexturedMaterialBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SimpleTexturedMaterial *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleTexturedMaterial *>(pRefAspect),
                  dynamic_cast<const SimpleTexturedMaterial *>(this));

    return returnValue;
}
#endif

void SimpleTexturedMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SimpleTexturedMaterial *>(this)->setImage(NULL);


}


OSG_END_NAMESPACE
