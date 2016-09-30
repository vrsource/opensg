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
 **     class FresnelMaterial!
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


#include <OSGGL.h>                        // ColorMaterial default header

#include "OSGImage.h"                   // Image Class

#include "OSGFresnelMaterialBase.h"
#include "OSGFresnelMaterial.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FresnelMaterial
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Color3f         FresnelMaterialBase::_sfAmbient
    
*/

/*! \var Color3f         FresnelMaterialBase::_sfDiffuse
    
*/

/*! \var Color3f         FresnelMaterialBase::_sfSpecular
    
*/

/*! \var Real32          FresnelMaterialBase::_sfShininess
    
*/

/*! \var Color3f         FresnelMaterialBase::_sfEmission
    
*/

/*! \var Real32          FresnelMaterialBase::_sfTransparency
    
*/

/*! \var bool            FresnelMaterialBase::_sfLit
    
*/

/*! \var GLenum          FresnelMaterialBase::_sfColorMaterial
    
*/

/*! \var Real32          FresnelMaterialBase::_sfIndex
    
*/

/*! \var Real32          FresnelMaterialBase::_sfScale
    
*/

/*! \var Real32          FresnelMaterialBase::_sfBias
    
*/

/*! \var Image *         FresnelMaterialBase::_sfImage
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<FresnelMaterial *, nsOSG>::_type(
    "FresnelMaterialPtr", 
    "ChunkMaterialPtr", 
    FresnelMaterial::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(FresnelMaterial *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FresnelMaterial *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FresnelMaterial *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FresnelMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor3f::Description(
        SFColor3f::getClassType(),
        "ambient",
        "",
        AmbientFieldId, AmbientFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleAmbient),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleAmbient));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3f::Description(
        SFColor3f::getClassType(),
        "diffuse",
        "",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleDiffuse),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleDiffuse));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3f::Description(
        SFColor3f::getClassType(),
        "specular",
        "",
        SpecularFieldId, SpecularFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleSpecular),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleSpecular));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "shininess",
        "",
        ShininessFieldId, ShininessFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleShininess),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleShininess));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3f::Description(
        SFColor3f::getClassType(),
        "emission",
        "",
        EmissionFieldId, EmissionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleEmission),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleEmission));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "transparency",
        "",
        TransparencyFieldId, TransparencyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleTransparency),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleTransparency));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "lit",
        "",
        LitFieldId, LitFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleLit),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleLit));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "colorMaterial",
        "",
        ColorMaterialFieldId, ColorMaterialFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleColorMaterial),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleColorMaterial));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "index",
        "",
        IndexFieldId, IndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleIndex),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleIndex));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "scale",
        "",
        ScaleFieldId, ScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleScale),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bias",
        "",
        BiasFieldId, BiasFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleBias),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleBias));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "image",
        "",
        ImageFieldId, ImageFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FresnelMaterial::editHandleImage),
        static_cast<FieldGetMethodSig >(&FresnelMaterial::getHandleImage));

    oType.addInitialDesc(pDesc);
}


FresnelMaterialBase::TypeObject FresnelMaterialBase::_type(
    FresnelMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&FresnelMaterialBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&FresnelMaterial::initMethod),
    reinterpret_cast<ExitContainerF>(&FresnelMaterial::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&FresnelMaterial::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FresnelMaterial\"\n"
    "\tparent=\"ChunkMaterial\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "   docGroupBase=\"GrpDrawablesMaterial\"\n"
    "    >\n"
    "  <Field\n"
    "\t  name=\"ambient\"\n"
    "\t  type=\"Color3f\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"0,0,0\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"diffuse\"\n"
    "\t  type=\"Color3f\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"0,0,0\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"specular\"\n"
    "\t  type=\"Color3f\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"0,0,0\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"shininess\"\n"
    "\t  type=\"Real32\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"1\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"emission\"\n"
    "\t  type=\"Color3f\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"0,0,0\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"transparency\"\n"
    "\t  type=\"Real32\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"0\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"lit\"\n"
    "\t  type=\"bool\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"true\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"colorMaterial\"\n"
    "\t  type=\"GLenum\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"GL_DIFFUSE\"\n"
    "\t  defaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"index\"\n"
    "\t  type=\"Real32\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"0\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"scale\"\n"
    "\t  type=\"Real32\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"1\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"bias\"\n"
    "\t  type=\"Real32\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  defaultValue=\"1\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t  name=\"image\"\n"
    "\t  type=\"ImagePtr\"\n"
    "\t  cardinality=\"single\"\n"
    "\t  visibility=\"external\"\n"
    "\t  access=\"public\"\n"
    "\t  >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FresnelMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &FresnelMaterialBase::getType(void) const
{
    return _type;
}

UInt32 FresnelMaterialBase::getContainerSize(void) const
{
    return sizeof(FresnelMaterial);
}

/*------------------------- decorator get ------------------------------*/


