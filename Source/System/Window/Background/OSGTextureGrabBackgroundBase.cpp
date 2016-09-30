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
 **     class TextureGrabBackground!
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



#include "OSGTextureObjChunk.h"         // Texture Class

#include "OSGTextureGrabBackgroundBase.h"
#include "OSGTextureGrabBackground.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureGrabBackground
    A background that grabs what's underneath it into a texture before it clears 
    the viewport to a constant color.

    The color of the background is given by the _sfColor field, the texture to
    grab into by the _sfTexture field.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var TextureObjChunk * TextureGrabBackgroundBase::_sfTexture
    The texture to grab into.
*/

/*! \var bool            TextureGrabBackgroundBase::_sfAutoResize
    Automatically resize the texture when the viewport size changes.
*/

/*! \var GLenum          TextureGrabBackgroundBase::_sfBindTarget
    Enum to use for glBindTexture, if GL_NONE chosen from texture dimensionality.
*/

/*! \var GLenum          TextureGrabBackgroundBase::_sfCopyTarget
    Enum to use for glCopyTexture, if GL_NONE chosen from texture dimensionality.
    Mainly useful to grab into the different parts of a CubeTexture.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TextureGrabBackground *, nsOSG>::_type(
    "TextureGrabBackgroundPtr", 
    "SolidBackgroundPtr", 
    TextureGrabBackground::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TextureGrabBackground *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextureGrabBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecTextureObjChunkPtr::Description(
        SFUnrecTextureObjChunkPtr::getClassType(),
        "texture",
        "The texture to grab into.\n",
        TextureFieldId, TextureFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureGrabBackground::editHandleTexture),
        static_cast<FieldGetMethodSig >(&TextureGrabBackground::getHandleTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "autoResize",
        "Automatically resize the texture when the viewport size changes.\n",
        AutoResizeFieldId, AutoResizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureGrabBackground::editHandleAutoResize),
        static_cast<FieldGetMethodSig >(&TextureGrabBackground::getHandleAutoResize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "bindTarget",
        "Enum to use for glBindTexture, if GL_NONE chosen from texture dimensionality.\n",
        BindTargetFieldId, BindTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureGrabBackground::editHandleBindTarget),
        static_cast<FieldGetMethodSig >(&TextureGrabBackground::getHandleBindTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "copyTarget",
        "Enum to use for glCopyTexture, if GL_NONE chosen from texture dimensionality.\n"
        "Mainly useful to grab into the different parts of a CubeTexture.\n",
        CopyTargetFieldId, CopyTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureGrabBackground::editHandleCopyTarget),
        static_cast<FieldGetMethodSig >(&TextureGrabBackground::getHandleCopyTarget));

    oType.addInitialDesc(pDesc);
}


TextureGrabBackgroundBase::TypeObject TextureGrabBackgroundBase::_type(
    TextureGrabBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&TextureGrabBackgroundBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&TextureGrabBackground::initMethod),
    reinterpret_cast<ExitContainerF>(&TextureGrabBackground::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&TextureGrabBackground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"TextureGrabBackground\"\n"
    "   parent=\"SolidBackground\"\n"
    "   library=\"Window\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpWindowBackground\"\n"
    "   >\n"
    "  A background that grabs what's underneath it into a texture before it clears \n"
    "  the viewport to a constant color.\n"
    "\n"
    "  The color of the background is given by the _sfColor field, the texture to\n"
    "  grab into by the _sfTexture field.\n"
    "  <Field\n"
    "\t name=\"texture\"\n"
    "\t type=\"TextureObjChunkPtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe texture to grab into.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"autoResize\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Automatically resize the texture when the viewport size changes.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"bindTarget\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_NONE\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Enum to use for glBindTexture, if GL_NONE chosen from texture dimensionality.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"copyTarget\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_NONE\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "    Enum to use for glCopyTexture, if GL_NONE chosen from texture dimensionality.\n"
    "    Mainly useful to grab into the different parts of a CubeTexture.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "A background that grabs what's underneath it into a texture before it clears \n"
    "the viewport to a constant color.\n"
    "\n"
    "The color of the background is given by the _sfColor field, the texture to\n"
    "grab into by the _sfTexture field.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureGrabBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureGrabBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 TextureGrabBackgroundBase::getContainerSize(void) const
{
    return sizeof(TextureGrabBackground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the TextureGrabBackground::_sfTexture field.
const SFUnrecTextureObjChunkPtr *TextureGrabBackgroundBase::getSFTexture(void) const
{
    return &_sfTexture;
}

SFUnrecTextureObjChunkPtr *TextureGrabBackgroundBase::editSFTexture        (void)
{
    editSField(TextureFieldMask);

    return &_sfTexture;
}

//! Get the value of the TextureGrabBackground::_sfTexture field.
TextureObjChunk * TextureGrabBackgroundBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

//! Set the value of the TextureGrabBackground::_sfTexture field.
void TextureGrabBackgroundBase::setTexture(TextureObjChunk * const value)
{
    editSField(TextureFieldMask);

    _sfTexture.setValue(value);
}


SFBool *TextureGrabBackgroundBase::editSFAutoResize(void)
{
    editSField(AutoResizeFieldMask);

    return &_sfAutoResize;
}

const SFBool *TextureGrabBackgroundBase::getSFAutoResize(void) const
{
    return &_sfAutoResize;
}


SFGLenum *TextureGrabBackgroundBase::editSFBindTarget(void)
{
    editSField(BindTargetFieldMask);

    return &_sfBindTarget;
}

const SFGLenum *TextureGrabBackgroundBase::getSFBindTarget(void) const
{
    return &_sfBindTarget;
}


SFGLenum *TextureGrabBackgroundBase::editSFCopyTarget(void)
{
    editSField(CopyTargetFieldMask);

    return &_sfCopyTarget;
}

const SFGLenum *TextureGrabBackgroundBase::getSFCopyTarget(void) const
{
    return &_sfCopyTarget;
}






/*------------------------------ access -----------------------------------*/

