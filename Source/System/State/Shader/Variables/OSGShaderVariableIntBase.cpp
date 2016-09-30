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
 **     class ShaderVariableInt!
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




#include "OSGShaderVariableIntBase.h"
#include "OSGShaderVariableInt.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariableInt
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Int32           ShaderVariableIntBase::_sfValue
    parameter value
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderVariableInt *, nsOSG>::_type(
    "ShaderVariableIntPtr", 
    "ShaderValueVariablePtr", 
    ShaderVariableInt::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderVariableInt *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariableInt *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariableInt *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderVariableIntBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariableInt::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderVariableInt::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderVariableIntBase::TypeObject ShaderVariableIntBase::_type(
    ShaderVariableIntBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShaderVariableIntBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&ShaderVariableInt::initMethod),
    reinterpret_cast<ExitContainerF>(&ShaderVariableInt::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&ShaderVariableInt::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderVariableInt\"\n"
    "   parent=\"ShaderValueVariable\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"value\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tparameter value\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariableIntBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariableIntBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariableIntBase::getContainerSize(void) const
{
    return sizeof(ShaderVariableInt);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *ShaderVariableIntBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFInt32 *ShaderVariableIntBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

SizeT ShaderVariableIntBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderVariableIntBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderVariableIntBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        editSField(ValueFieldMask);
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderVariableIntTransitPtr ShaderVariableIntBase::createLocal(BitVector bFlags)
{
    ShaderVariableIntTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableInt>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderVariableIntTransitPtr ShaderVariableIntBase::createDependent(BitVector bFlags)
{
    ShaderVariableIntTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableInt>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderVariableIntTransitPtr ShaderVariableIntBase::create(void)
{
    ShaderVariableIntTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderVariableInt>(tmpPtr);
    }

    return fc;
}

ShaderVariableInt *ShaderVariableIntBase::createEmptyLocal(BitVector bFlags)
{
    ShaderVariableInt *returnValue;

    newPtr<ShaderVariableInt>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderVariableInt *ShaderVariableIntBase::createEmpty(void)
{
    ShaderVariableInt *returnValue;

    newPtr<ShaderVariableInt>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderVariableIntBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderVariableInt *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableInt *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableIntBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderVariableInt *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableInt *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableIntBase::shallowCopy(void) const
{
    ShaderVariableInt *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderVariableInt *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderVariableIntBase::ShaderVariableIntBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderVariableIntBase::ShaderVariableIntBase(const ShaderVariableIntBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariableIntBase::~ShaderVariableIntBase(void)
{
}


GetFieldHandlePtr ShaderVariableIntBase::getHandleValue           (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<ShaderVariableIntBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariableIntBase::editHandleValue          (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariableIntBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariableInt *pThis = static_cast<ShaderVariableInt *>(this);

    pThis->execSync(static_cast<ShaderVariableInt *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderVariableIntBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderVariableInt *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderVariableInt *>(pRefAspect),
                  dynamic_cast<const ShaderVariableInt *>(this));

    return returnValue;
}
#endif

void ShaderVariableIntBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
