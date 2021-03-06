/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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
 **     class TextureSelectChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &TextureSelectChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextureSelectChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TextureSelectChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TextureSelectChunk::_sfChoice field.

inline
UInt32 &TextureSelectChunkBase::editChoice(void)
{
    editSField(ChoiceFieldMask);

    return _sfChoice.getValue();
}

//! Get the value of the TextureSelectChunk::_sfChoice field.
inline
      UInt32  TextureSelectChunkBase::getChoice(void) const
{
    return _sfChoice.getValue();
}

//! Set the value of the TextureSelectChunk::_sfChoice field.
inline
void TextureSelectChunkBase::setChoice(const UInt32 value)
{
    editSField(ChoiceFieldMask);

    _sfChoice.setValue(value);
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void TextureSelectChunkBase::execSync (      TextureSelectChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
        _sfChoice.syncWith(pFrom->_sfChoice);

    if(FieldBits::NoField != (TexturesFieldMask & whichField))
        _mfTextures.syncWith(pFrom->_mfTextures,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *TextureSelectChunkBase::getClassname(void)
{
    return "TextureSelectChunk";
}
OSG_GEN_CONTAINERPTR(TextureSelectChunk);

OSG_END_NAMESPACE

