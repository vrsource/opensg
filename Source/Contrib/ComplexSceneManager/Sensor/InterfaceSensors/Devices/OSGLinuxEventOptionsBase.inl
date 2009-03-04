/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class LinuxEventOptions!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LinuxEventOptionsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LinuxEventOptionsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LinuxEventOptionsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the LinuxEventOptions::_sfDevice field.

inline
std::string &LinuxEventOptionsBase::editDevice(void)
{
    editSField(DeviceFieldMask);

    return _sfDevice.getValue();
}

//! Get the value of the LinuxEventOptions::_sfDevice field.
inline
const std::string &LinuxEventOptionsBase::getDevice(void) const
{
    return _sfDevice.getValue();
}

//! Set the value of the LinuxEventOptions::_sfDevice field.
inline
void LinuxEventOptionsBase::setDevice(const std::string &value)
{
    editSField(DeviceFieldMask);

    _sfDevice.setValue(value);
}
//! Get the value of the LinuxEventOptions::_sfTRange field.

inline
Vec3f &LinuxEventOptionsBase::editTRange(void)
{
    editSField(TRangeFieldMask);

    return _sfTRange.getValue();
}

//! Get the value of the LinuxEventOptions::_sfTRange field.
inline
const Vec3f &LinuxEventOptionsBase::getTRange(void) const
{
    return _sfTRange.getValue();
}

//! Set the value of the LinuxEventOptions::_sfTRange field.
inline
void LinuxEventOptionsBase::setTRange(const Vec3f &value)
{
    editSField(TRangeFieldMask);

    _sfTRange.setValue(value);
}
//! Get the value of the LinuxEventOptions::_sfRRange field.

inline
Vec3f &LinuxEventOptionsBase::editRRange(void)
{
    editSField(RRangeFieldMask);

    return _sfRRange.getValue();
}

//! Get the value of the LinuxEventOptions::_sfRRange field.
inline
const Vec3f &LinuxEventOptionsBase::getRRange(void) const
{
    return _sfRRange.getValue();
}

//! Set the value of the LinuxEventOptions::_sfRRange field.
inline
void LinuxEventOptionsBase::setRRange(const Vec3f &value)
{
    editSField(RRangeFieldMask);

    _sfRRange.setValue(value);
}
//! Get the value of the LinuxEventOptions::_sfBufferSize field.

inline
UInt32 &LinuxEventOptionsBase::editBufferSize(void)
{
    editSField(BufferSizeFieldMask);

    return _sfBufferSize.getValue();
}

//! Get the value of the LinuxEventOptions::_sfBufferSize field.
inline
      UInt32  LinuxEventOptionsBase::getBufferSize(void) const
{
    return _sfBufferSize.getValue();
}

//! Set the value of the LinuxEventOptions::_sfBufferSize field.
inline
void LinuxEventOptionsBase::setBufferSize(const UInt32 value)
{
    editSField(BufferSizeFieldMask);

    _sfBufferSize.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void LinuxEventOptionsBase::execSync (      LinuxEventOptionsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DeviceFieldMask & whichField))
        _sfDevice.syncWith(pFrom->_sfDevice);

    if(FieldBits::NoField != (TRangeFieldMask & whichField))
        _sfTRange.syncWith(pFrom->_sfTRange);

    if(FieldBits::NoField != (RRangeFieldMask & whichField))
        _sfRRange.syncWith(pFrom->_sfRRange);

    if(FieldBits::NoField != (BufferSizeFieldMask & whichField))
        _sfBufferSize.syncWith(pFrom->_sfBufferSize);
}
#endif


inline
const Char8 *LinuxEventOptionsBase::getClassname(void)
{
    return "LinuxEventOptions";
}
OSG_GEN_CONTAINERPTR(LinuxEventOptions);

OSG_END_NAMESPACE