SFColor3f *FresnelMaterialBase::editSFAmbient(void)
{
    editSField(AmbientFieldMask);

    return &_sfAmbient;
}

const SFColor3f *FresnelMaterialBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}


SFColor3f *FresnelMaterialBase::editSFDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return &_sfDiffuse;
}

const SFColor3f *FresnelMaterialBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}


SFColor3f *FresnelMaterialBase::editSFSpecular(void)
{
    editSField(SpecularFieldMask);

    return &_sfSpecular;
}

const SFColor3f *FresnelMaterialBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}


SFReal32 *FresnelMaterialBase::editSFShininess(void)
{
    editSField(ShininessFieldMask);

    return &_sfShininess;
}

const SFReal32 *FresnelMaterialBase::getSFShininess(void) const
{
    return &_sfShininess;
}


SFColor3f *FresnelMaterialBase::editSFEmission(void)
{
    editSField(EmissionFieldMask);

    return &_sfEmission;
}

const SFColor3f *FresnelMaterialBase::getSFEmission(void) const
{
    return &_sfEmission;
}


SFReal32 *FresnelMaterialBase::editSFTransparency(void)
{
    editSField(TransparencyFieldMask);

    return &_sfTransparency;
}

const SFReal32 *FresnelMaterialBase::getSFTransparency(void) const
{
    return &_sfTransparency;
}


SFBool *FresnelMaterialBase::editSFLit(void)
{
    editSField(LitFieldMask);

    return &_sfLit;
}

const SFBool *FresnelMaterialBase::getSFLit(void) const
{
    return &_sfLit;
}


SFGLenum *FresnelMaterialBase::editSFColorMaterial(void)
{
    editSField(ColorMaterialFieldMask);

    return &_sfColorMaterial;
}

const SFGLenum *FresnelMaterialBase::getSFColorMaterial(void) const
{
    return &_sfColorMaterial;
}


SFReal32 *FresnelMaterialBase::editSFIndex(void)
{
    editSField(IndexFieldMask);

    return &_sfIndex;
}

const SFReal32 *FresnelMaterialBase::getSFIndex(void) const
{
    return &_sfIndex;
}


SFReal32 *FresnelMaterialBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFReal32 *FresnelMaterialBase::getSFScale(void) const
{
    return &_sfScale;
}


SFReal32 *FresnelMaterialBase::editSFBias(void)
{
    editSField(BiasFieldMask);

    return &_sfBias;
}

const SFReal32 *FresnelMaterialBase::getSFBias(void) const
{
    return &_sfBias;
}


//! Get the FresnelMaterial::_sfImage field.
const SFUnrecImagePtr *FresnelMaterialBase::getSFImage(void) const
{
    return &_sfImage;
}

SFUnrecImagePtr     *FresnelMaterialBase::editSFImage          (void)
{
    editSField(ImageFieldMask);

    return &_sfImage;
}

//! Get the value of the FresnelMaterial::_sfImage field.
Image * FresnelMaterialBase::getImage(void) const
{
    return _sfImage.getValue();
}

//! Set the value of the FresnelMaterial::_sfImage field.
void FresnelMaterialBase::setImage(Image * const value)
{
    editSField(ImageFieldMask);

    _sfImage.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT FresnelMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        returnValue += _sfShininess.getBinSize();
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        returnValue += _sfEmission.getBinSize();
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        returnValue += _sfTransparency.getBinSize();
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        returnValue += _sfLit.getBinSize();
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        returnValue += _sfColorMaterial.getBinSize();
    }
    if(FieldBits::NoField != (IndexFieldMask & whichField))
    {
        returnValue += _sfIndex.getBinSize();
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }
    if(FieldBits::NoField != (BiasFieldMask & whichField))
    {
        returnValue += _sfBias.getBinSize();
    }
    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        returnValue += _sfImage.getBinSize();
    }

    return returnValue;
}

void FresnelMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        _sfShininess.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        _sfEmission.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        _sfTransparency.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        _sfLit.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        _sfColorMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IndexFieldMask & whichField))
    {
        _sfIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BiasFieldMask & whichField))
    {
        _sfBias.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyToBin(pMem);
    }
}

void FresnelMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        editSField(AmbientFieldMask);
        _sfAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        editSField(DiffuseFieldMask);
        _sfDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        editSField(SpecularFieldMask);
        _sfSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        editSField(ShininessFieldMask);
        _sfShininess.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        editSField(EmissionFieldMask);
        _sfEmission.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        editSField(TransparencyFieldMask);
        _sfTransparency.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        editSField(LitFieldMask);
        _sfLit.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        editSField(ColorMaterialFieldMask);
        _sfColorMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IndexFieldMask & whichField))
    {
        editSField(IndexFieldMask);
        _sfIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        editSField(ScaleFieldMask);
        _sfScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BiasFieldMask & whichField))
    {
        editSField(BiasFieldMask);
        _sfBias.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        editSField(ImageFieldMask);
        _sfImage.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FresnelMaterialTransitPtr FresnelMaterialBase::createLocal(BitVector bFlags)
{
    FresnelMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FresnelMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FresnelMaterialTransitPtr FresnelMaterialBase::createDependent(BitVector bFlags)
{
    FresnelMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FresnelMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FresnelMaterialTransitPtr FresnelMaterialBase::create(void)
{
    FresnelMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FresnelMaterial>(tmpPtr);
    }

    return fc;
}

FresnelMaterial *FresnelMaterialBase::createEmptyLocal(BitVector bFlags)
{
    FresnelMaterial *returnValue;

    newPtr<FresnelMaterial>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FresnelMaterial *FresnelMaterialBase::createEmpty(void)
{
    FresnelMaterial *returnValue;

    newPtr<FresnelMaterial>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FresnelMaterialBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FresnelMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FresnelMaterial *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FresnelMaterialBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FresnelMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FresnelMaterial *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FresnelMaterialBase::shallowCopy(void) const
{
    FresnelMaterial *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FresnelMaterial *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FresnelMaterialBase::FresnelMaterialBase(void) :
    Inherited(),
    _sfAmbient                (Color3f(0,0,0)),
    _sfDiffuse                (Color3f(0,0,0)),
    _sfSpecular               (Color3f(0,0,0)),
    _sfShininess              (Real32(1)),
    _sfEmission               (Color3f(0,0,0)),
    _sfTransparency           (Real32(0)),
    _sfLit                    (bool(true)),
    _sfColorMaterial          (GLenum(GL_DIFFUSE)),
    _sfIndex                  (Real32(0)),
    _sfScale                  (Real32(1)),
    _sfBias                   (Real32(1)),
    _sfImage                  (NULL)
{
}

FresnelMaterialBase::FresnelMaterialBase(const FresnelMaterialBase &source) :
    Inherited(source),
    _sfAmbient                (source._sfAmbient                ),
    _sfDiffuse                (source._sfDiffuse                ),
    _sfSpecular               (source._sfSpecular               ),
    _sfShininess              (source._sfShininess              ),
    _sfEmission               (source._sfEmission               ),
    _sfTransparency           (source._sfTransparency           ),
    _sfLit                    (source._sfLit                    ),
    _sfColorMaterial          (source._sfColorMaterial          ),
    _sfIndex                  (source._sfIndex                  ),
    _sfScale                  (source._sfScale                  ),
    _sfBias                   (source._sfBias                   ),
    _sfImage                  (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

FresnelMaterialBase::~FresnelMaterialBase(void)
{
}

void FresnelMaterialBase::onCreate(const FresnelMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        FresnelMaterial *pThis = static_cast<FresnelMaterial *>(this);

        pThis->setImage(source->getImage());
    }
}

GetFieldHandlePtr FresnelMaterialBase::getHandleAmbient         (void) const
{
    SFColor3f::GetHandlePtr returnValue(
        new  SFColor3f::GetHandle(
             &_sfAmbient,
             this->getType().getFieldDesc(AmbientFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleAmbient        (void)
{
    SFColor3f::EditHandlePtr returnValue(
        new  SFColor3f::EditHandle(
             &_sfAmbient,
             this->getType().getFieldDesc(AmbientFieldId),
             this));


    editSField(AmbientFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleDiffuse         (void) const
{
    SFColor3f::GetHandlePtr returnValue(
        new  SFColor3f::GetHandle(
             &_sfDiffuse,
             this->getType().getFieldDesc(DiffuseFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleDiffuse        (void)
{
    SFColor3f::EditHandlePtr returnValue(
        new  SFColor3f::EditHandle(
             &_sfDiffuse,
             this->getType().getFieldDesc(DiffuseFieldId),
             this));


    editSField(DiffuseFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleSpecular        (void) const
{
    SFColor3f::GetHandlePtr returnValue(
        new  SFColor3f::GetHandle(
             &_sfSpecular,
             this->getType().getFieldDesc(SpecularFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleSpecular       (void)
{
    SFColor3f::EditHandlePtr returnValue(
        new  SFColor3f::EditHandle(
             &_sfSpecular,
             this->getType().getFieldDesc(SpecularFieldId),
             this));


    editSField(SpecularFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleShininess       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfShininess,
             this->getType().getFieldDesc(ShininessFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleShininess      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfShininess,
             this->getType().getFieldDesc(ShininessFieldId),
             this));


    editSField(ShininessFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleEmission        (void) const
{
    SFColor3f::GetHandlePtr returnValue(
        new  SFColor3f::GetHandle(
             &_sfEmission,
             this->getType().getFieldDesc(EmissionFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleEmission       (void)
{
    SFColor3f::EditHandlePtr returnValue(
        new  SFColor3f::EditHandle(
             &_sfEmission,
             this->getType().getFieldDesc(EmissionFieldId),
             this));


    editSField(EmissionFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleTransparency    (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTransparency,
             this->getType().getFieldDesc(TransparencyFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleTransparency   (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTransparency,
             this->getType().getFieldDesc(TransparencyFieldId),
             this));


    editSField(TransparencyFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleLit             (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLit,
             this->getType().getFieldDesc(LitFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleLit            (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLit,
             this->getType().getFieldDesc(LitFieldId),
             this));


    editSField(LitFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleColorMaterial   (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfColorMaterial,
             this->getType().getFieldDesc(ColorMaterialFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleColorMaterial  (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfColorMaterial,
             this->getType().getFieldDesc(ColorMaterialFieldId),
             this));


    editSField(ColorMaterialFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleIndex           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfIndex,
             this->getType().getFieldDesc(IndexFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleIndex          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfIndex,
             this->getType().getFieldDesc(IndexFieldId),
             this));


    editSField(IndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleScale           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleScale          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             this));


    editSField(ScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleBias            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfBias,
             this->getType().getFieldDesc(BiasFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleBias           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfBias,
             this->getType().getFieldDesc(BiasFieldId),
             this));


    editSField(BiasFieldMask);

    return returnValue;
}

GetFieldHandlePtr FresnelMaterialBase::getHandleImage           (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfImage,
             this->getType().getFieldDesc(ImageFieldId),
             const_cast<FresnelMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FresnelMaterialBase::editHandleImage          (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfImage,
             this->getType().getFieldDesc(ImageFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FresnelMaterial::setImage,
                    static_cast<FresnelMaterial *>(this), _1));

    editSField(ImageFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FresnelMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FresnelMaterial *pThis = static_cast<FresnelMaterial *>(this);

    pThis->execSync(static_cast<FresnelMaterial *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FresnelMaterialBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FresnelMaterial *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FresnelMaterial *>(pRefAspect),
                  dynamic_cast<const FresnelMaterial *>(this));

    return returnValue;
}
#endif

void FresnelMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FresnelMaterial *>(this)->setImage(NULL);


}


OSG_END_NAMESPACE
