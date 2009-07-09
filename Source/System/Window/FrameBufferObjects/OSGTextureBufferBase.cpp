/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TextureBuffer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGTextureObjChunk.h> // Texture Class

#include "OSGTextureBufferBase.h"
#include "OSGTextureBuffer.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureBuffer
    Texture buffer.  Wraps support to binding a framebuffer attachment to an OpenSG texture object.

    See FramebufferTexture1/2/3DEXT.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var TextureObjChunk * TextureBufferBase::_sfTexture
    The texture object to target.
*/

/*! \var GLenum          TextureBufferBase::_sfTexTarget
    If specified, this is the target value for FramebufferTextureXDEXT.
    If GL_NONE, automatically determined.
*/

/*! \var UInt32          TextureBufferBase::_sfLevel
    The mipmap level in the texture to target.
*/

/*! \var UInt32          TextureBufferBase::_sfZoffset
    UNUSED.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureBuffer *>::_type("TextureBufferPtr", "FrameBufferAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureBuffer *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextureBuffer *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextureBuffer *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextureBufferBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecTextureObjChunkPtr::Description(
        SFUnrecTextureObjChunkPtr::getClassType(),
        "texture",
        "The texture object to target.\n",
        TextureFieldId, TextureFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBuffer::editHandleTexture),
        static_cast<FieldGetMethodSig >(&TextureBuffer::getHandleTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "texTarget",
        "If specified, this is the target value for FramebufferTextureXDEXT.\n"
        "If GL_NONE, automatically determined.\n",
        TexTargetFieldId, TexTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBuffer::editHandleTexTarget),
        static_cast<FieldGetMethodSig >(&TextureBuffer::getHandleTexTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "level",
        "The mipmap level in the texture to target.\n",
        LevelFieldId, LevelFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBuffer::editHandleLevel),
        static_cast<FieldGetMethodSig >(&TextureBuffer::getHandleLevel));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "zoffset",
        "UNUSED.\n",
        ZoffsetFieldId, ZoffsetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBuffer::editHandleZoffset),
        static_cast<FieldGetMethodSig >(&TextureBuffer::getHandleZoffset));

    oType.addInitialDesc(pDesc);
}


TextureBufferBase::TypeObject TextureBufferBase::_type(
    TextureBufferBase::getClassname(),
    Inherited::getClassname(),
    "TextureBuffer",
    0,
    reinterpret_cast<PrototypeCreateF>(&TextureBufferBase::createEmptyLocal),
    TextureBuffer::initMethod,
    TextureBuffer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextureBuffer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"TextureBuffer\"\n"
    "   parent=\"FrameBufferAttachment\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   >\n"
    "  Texture buffer.  Wraps support to binding a framebuffer attachment to an OpenSG texture object.\n"
    "  \n"
    "  See FramebufferTexture1/2/3DEXT.\n"
    "  <Field\n"
    "     name=\"texture\"\n"
    "     type=\"TextureObjChunkPtr\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    The texture object to target.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"texTarget\"\n"
    "     type=\"GLenum\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"GL_NONE\"\n"
    "     >\n"
    "    If specified, this is the target value for FramebufferTextureXDEXT.\n"
    "    If GL_NONE, automatically determined.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"level\"\n"
    "     type=\"UInt32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0\"\n"
    "     >\n"
    "    The mipmap level in the texture to target.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"zoffset\"\n"
    "     type=\"UInt32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0\"\n"
    "     >\n"
    "    UNUSED.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Texture buffer.  Wraps support to binding a framebuffer attachment to an OpenSG texture object.\n"
    "\n"
    "See FramebufferTexture1/2/3DEXT.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureBufferBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureBufferBase::getType(void) const
{
    return _type;
}

UInt32 TextureBufferBase::getContainerSize(void) const
{
    return sizeof(TextureBuffer);
}

/*------------------------- decorator get ------------------------------*/


//! Get the TextureBuffer::_sfTexture field.
const SFUnrecTextureObjChunkPtr *TextureBufferBase::getSFTexture(void) const
{
    return &_sfTexture;
}

SFUnrecTextureObjChunkPtr *TextureBufferBase::editSFTexture        (void)
{
    editSField(TextureFieldMask);

    return &_sfTexture;
}

SFGLenum *TextureBufferBase::editSFTexTarget(void)
{
    editSField(TexTargetFieldMask);

    return &_sfTexTarget;
}

const SFGLenum *TextureBufferBase::getSFTexTarget(void) const
{
    return &_sfTexTarget;
}


SFUInt32 *TextureBufferBase::editSFLevel(void)
{
    editSField(LevelFieldMask);

    return &_sfLevel;
}

const SFUInt32 *TextureBufferBase::getSFLevel(void) const
{
    return &_sfLevel;
}


