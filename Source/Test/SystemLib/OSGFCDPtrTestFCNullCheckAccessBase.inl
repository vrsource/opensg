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
 **     class FCDPtrTestFCNullCheckAccess!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &FCDPtrTestFCNullCheckAccessBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 FCDPtrTestFCNullCheckAccessBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 FCDPtrTestFCNullCheckAccessBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPub_ptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldSFPub_ptr(void) const
{
    return _sfFieldSFPub_ptr.getValue();
}

//! Set the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPub_ptr field.
inline
void FCDPtrTestFCNullCheckAccessBase::setFieldSFPub_ptr(FCDTestFC * const value)
{
    editSField(FieldSFPub_ptrFieldMask);

    _sfFieldSFPub_ptr.setValue(value);
}

//! Get the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPub_weakptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldSFPub_weakptr(void) const
{
    return _sfFieldSFPub_weakptr.getValue();
}

//! Set the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPub_weakptr field.
inline
void FCDPtrTestFCNullCheckAccessBase::setFieldSFPub_weakptr(FCDTestFC * const value)
{
    editSField(FieldSFPub_weakptrFieldMask);

    _sfFieldSFPub_weakptr.setValue(value);
}

//! Get the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPub_mpchildptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldSFPub_mpchildptr(void) const
{
    return _sfFieldSFPub_mpchildptr.getValue();
}

//! Set the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPub_mpchildptr field.
inline
void FCDPtrTestFCNullCheckAccessBase::setFieldSFPub_mpchildptr(FCDTestFC * const value)
{
    editSField(FieldSFPub_mpchildptrFieldMask);

    _sfFieldSFPub_mpchildptr.setValue(value);
}

//! Get the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPro_ptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldSFPro_ptr(void) const
{
    return _sfFieldSFPro_ptr.getValue();
}

//! Set the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPro_ptr field.
inline
void FCDPtrTestFCNullCheckAccessBase::setFieldSFPro_ptr(FCDTestFC * const value)
{
    editSField(FieldSFPro_ptrFieldMask);

    _sfFieldSFPro_ptr.setValue(value);
}

//! Get the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPro_weakptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldSFPro_weakptr(void) const
{
    return _sfFieldSFPro_weakptr.getValue();
}

//! Set the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPro_weakptr field.
inline
void FCDPtrTestFCNullCheckAccessBase::setFieldSFPro_weakptr(FCDTestFC * const value)
{
    editSField(FieldSFPro_weakptrFieldMask);

    _sfFieldSFPro_weakptr.setValue(value);
}

//! Get the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPro_mpchildptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldSFPro_mpchildptr(void) const
{
    return _sfFieldSFPro_mpchildptr.getValue();
}

//! Set the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPro_mpchildptr field.
inline
void FCDPtrTestFCNullCheckAccessBase::setFieldSFPro_mpchildptr(FCDTestFC * const value)
{
    editSField(FieldSFPro_mpchildptrFieldMask);

    _sfFieldSFPro_mpchildptr.setValue(value);
}

//! Get the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPub_spchildptr field.
inline
FCDSParTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldSFPub_spchildptr(void) const
{
    return _sfFieldSFPub_spchildptr.getValue();
}

//! Set the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPub_spchildptr field.
inline
void FCDPtrTestFCNullCheckAccessBase::setFieldSFPub_spchildptr(FCDSParTestFC * const value)
{
    editSField(FieldSFPub_spchildptrFieldMask);

    _sfFieldSFPub_spchildptr.setValue(value);
}

//! Get the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPro_spchildptr field.
inline
FCDSParTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldSFPro_spchildptr(void) const
{
    return _sfFieldSFPro_spchildptr.getValue();
}

//! Set the value of the FCDPtrTestFCNullCheckAccess::_sfFieldSFPro_spchildptr field.
inline
void FCDPtrTestFCNullCheckAccessBase::setFieldSFPro_spchildptr(FCDSParTestFC * const value)
{
    editSField(FieldSFPro_spchildptrFieldMask);

    _sfFieldSFPro_spchildptr.setValue(value);
}

//! Get the value of the \a index element the FCDPtrTestFCNullCheckAccess::_mfFieldMFPub_ptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldMFPub_ptr(const UInt32 index) const
{
    return _mfFieldMFPub_ptr[index];
}

//! Get the value of the \a index element the FCDPtrTestFCNullCheckAccess::_mfFieldMFPub_weakptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldMFPub_weakptr(const UInt32 index) const
{
    return _mfFieldMFPub_weakptr[index];
}

//! Get the value of the \a index element the FCDPtrTestFCNullCheckAccess::_mfFieldMFPub_mpchildptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldMFPub_mpchildptr(const UInt32 index) const
{
    return _mfFieldMFPub_mpchildptr[index];
}

//! Get the value of the \a index element the FCDPtrTestFCNullCheckAccess::_mfFieldMFPro_ptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldMFPro_ptr(const UInt32 index) const
{
    return _mfFieldMFPro_ptr[index];
}

//! Get the value of the \a index element the FCDPtrTestFCNullCheckAccess::_mfFieldMFPro_weakptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldMFPro_weakptr(const UInt32 index) const
{
    return _mfFieldMFPro_weakptr[index];
}

//! Get the value of the \a index element the FCDPtrTestFCNullCheckAccess::_mfFieldMFPro_mpchildptr field.
inline
FCDTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldMFPro_mpchildptr(const UInt32 index) const
{
    return _mfFieldMFPro_mpchildptr[index];
}

