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
 **     class MouseDataInterfaceSensor!
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




#include "OSGMouseDataInterfaceSensorBase.h"
#include "OSGMouseDataInterfaceSensor.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MouseDataInterfaceSensor
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var MouseData       MouseDataInterfaceSensorBase::_sfMouseData
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<MouseDataInterfaceSensor *, nsOSG>::_type(
    "MouseDataInterfaceSensorPtr", 
    "DeviceInterfaceSensorPtr", 
    MouseDataInterfaceSensor::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(MouseDataInterfaceSensor *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MouseDataInterfaceSensorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMouseData::Description(
        SFMouseData::getClassType(),
        "mouseData",
        "",
        MouseDataFieldId, MouseDataFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MouseDataInterfaceSensor::editHandleMouseData),
        static_cast<FieldGetMethodSig >(&MouseDataInterfaceSensor::getHandleMouseData));

    oType.addInitialDesc(pDesc);
}


MouseDataInterfaceSensorBase::TypeObject MouseDataInterfaceSensorBase::_type(
    MouseDataInterfaceSensorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&MouseDataInterfaceSensorBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&MouseDataInterfaceSensor::initMethod),
    reinterpret_cast<ExitContainerF>(&MouseDataInterfaceSensor::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&MouseDataInterfaceSensor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"MouseDataInterfaceSensor\"\n"
    "    parent=\"DeviceInterfaceSensor\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"mouseData\"\n"
    "\t\ttype=\"MouseData\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MouseDataInterfaceSensorBase::getType(void)
{
    return _type;
}

const FieldContainerType &MouseDataInterfaceSensorBase::getType(void) const
{
    return _type;
}

UInt32 MouseDataInterfaceSensorBase::getContainerSize(void) const
{
    return sizeof(MouseDataInterfaceSensor);
}

/*------------------------- decorator get ------------------------------*/


SFMouseData *MouseDataInterfaceSensorBase::editSFMouseData(void)
{
    editSField(MouseDataFieldMask);

    return &_sfMouseData;
}

const SFMouseData *MouseDataInterfaceSensorBase::getSFMouseData(void) const
{
    return &_sfMouseData;
}






/*------------------------------ access -----------------------------------*/

SizeT MouseDataInterfaceSensorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MouseDataFieldMask & whichField))
    {
        returnValue += _sfMouseData.getBinSize();
    }

    return returnValue;
}

void MouseDataInterfaceSensorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MouseDataFieldMask & whichField))
    {
        _sfMouseData.copyToBin(pMem);
    }
}

void MouseDataInterfaceSensorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MouseDataFieldMask & whichField))
    {
        editSField(MouseDataFieldMask);
        _sfMouseData.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MouseDataInterfaceSensorTransitPtr MouseDataInterfaceSensorBase::createLocal(BitVector bFlags)
{
    MouseDataInterfaceSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MouseDataInterfaceSensor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MouseDataInterfaceSensorTransitPtr MouseDataInterfaceSensorBase::createDependent(BitVector bFlags)
{
    MouseDataInterfaceSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MouseDataInterfaceSensor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MouseDataInterfaceSensorTransitPtr MouseDataInterfaceSensorBase::create(void)
{
    MouseDataInterfaceSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MouseDataInterfaceSensor>(tmpPtr);
    }

    return fc;
}

MouseDataInterfaceSensor *MouseDataInterfaceSensorBase::createEmptyLocal(BitVector bFlags)
{
    MouseDataInterfaceSensor *returnValue;

    newPtr<MouseDataInterfaceSensor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MouseDataInterfaceSensor *MouseDataInterfaceSensorBase::createEmpty(void)
{
    MouseDataInterfaceSensor *returnValue;

    newPtr<MouseDataInterfaceSensor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MouseDataInterfaceSensorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MouseDataInterfaceSensor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MouseDataInterfaceSensor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MouseDataInterfaceSensorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MouseDataInterfaceSensor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MouseDataInterfaceSensor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MouseDataInterfaceSensorBase::shallowCopy(void) const
{
    MouseDataInterfaceSensor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MouseDataInterfaceSensor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MouseDataInterfaceSensorBase::MouseDataInterfaceSensorBase(void) :
    Inherited(),
    _sfMouseData              ()
{
}

MouseDataInterfaceSensorBase::MouseDataInterfaceSensorBase(const MouseDataInterfaceSensorBase &source) :
    Inherited(source),
    _sfMouseData              (source._sfMouseData              )
{
}


/*-------------------------- destructors ----------------------------------*/

MouseDataInterfaceSensorBase::~MouseDataInterfaceSensorBase(void)
{
}


GetFieldHandlePtr MouseDataInterfaceSensorBase::getHandleMouseData       (void) const
{
    SFMouseData::GetHandlePtr returnValue(
        new  SFMouseData::GetHandle(
             &_sfMouseData,
             this->getType().getFieldDesc(MouseDataFieldId),
             const_cast<MouseDataInterfaceSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MouseDataInterfaceSensorBase::editHandleMouseData      (void)
{
    SFMouseData::EditHandlePtr returnValue(
        new  SFMouseData::EditHandle(
             &_sfMouseData,
             this->getType().getFieldDesc(MouseDataFieldId),
             this));


    editSField(MouseDataFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MouseDataInterfaceSensorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MouseDataInterfaceSensor *pThis = static_cast<MouseDataInterfaceSensor *>(this);

    pThis->execSync(static_cast<MouseDataInterfaceSensor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MouseDataInterfaceSensorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MouseDataInterfaceSensor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MouseDataInterfaceSensor *>(pRefAspect),
                  dynamic_cast<const MouseDataInterfaceSensor *>(this));

    return returnValue;
}
#endif

void MouseDataInterfaceSensorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