SFUInt32 *TextureBufferBase::editSFZoffset(void)
{
    editSField(ZoffsetFieldMask);

    return &_sfZoffset;
}

const SFUInt32 *TextureBufferBase::getSFZoffset(void) const
{
    return &_sfZoffset;
}






/*------------------------------ access -----------------------------------*/

UInt32 TextureBufferBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }
    if(FieldBits::NoField != (TexTargetFieldMask & whichField))
    {
        returnValue += _sfTexTarget.getBinSize();
    }
    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        returnValue += _sfLevel.getBinSize();
    }
    if(FieldBits::NoField != (ZoffsetFieldMask & whichField))
    {
        returnValue += _sfZoffset.getBinSize();
    }

    return returnValue;
}

void TextureBufferBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexTargetFieldMask & whichField))
    {
        _sfTexTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        _sfLevel.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ZoffsetFieldMask & whichField))
    {
        _sfZoffset.copyToBin(pMem);
    }
}

void TextureBufferBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexTargetFieldMask & whichField))
    {
        _sfTexTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        _sfLevel.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ZoffsetFieldMask & whichField))
    {
        _sfZoffset.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextureBufferTransitPtr TextureBufferBase::createLocal(BitVector bFlags)
{
    TextureBufferTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextureBuffer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextureBufferTransitPtr TextureBufferBase::createDependent(BitVector bFlags)
{
    TextureBufferTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextureBuffer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextureBufferTransitPtr TextureBufferBase::create(void)
{
    TextureBufferTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextureBuffer>(tmpPtr);
    }

    return fc;
}

TextureBuffer *TextureBufferBase::createEmptyLocal(BitVector bFlags)
{
    TextureBuffer *returnValue;

    newPtr<TextureBuffer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextureBuffer *TextureBufferBase::createEmpty(void)
{
    TextureBuffer *returnValue;

    newPtr<TextureBuffer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextureBufferBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextureBuffer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureBuffer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureBufferBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextureBuffer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureBuffer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureBufferBase::shallowCopy(void) const
{
    TextureBuffer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextureBuffer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextureBufferBase::TextureBufferBase(void) :
    Inherited(),
    _sfTexture                (NULL),
    _sfTexTarget              (GLenum(GL_NONE)),
    _sfLevel                  (UInt32(0)),
    _sfZoffset                (UInt32(0))
{
}

TextureBufferBase::TextureBufferBase(const TextureBufferBase &source) :
    Inherited(source),
    _sfTexture                (NULL),
    _sfTexTarget              (source._sfTexTarget              ),
    _sfLevel                  (source._sfLevel                  ),
    _sfZoffset                (source._sfZoffset                )
{
}


/*-------------------------- destructors ----------------------------------*/

TextureBufferBase::~TextureBufferBase(void)
{
}

void TextureBufferBase::onCreate(const TextureBuffer *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TextureBuffer *pThis = static_cast<TextureBuffer *>(this);

        pThis->setTexture(source->getTexture());
    }
}

GetFieldHandlePtr TextureBufferBase::getHandleTexture         (void) const
{
    SFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::GetHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId),
             const_cast<TextureBufferBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBufferBase::editHandleTexture        (void)
{
    SFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::EditHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TextureBuffer::setTexture,
                    static_cast<TextureBuffer *>(this), _1));

    editSField(TextureFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureBufferBase::getHandleTexTarget       (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfTexTarget,
             this->getType().getFieldDesc(TexTargetFieldId),
             const_cast<TextureBufferBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBufferBase::editHandleTexTarget      (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfTexTarget,
             this->getType().getFieldDesc(TexTargetFieldId),
             this));


    editSField(TexTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureBufferBase::getHandleLevel           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfLevel,
             this->getType().getFieldDesc(LevelFieldId),
             const_cast<TextureBufferBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBufferBase::editHandleLevel          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfLevel,
             this->getType().getFieldDesc(LevelFieldId),
             this));


    editSField(LevelFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureBufferBase::getHandleZoffset         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfZoffset,
             this->getType().getFieldDesc(ZoffsetFieldId),
             const_cast<TextureBufferBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBufferBase::editHandleZoffset        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfZoffset,
             this->getType().getFieldDesc(ZoffsetFieldId),
             this));


    editSField(ZoffsetFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextureBufferBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextureBuffer *pThis = static_cast<TextureBuffer *>(this);

    pThis->execSync(static_cast<TextureBuffer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextureBufferBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextureBuffer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureBuffer *>(pRefAspect),
                  dynamic_cast<const TextureBuffer *>(this));

    return returnValue;
}
#endif

void TextureBufferBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextureBuffer *>(this)->setTexture(NULL);


}


OSG_END_NAMESPACE
