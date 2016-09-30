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
 **     class ShaderProcVariable!
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



#include "OSGFieldContainer.h"          // Parents Class

#include "OSGShaderProcVariableBase.h"
#include "OSGShaderProcVariable.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderProcVariable
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          ShaderProcVariableBase::_sfDependency
    scope
*/

/*! \var FieldContainer * ShaderProcVariableBase::_mfParents
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderProcVariable *, nsOSG>::_type(
    "ShaderProcVariablePtr", 
    "ShaderVariablePtr", 
    ShaderProcVariable::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderProcVariable *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderProcVariable *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderProcVariable *,
                           nsOSG)

DataType &FieldTraits< ShaderProcVariable *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<ShaderProcVariable *, nsOSG>::getType();
}


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      ShaderProcVariable *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1)


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderProcVariableBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "dependency",
        "scope\n",
        DependencyFieldId, DependencyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProcVariable::editHandleDependency),
        static_cast<FieldGetMethodSig >(&ShaderProcVariable::getHandleDependency));

    oType.addInitialDesc(pDesc);

    pDesc = new MFParentFieldContainerPtr::Description(
        MFParentFieldContainerPtr::getClassType(),
        "parents",
        "",
        ParentsFieldId, ParentsFieldMask,
        true,
        (Field::FStdAccess | Field::FClusterLocal),
        static_cast     <FieldEditMethodSig>(&ShaderProcVariable::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderProcVariable::invalidGetField));

    oType.addInitialDesc(pDesc);
}


ShaderProcVariableBase::TypeObject ShaderProcVariableBase::_type(
    ShaderProcVariableBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    reinterpret_cast<InitContainerF>(&ShaderProcVariable::initMethod),
    reinterpret_cast<ExitContainerF>(&ShaderProcVariable::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&ShaderProcVariable::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderProcVariable\"\n"
    "   parent=\"ShaderVariable\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   childFields=\"multi\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"dependency\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"ShaderProcVariable::SHDObject\"\n"
    "\t >\n"
    "\tscope\n"
    "  </Field>\n"
    "    <Field\n"
    "        name=\"parents\"\n"
    "        type=\"FieldContainer\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"none\"\n"
    "        category=\"parentpointer\"\n"
    "        fieldFlags=\"FStdAccess, FClusterLocal\"\n"
    "        >\n"
    "    </Field>\n"
    "<!---        fieldFlags=\"FStdAccess, FClusterLocal\" -->\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderProcVariableBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderProcVariableBase::getType(void) const
{
    return _type;
}

UInt32 ShaderProcVariableBase::getContainerSize(void) const
{
    return sizeof(ShaderProcVariable);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *ShaderProcVariableBase::editSFDependency(void)
{
    editSField(DependencyFieldMask);

    return &_sfDependency;
}

const SFUInt32 *ShaderProcVariableBase::getSFDependency(void) const
{
    return &_sfDependency;
}







/*------------------------------ access -----------------------------------*/

SizeT ShaderProcVariableBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DependencyFieldMask & whichField))
    {
        returnValue += _sfDependency.getBinSize();
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        returnValue += _mfParents.getBinSize();
    }

    return returnValue;
}

void ShaderProcVariableBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DependencyFieldMask & whichField))
    {
        _sfDependency.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        _mfParents.copyToBin(pMem);
    }
}

void ShaderProcVariableBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DependencyFieldMask & whichField))
    {
        editSField(DependencyFieldMask);
        _sfDependency.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        editMField(ParentsFieldMask, _mfParents);
        _mfParents.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ShaderProcVariableBase::ShaderProcVariableBase(void) :
    Inherited(),
    _sfDependency             (UInt32(ShaderProcVariable::SHDObject)),
    _mfParents                ()
{
}

ShaderProcVariableBase::ShaderProcVariableBase(const ShaderProcVariableBase &source) :
    Inherited(source),
    _sfDependency             (source._sfDependency             ),
    _mfParents                ()
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderProcVariableBase::~ShaderProcVariableBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool ShaderProcVariableBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            editMField(ParentsFieldMask, _mfParents);

            _mfParents.push_back(pTypedParent, childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool ShaderProcVariableBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            Int32 iParentIdx = _mfParents.findIndex(pTypedParent);

            if(iParentIdx != -1)
            {
                editMField(ParentsFieldMask, _mfParents);

                _mfParents.erase(iParentIdx);

                return true;
            }

            SWARNING << "Child (["          << this
                     << "] id ["            << this->getId()
                     << "] type ["          << this->getType().getCName()
                     << "] parentFieldId [" << parentFieldId
                     << "]) - Parent (["    << pParent
                     << "] id ["            << pParent->getId()
                     << "] type ["          << pParent->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr ShaderProcVariableBase::getHandleDependency      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfDependency,
             this->getType().getFieldDesc(DependencyFieldId),
             const_cast<ShaderProcVariableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProcVariableBase::editHandleDependency     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfDependency,
             this->getType().getFieldDesc(DependencyFieldId),
             this));


    editSField(DependencyFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProcVariableBase::getHandleParents         (void) const
{
    MFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderProcVariableBase::editHandleParents        (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderProcVariableBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderProcVariable *pThis = static_cast<ShaderProcVariable *>(this);

    pThis->execSync(static_cast<ShaderProcVariable *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void ShaderProcVariableBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
