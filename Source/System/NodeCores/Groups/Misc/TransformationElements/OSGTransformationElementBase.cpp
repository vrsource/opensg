/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class TransformationElement!
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



#include "OSGFieldContainer.h"          // ParentStack Class

#include "OSGTransformationElementBase.h"
#include "OSGTransformationElement.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TransformationElement
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * TransformationElementBase::_sfParentStack
    The StackedTransform this TransformationElement is contained in.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TransformationElement *, nsOSG>::_type(
    "TransformationElementPtr", 
    "AttachmentContainerPtr", 
    TransformationElement::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TransformationElement *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TransformationElement *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TransformationElement *,
                           nsOSG)

DataType &FieldTraits< TransformationElement *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<TransformationElement *, nsOSG>::getType();
}


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      TransformationElement *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1)


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TransformationElementBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentFieldContainerPtr::Description(
        SFParentFieldContainerPtr::getClassType(),
        "ParentStack",
        "The StackedTransform this TransformationElement is contained in.\n",
        ParentStackFieldId, ParentStackFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&TransformationElement::invalidEditField),
        static_cast     <FieldGetMethodSig >(&TransformationElement::invalidGetField));

    oType.addInitialDesc(pDesc);
}


TransformationElementBase::TypeObject TransformationElementBase::_type(
    TransformationElementBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    reinterpret_cast<InitContainerF>(&TransformationElement::initMethod),
    reinterpret_cast<ExitContainerF>(&TransformationElement::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&TransformationElement::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"TransformationElement\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"Group\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    childFields=\"multi\"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"ParentStack\"\n"
    "      type=\"FieldContainer\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"none\"\n"
    "      doRefCount=\"false\"\n"
    "      passFieldMask=\"true\"\n"
    "      category=\"parentpointer\"\n"
    "      >\n"
    "    The StackedTransform this TransformationElement is contained in.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TransformationElementBase::getType(void)
{
    return _type;
}

const FieldContainerType &TransformationElementBase::getType(void) const
{
    return _type;
}

UInt32 TransformationElementBase::getContainerSize(void) const
{
    return sizeof(TransformationElement);
}

/*------------------------- decorator get ------------------------------*/







/*------------------------------ access -----------------------------------*/

SizeT TransformationElementBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentStackFieldMask & whichField))
    {
        returnValue += _sfParentStack.getBinSize();
    }

    return returnValue;
}

void TransformationElementBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentStackFieldMask & whichField))
    {
        _sfParentStack.copyToBin(pMem);
    }
}

void TransformationElementBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentStackFieldMask & whichField))
    {
        editSField(ParentStackFieldMask);
        _sfParentStack.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

TransformationElementBase::TransformationElementBase(void) :
    Inherited(),
    _sfParentStack            (NULL)
{
}

TransformationElementBase::TransformationElementBase(const TransformationElementBase &source) :
    Inherited(source),
    _sfParentStack            (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

TransformationElementBase::~TransformationElementBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool TransformationElementBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentStackFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfParentStack.getValue         ();

            UInt16 oldChildFieldId =
                _sfParentStack.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(ParentStackFieldMask);

            _sfParentStack.setValue(static_cast<FieldContainer *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool TransformationElementBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentStackFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfParentStack.getValue() == pTypedParent)
            {
                editSField(ParentStackFieldMask);

                _sfParentStack.setValue(NULL, 0xFFFF);

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



GetFieldHandlePtr TransformationElementBase::getHandleParentStack     (void) const
{
    SFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr TransformationElementBase::editHandleParentStack    (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TransformationElementBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TransformationElement *pThis = static_cast<TransformationElement *>(this);

    pThis->execSync(static_cast<TransformationElement *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void TransformationElementBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
