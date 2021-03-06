/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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
 **     class SimpleTextForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &SimpleTextForegroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SimpleTextForegroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SimpleTextForegroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleTextForeground::_sfSize field.

inline
Real32 &SimpleTextForegroundBase::editSize(void)
{
    editSField(SizeFieldMask);

    return _sfSize.getValue();
}

//! Get the value of the SimpleTextForeground::_sfSize field.
inline
      Real32  SimpleTextForegroundBase::getSize(void) const
{
    return _sfSize.getValue();
}

//! Set the value of the SimpleTextForeground::_sfSize field.
inline
void SimpleTextForegroundBase::setSize(const Real32 value)
{
    editSField(SizeFieldMask);

    _sfSize.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfColor field.

inline
Color4f &SimpleTextForegroundBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the SimpleTextForeground::_sfColor field.
inline
const Color4f &SimpleTextForegroundBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the SimpleTextForeground::_sfColor field.
inline
void SimpleTextForegroundBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfShadowColor field.

inline
Color4f &SimpleTextForegroundBase::editShadowColor(void)
{
    editSField(ShadowColorFieldMask);

    return _sfShadowColor.getValue();
}

//! Get the value of the SimpleTextForeground::_sfShadowColor field.
inline
const Color4f &SimpleTextForegroundBase::getShadowColor(void) const
{
    return _sfShadowColor.getValue();
}

//! Set the value of the SimpleTextForeground::_sfShadowColor field.
inline
void SimpleTextForegroundBase::setShadowColor(const Color4f &value)
{
    editSField(ShadowColorFieldMask);

    _sfShadowColor.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfBgColor field.

inline
Color4f &SimpleTextForegroundBase::editBgColor(void)
{
    editSField(BgColorFieldMask);

    return _sfBgColor.getValue();
}

//! Get the value of the SimpleTextForeground::_sfBgColor field.
inline
const Color4f &SimpleTextForegroundBase::getBgColor(void) const
{
    return _sfBgColor.getValue();
}

//! Set the value of the SimpleTextForeground::_sfBgColor field.
inline
void SimpleTextForegroundBase::setBgColor(const Color4f &value)
{
    editSField(BgColorFieldMask);

    _sfBgColor.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfFamily field.

inline
std::string &SimpleTextForegroundBase::editFamily(void)
{
    editSField(FamilyFieldMask);

    return _sfFamily.getValue();
}

//! Get the value of the SimpleTextForeground::_sfFamily field.
inline
const std::string &SimpleTextForegroundBase::getFamily(void) const
{
    return _sfFamily.getValue();
}

//! Set the value of the SimpleTextForeground::_sfFamily field.
inline
void SimpleTextForegroundBase::setFamily(const std::string &value)
{
    editSField(FamilyFieldMask);

    _sfFamily.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfShadowOffset field.

inline
Vec2f &SimpleTextForegroundBase::editShadowOffset(void)
{
    editSField(ShadowOffsetFieldMask);

    return _sfShadowOffset.getValue();
}

//! Get the value of the SimpleTextForeground::_sfShadowOffset field.
inline
const Vec2f &SimpleTextForegroundBase::getShadowOffset(void) const
{
    return _sfShadowOffset.getValue();
}

//! Set the value of the SimpleTextForeground::_sfShadowOffset field.
inline
void SimpleTextForegroundBase::setShadowOffset(const Vec2f &value)
{
    editSField(ShadowOffsetFieldMask);

    _sfShadowOffset.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfHorizontalAlign field.

inline
UInt8 &SimpleTextForegroundBase::editHorizontalAlign(void)
{
    editSField(HorizontalAlignFieldMask);

    return _sfHorizontalAlign.getValue();
}

//! Get the value of the SimpleTextForeground::_sfHorizontalAlign field.
inline
      UInt8  SimpleTextForegroundBase::getHorizontalAlign(void) const
{
    return _sfHorizontalAlign.getValue();
}

//! Set the value of the SimpleTextForeground::_sfHorizontalAlign field.
inline
void SimpleTextForegroundBase::setHorizontalAlign(const UInt8 value)
{
    editSField(HorizontalAlignFieldMask);

    _sfHorizontalAlign.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfVerticalAlign field.

inline
UInt8 &SimpleTextForegroundBase::editVerticalAlign(void)
{
    editSField(VerticalAlignFieldMask);

    return _sfVerticalAlign.getValue();
}

//! Get the value of the SimpleTextForeground::_sfVerticalAlign field.
inline
      UInt8  SimpleTextForegroundBase::getVerticalAlign(void) const
{
    return _sfVerticalAlign.getValue();
}

//! Set the value of the SimpleTextForeground::_sfVerticalAlign field.
inline
void SimpleTextForegroundBase::setVerticalAlign(const UInt8 value)
{
    editSField(VerticalAlignFieldMask);

    _sfVerticalAlign.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfBorderColor field.

inline
Color4f &SimpleTextForegroundBase::editBorderColor(void)
{
    editSField(BorderColorFieldMask);

    return _sfBorderColor.getValue();
}

//! Get the value of the SimpleTextForeground::_sfBorderColor field.
inline
const Color4f &SimpleTextForegroundBase::getBorderColor(void) const
{
    return _sfBorderColor.getValue();
}

//! Set the value of the SimpleTextForeground::_sfBorderColor field.
inline
void SimpleTextForegroundBase::setBorderColor(const Color4f &value)
{
    editSField(BorderColorFieldMask);

    _sfBorderColor.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfBorderOffset field.

inline
Vec2f &SimpleTextForegroundBase::editBorderOffset(void)
{
    editSField(BorderOffsetFieldMask);

    return _sfBorderOffset.getValue();
}

//! Get the value of the SimpleTextForeground::_sfBorderOffset field.
inline
const Vec2f &SimpleTextForegroundBase::getBorderOffset(void) const
{
    return _sfBorderOffset.getValue();
}

//! Set the value of the SimpleTextForeground::_sfBorderOffset field.
inline
void SimpleTextForegroundBase::setBorderOffset(const Vec2f &value)
{
    editSField(BorderOffsetFieldMask);

    _sfBorderOffset.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfTextMargin field.

inline
Vec2f &SimpleTextForegroundBase::editTextMargin(void)
{
    editSField(TextMarginFieldMask);

    return _sfTextMargin.getValue();
}

//! Get the value of the SimpleTextForeground::_sfTextMargin field.
inline
const Vec2f &SimpleTextForegroundBase::getTextMargin(void) const
{
    return _sfTextMargin.getValue();
}

//! Set the value of the SimpleTextForeground::_sfTextMargin field.
inline
void SimpleTextForegroundBase::setTextMargin(const Vec2f &value)
{
    editSField(TextMarginFieldMask);

    _sfTextMargin.setValue(value);
}
//! Get the value of the SimpleTextForeground::_sfTile field.

inline
bool &SimpleTextForegroundBase::editTile(void)
{
    editSField(TileFieldMask);

    return _sfTile.getValue();
}

//! Get the value of the SimpleTextForeground::_sfTile field.
inline
      bool  SimpleTextForegroundBase::getTile(void) const
{
    return _sfTile.getValue();
}

//! Set the value of the SimpleTextForeground::_sfTile field.
inline
void SimpleTextForegroundBase::setTile(const bool value)
{
    editSField(TileFieldMask);

    _sfTile.setValue(value);
}

//! Get the value of the \a index element the SimpleTextForeground::_mfLines field.
inline
const std::string &SimpleTextForegroundBase::getLines(const UInt32 index) const
{
    return _mfLines[index];
}

inline
MFString           ::reference SimpleTextForegroundBase::editLines(const UInt32 index)
{
    editMField(LinesFieldMask, _mfLines);

    return _mfLines[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleTextForegroundBase::execSync (      SimpleTextForegroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (LinesFieldMask & whichField))
        _mfLines.syncWith(pFrom->_mfLines,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pFrom->_sfSize);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
        _sfShadowColor.syncWith(pFrom->_sfShadowColor);

    if(FieldBits::NoField != (BgColorFieldMask & whichField))
        _sfBgColor.syncWith(pFrom->_sfBgColor);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
        _sfFamily.syncWith(pFrom->_sfFamily);

    if(FieldBits::NoField != (ShadowOffsetFieldMask & whichField))
        _sfShadowOffset.syncWith(pFrom->_sfShadowOffset);

    if(FieldBits::NoField != (HorizontalAlignFieldMask & whichField))
        _sfHorizontalAlign.syncWith(pFrom->_sfHorizontalAlign);

    if(FieldBits::NoField != (VerticalAlignFieldMask & whichField))
        _sfVerticalAlign.syncWith(pFrom->_sfVerticalAlign);

    if(FieldBits::NoField != (BorderColorFieldMask & whichField))
        _sfBorderColor.syncWith(pFrom->_sfBorderColor);

    if(FieldBits::NoField != (BorderOffsetFieldMask & whichField))
        _sfBorderOffset.syncWith(pFrom->_sfBorderOffset);

    if(FieldBits::NoField != (TextMarginFieldMask & whichField))
        _sfTextMargin.syncWith(pFrom->_sfTextMargin);

    if(FieldBits::NoField != (TileFieldMask & whichField))
        _sfTile.syncWith(pFrom->_sfTile);
}
#endif


inline
const Char8 *SimpleTextForegroundBase::getClassname(void)
{
    return "SimpleTextForeground";
}
OSG_GEN_CONTAINERPTR(SimpleTextForeground);

OSG_END_NAMESPACE