//! Get the value of the \a index element the FCDPtrTestFCNullCheckAccess::_mfFieldMFPub_spchildptr field.
inline
FCDSParTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldMFPub_spchildptr(const UInt32 index) const
{
    return _mfFieldMFPub_spchildptr[index];
}

//! Get the value of the \a index element the FCDPtrTestFCNullCheckAccess::_mfFieldMFPro_spchildptr field.
inline
FCDSParTestFC * FCDPtrTestFCNullCheckAccessBase::getFieldMFPro_spchildptr(const UInt32 index) const
{
    return _mfFieldMFPro_spchildptr[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void FCDPtrTestFCNullCheckAccessBase::execSync (      FCDPtrTestFCNullCheckAccessBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (FieldSFPub_ptrFieldMask & whichField))
        _sfFieldSFPub_ptr.syncWith(pFrom->_sfFieldSFPub_ptr);

    if(FieldBits::NoField != (FieldSFPub_weakptrFieldMask & whichField))
        _sfFieldSFPub_weakptr.syncWith(pFrom->_sfFieldSFPub_weakptr);

    if(FieldBits::NoField != (FieldSFPub_mpchildptrFieldMask & whichField))
        _sfFieldSFPub_mpchildptr.syncWith(pFrom->_sfFieldSFPub_mpchildptr);

    if(FieldBits::NoField != (FieldSFPro_ptrFieldMask & whichField))
        _sfFieldSFPro_ptr.syncWith(pFrom->_sfFieldSFPro_ptr);

    if(FieldBits::NoField != (FieldSFPro_weakptrFieldMask & whichField))
        _sfFieldSFPro_weakptr.syncWith(pFrom->_sfFieldSFPro_weakptr);

    if(FieldBits::NoField != (FieldSFPro_mpchildptrFieldMask & whichField))
        _sfFieldSFPro_mpchildptr.syncWith(pFrom->_sfFieldSFPro_mpchildptr);

    if(FieldBits::NoField != (FieldSFNo_ptrFieldMask & whichField))
        _sfFieldSFNo_ptr.syncWith(pFrom->_sfFieldSFNo_ptr);

    if(FieldBits::NoField != (FieldSFNo_weakptrFieldMask & whichField))
        _sfFieldSFNo_weakptr.syncWith(pFrom->_sfFieldSFNo_weakptr);

    if(FieldBits::NoField != (FieldSFNo_mpchildptrFieldMask & whichField))
        _sfFieldSFNo_mpchildptr.syncWith(pFrom->_sfFieldSFNo_mpchildptr);

    if(FieldBits::NoField != (FieldMFPub_ptrFieldMask & whichField))
        _mfFieldMFPub_ptr.syncWith(pFrom->_mfFieldMFPub_ptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPub_weakptrFieldMask & whichField))
        _mfFieldMFPub_weakptr.syncWith(pFrom->_mfFieldMFPub_weakptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPub_mpchildptrFieldMask & whichField))
        _mfFieldMFPub_mpchildptr.syncWith(pFrom->_mfFieldMFPub_mpchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPro_ptrFieldMask & whichField))
        _mfFieldMFPro_ptr.syncWith(pFrom->_mfFieldMFPro_ptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPro_weakptrFieldMask & whichField))
        _mfFieldMFPro_weakptr.syncWith(pFrom->_mfFieldMFPro_weakptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPro_mpchildptrFieldMask & whichField))
        _mfFieldMFPro_mpchildptr.syncWith(pFrom->_mfFieldMFPro_mpchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFNo_ptrFieldMask & whichField))
        _mfFieldMFNo_ptr.syncWith(pFrom->_mfFieldMFNo_ptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFNo_weakptrFieldMask & whichField))
        _mfFieldMFNo_weakptr.syncWith(pFrom->_mfFieldMFNo_weakptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFNo_mpchildptrFieldMask & whichField))
        _mfFieldMFNo_mpchildptr.syncWith(pFrom->_mfFieldMFNo_mpchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldSFPub_spchildptrFieldMask & whichField))
        _sfFieldSFPub_spchildptr.syncWith(pFrom->_sfFieldSFPub_spchildptr);

    if(FieldBits::NoField != (FieldSFPro_spchildptrFieldMask & whichField))
        _sfFieldSFPro_spchildptr.syncWith(pFrom->_sfFieldSFPro_spchildptr);

    if(FieldBits::NoField != (FieldSFNo_spchildptrFieldMask & whichField))
        _sfFieldSFNo_spchildptr.syncWith(pFrom->_sfFieldSFNo_spchildptr);

    if(FieldBits::NoField != (FieldMFPub_spchildptrFieldMask & whichField))
        _mfFieldMFPub_spchildptr.syncWith(pFrom->_mfFieldMFPub_spchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFPro_spchildptrFieldMask & whichField))
        _mfFieldMFPro_spchildptr.syncWith(pFrom->_mfFieldMFPro_spchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FieldMFNo_spchildptrFieldMask & whichField))
        _mfFieldMFNo_spchildptr.syncWith(pFrom->_mfFieldMFNo_spchildptr,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *FCDPtrTestFCNullCheckAccessBase::getClassname(void)
{
    return "FCDPtrTestFCNullCheckAccess";
}
OSG_GEN_CONTAINERPTR(FCDPtrTestFCNullCheckAccess);

OSG_END_NAMESPACE

