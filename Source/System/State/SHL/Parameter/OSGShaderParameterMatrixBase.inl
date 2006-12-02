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
 **     class ShaderParameterMatrix!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterMatrixBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterMatrixBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderParameterMatrixBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShaderParameterMatrix::_sfValue field.

inline
Matrix &ShaderParameterMatrixBase::editValue(void)
{
    editSField(ValueFieldMask);

    return _sfValue.getValue();
}

//! Get the value of the ShaderParameterMatrix::_sfValue field.
inline
const Matrix &ShaderParameterMatrixBase::getValue(void) const
{
    return _sfValue.getValue();
}

#ifdef OSG_1_COMPAT
inline
Matrix              &ShaderParameterMatrixBase::getValue          (void)
{
    return this->editValue          ();
}
#endif

//! Set the value of the ShaderParameterMatrix::_sfValue field.
inline
void ShaderParameterMatrixBase::setValue(const Matrix &value)
{
    editSField(ValueFieldMask);

    _sfValue.setValue(value);
}

//! create a new instance of the class
inline
ShaderParameterMatrixPtr ShaderParameterMatrixBase::create(void)
{
    ShaderParameterMatrixPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<ShaderParameterMatrix::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShaderParameterMatrixBase::execSync(      ShaderParameterMatrixBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pOther->_sfValue);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderParameterMatrixBase::execSync (      ShaderParameterMatrixBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pFrom->_sfValue);
}
#endif

#if 0
inline
void ShaderParameterMatrixBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ShaderParameterMatrixBase::getClassname(void)
{
    return "ShaderParameterMatrix";
}

typedef PointerBuilder<ShaderParameterMatrix>::ObjPtr          ShaderParameterMatrixPtr;
typedef PointerBuilder<ShaderParameterMatrix>::ObjPtrConst     ShaderParameterMatrixPtrConst;
typedef PointerBuilder<ShaderParameterMatrix>::ObjConstPtr     ShaderParameterMatrixConstPtr;

typedef PointerBuilder<ShaderParameterMatrix>::ObjPtrArg       ShaderParameterMatrixPtrArg;
typedef PointerBuilder<ShaderParameterMatrix>::ObjConstPtrArg  ShaderParameterMatrixConstPtrArg;
typedef PointerBuilder<ShaderParameterMatrix>::ObjPtrConstArg  ShaderParameterMatrixPtrConstArg;

OSG_END_NAMESPACE

#define OSGSHADERPARAMETERMATRIXBASE_INLINE_CVSID "@(#)$Id$"