SizeT TextureGrabBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        returnValue += _sfAutoResize.getBinSize();
    }
    if(FieldBits::NoField != (BindTargetFieldMask & whichField))
    {
        returnValue += _sfBindTarget.getBinSize();
    }
    if(FieldBits::NoField != (CopyTargetFieldMask & whichField))
    {
        returnValue += _sfCopyTarget.getBinSize();
    }

    return returnValue;
}

void TextureGrabBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BindTargetFieldMask & whichField))
    {
        _sfBindTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CopyTargetFieldMask & whichField))
    {
        _sfCopyTarget.copyToBin(pMem);
    }
}

void TextureGrabBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        editSField(TextureFieldMask);
        _sfTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        editSField(AutoResizeFieldMask);
        _sfAutoResize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BindTargetFieldMask & whichField))
    {
        editSField(BindTargetFieldMask);
        _sfBindTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CopyTargetFieldMask & whichField))
    {
        editSField(CopyTargetFieldMask);
        _sfCopyTarget.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextureGrabBackgroundTransitPtr TextureGrabBackgroundBase::createLocal(BitVector bFlags)
{
    TextureGrabBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextureGrabBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextureGrabBackgroundTransitPtr TextureGrabBackgroundBase::createDependent(BitVector bFlags)
{
    TextureGrabBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextureGrabBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextureGrabBackgroundTransitPtr TextureGrabBackgroundBase::create(void)
{
    TextureGrabBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextureGrabBackground>(tmpPtr);
    }

    return fc;
}

TextureGrabBackground *TextureGrabBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    TextureGrabBackground *returnValue;

    newPtr<TextureGrabBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextureGrabBackground *TextureGrabBackgroundBase::createEmpty(void)
{
    TextureGrabBackground *returnValue;

    newPtr<TextureGrabBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextureGrabBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextureGrabBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureGrabBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureGrabBackgroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextureGrabBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureGrabBackground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureGrabBackgroundBase::shallowCopy(void) const
{
    TextureGrabBackground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextureGrabBackground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextureGrabBackgroundBase::TextureGrabBackgroundBase(void) :
    Inherited(),
    _sfTexture                (NULL),
    _sfAutoResize             (bool(true)),
    _sfBindTarget             (GLenum(GL_NONE)),
    _sfCopyTarget             (GLenum(GL_NONE))
{
}

TextureGrabBackgroundBase::TextureGrabBackgroundBase(const TextureGrabBackgroundBase &source) :
    Inherited(source),
    _sfTexture                (NULL),
    _sfAutoResize             (source._sfAutoResize             ),
    _sfBindTarget             (source._sfBindTarget             ),
    _sfCopyTarget             (source._sfCopyTarget             )
{
}


/*-------------------------- destructors ----------------------------------*/

TextureGrabBackgroundBase::~TextureGrabBackgroundBase(void)
{
}

void TextureGrabBackgroundBase::onCreate(const TextureGrabBackground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TextureGrabBackground *pThis = static_cast<TextureGrabBackground *>(this);

        pThis->setTexture(source->getTexture());
    }
}

GetFieldHandlePtr TextureGrabBackgroundBase::getHandleTexture         (void) const
{
    SFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::GetHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId),
             const_cast<TextureGrabBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureGrabBackgroundBase::editHandleTexture        (void)
{
    SFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::EditHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TextureGrabBackground::setTexture,
                    static_cast<TextureGrabBackground *>(this), _1));

    editSField(TextureFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureGrabBackgroundBase::getHandleAutoResize      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAutoResize,
             this->getType().getFieldDesc(AutoResizeFieldId),
             const_cast<TextureGrabBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureGrabBackgroundBase::editHandleAutoResize     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAutoResize,
             this->getType().getFieldDesc(AutoResizeFieldId),
             this));


    editSField(AutoResizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureGrabBackgroundBase::getHandleBindTarget      (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfBindTarget,
             this->getType().getFieldDesc(BindTargetFieldId),
             const_cast<TextureGrabBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureGrabBackgroundBase::editHandleBindTarget     (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfBindTarget,
             this->getType().getFieldDesc(BindTargetFieldId),
             this));


    editSField(BindTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureGrabBackgroundBase::getHandleCopyTarget      (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfCopyTarget,
             this->getType().getFieldDesc(CopyTargetFieldId),
             const_cast<TextureGrabBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureGrabBackgroundBase::editHandleCopyTarget     (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfCopyTarget,
             this->getType().getFieldDesc(CopyTargetFieldId),
             this));


    editSField(CopyTargetFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextureGrabBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextureGrabBackground *pThis = static_cast<TextureGrabBackground *>(this);

    pThis->execSync(static_cast<TextureGrabBackground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextureGrabBackgroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextureGrabBackground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureGrabBackground *>(pRefAspect),
                  dynamic_cast<const TextureGrabBackground *>(this));

    return returnValue;
}
#endif

void TextureGrabBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextureGrabBackground *>(this)->setTexture(NULL);


}


OSG_END_NAMESPACE
