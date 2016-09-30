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
 **     class LookAtTransformationElement!
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




#include "OSGLookAtTransformationElementBase.h"
#include "OSGLookAtTransformationElement.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LookAtTransformationElement
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           LookAtTransformationElementBase::_sfEyePosition
    
*/

/*! \var Pnt3f           LookAtTransformationElementBase::_sfLookAtPosition
    
*/

/*! \var Vec3f           LookAtTransformationElementBase::_sfUpDirection
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<LookAtTransformationElement *, nsOSG>::_type(
    "LookAtTransformationElementPtr", 
    "TransformationElementPtr", 
    LookAtTransformationElement::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(LookAtTransformationElement *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           LookAtTransformationElement *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           LookAtTransformationElement *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void LookAtTransformationElementBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "EyePosition",
        "",
        EyePositionFieldId, EyePositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LookAtTransformationElement::editHandleEyePosition),
        static_cast<FieldGetMethodSig >(&LookAtTransformationElement::getHandleEyePosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "LookAtPosition",
        "",
        LookAtPositionFieldId, LookAtPositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LookAtTransformationElement::editHandleLookAtPosition),
        static_cast<FieldGetMethodSig >(&LookAtTransformationElement::getHandleLookAtPosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "UpDirection",
        "",
        UpDirectionFieldId, UpDirectionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LookAtTransformationElement::editHandleUpDirection),
        static_cast<FieldGetMethodSig >(&LookAtTransformationElement::getHandleUpDirection));

    oType.addInitialDesc(pDesc);
}


LookAtTransformationElementBase::TypeObject LookAtTransformationElementBase::_type(
    LookAtTransformationElementBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&LookAtTransformationElementBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&LookAtTransformationElement::initMethod),
    reinterpret_cast<ExitContainerF>(&LookAtTransformationElement::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&LookAtTransformationElement::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"LookAtTransformationElement\"\n"
    "    parent=\"TransformationElement\"\n"
    "    library=\"Group\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"EyePosition\"\n"
    "      type=\"Pnt3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"0.0f,0.0f,0.0f\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"LookAtPosition\"\n"
    "      type=\"Pnt3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"0.0f,0.0f,-1.0f\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"UpDirection\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"0.0f,1.0f,0.0f\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LookAtTransformationElementBase::getType(void)
{
    return _type;
}

const FieldContainerType &LookAtTransformationElementBase::getType(void) const
{
    return _type;
}

UInt32 LookAtTransformationElementBase::getContainerSize(void) const
{
    return sizeof(LookAtTransformationElement);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *LookAtTransformationElementBase::editSFEyePosition(void)
{
    editSField(EyePositionFieldMask);

    return &_sfEyePosition;
}

const SFPnt3f *LookAtTransformationElementBase::getSFEyePosition(void) const
{
    return &_sfEyePosition;
}


SFPnt3f *LookAtTransformationElementBase::editSFLookAtPosition(void)
{
    editSField(LookAtPositionFieldMask);

    return &_sfLookAtPosition;
}

const SFPnt3f *LookAtTransformationElementBase::getSFLookAtPosition(void) const
{
    return &_sfLookAtPosition;
}


SFVec3f *LookAtTransformationElementBase::editSFUpDirection(void)
{
    editSField(UpDirectionFieldMask);

    return &_sfUpDirection;
}

const SFVec3f *LookAtTransformationElementBase::getSFUpDirection(void) const
{
    return &_sfUpDirection;
}






/*------------------------------ access -----------------------------------*/

SizeT LookAtTransformationElementBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EyePositionFieldMask & whichField))
    {
        returnValue += _sfEyePosition.getBinSize();
    }
    if(FieldBits::NoField != (LookAtPositionFieldMask & whichField))
    {
        returnValue += _sfLookAtPosition.getBinSize();
    }
    if(FieldBits::NoField != (UpDirectionFieldMask & whichField))
    {
        returnValue += _sfUpDirection.getBinSize();
    }

    return returnValue;
}

void LookAtTransformationElementBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EyePositionFieldMask & whichField))
    {
        _sfEyePosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LookAtPositionFieldMask & whichField))
    {
        _sfLookAtPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UpDirectionFieldMask & whichField))
    {
        _sfUpDirection.copyToBin(pMem);
    }
}

void LookAtTransformationElementBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EyePositionFieldMask & whichField))
    {
        editSField(EyePositionFieldMask);
        _sfEyePosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LookAtPositionFieldMask & whichField))
    {
        editSField(LookAtPositionFieldMask);
        _sfLookAtPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UpDirectionFieldMask & whichField))
    {
        editSField(UpDirectionFieldMask);
        _sfUpDirection.copyFromBin(pMem);
    }
}

//! create a new instance of the class
LookAtTransformationElementTransitPtr LookAtTransformationElementBase::createLocal(BitVector bFlags)
{
    LookAtTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<LookAtTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
LookAtTransformationElementTransitPtr LookAtTransformationElementBase::createDependent(BitVector bFlags)
{
    LookAtTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<LookAtTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
LookAtTransformationElementTransitPtr LookAtTransformationElementBase::create(void)
{
    LookAtTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<LookAtTransformationElement>(tmpPtr);
    }

    return fc;
}

LookAtTransformationElement *LookAtTransformationElementBase::createEmptyLocal(BitVector bFlags)
{
    LookAtTransformationElement *returnValue;

    newPtr<LookAtTransformationElement>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
LookAtTransformationElement *LookAtTransformationElementBase::createEmpty(void)
{
    LookAtTransformationElement *returnValue;

    newPtr<LookAtTransformationElement>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr LookAtTransformationElementBase::shallowCopyLocal(
    BitVector bFlags) const
{
    LookAtTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LookAtTransformationElement *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr LookAtTransformationElementBase::shallowCopyDependent(
    BitVector bFlags) const
{
    LookAtTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LookAtTransformationElement *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr LookAtTransformationElementBase::shallowCopy(void) const
{
    LookAtTransformationElement *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const LookAtTransformationElement *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

LookAtTransformationElementBase::LookAtTransformationElementBase(void) :
    Inherited(),
    _sfEyePosition            (Pnt3f(0.0f,0.0f,0.0f)),
    _sfLookAtPosition         (Pnt3f(0.0f,0.0f,-1.0f)),
    _sfUpDirection            (Vec3f(0.0f,1.0f,0.0f))
{
}

LookAtTransformationElementBase::LookAtTransformationElementBase(const LookAtTransformationElementBase &source) :
    Inherited(source),
    _sfEyePosition            (source._sfEyePosition            ),
    _sfLookAtPosition         (source._sfLookAtPosition         ),
    _sfUpDirection            (source._sfUpDirection            )
{
}


/*-------------------------- destructors ----------------------------------*/

LookAtTransformationElementBase::~LookAtTransformationElementBase(void)
{
}


GetFieldHandlePtr LookAtTransformationElementBase::getHandleEyePosition     (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfEyePosition,
             this->getType().getFieldDesc(EyePositionFieldId),
             const_cast<LookAtTransformationElementBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LookAtTransformationElementBase::editHandleEyePosition    (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfEyePosition,
             this->getType().getFieldDesc(EyePositionFieldId),
             this));


    editSField(EyePositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr LookAtTransformationElementBase::getHandleLookAtPosition  (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfLookAtPosition,
             this->getType().getFieldDesc(LookAtPositionFieldId),
             const_cast<LookAtTransformationElementBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LookAtTransformationElementBase::editHandleLookAtPosition (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfLookAtPosition,
             this->getType().getFieldDesc(LookAtPositionFieldId),
             this));


    editSField(LookAtPositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr LookAtTransformationElementBase::getHandleUpDirection     (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfUpDirection,
             this->getType().getFieldDesc(UpDirectionFieldId),
             const_cast<LookAtTransformationElementBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LookAtTransformationElementBase::editHandleUpDirection    (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfUpDirection,
             this->getType().getFieldDesc(UpDirectionFieldId),
             this));


    editSField(UpDirectionFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LookAtTransformationElementBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    LookAtTransformationElement *pThis = static_cast<LookAtTransformationElement *>(this);

    pThis->execSync(static_cast<LookAtTransformationElement *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *LookAtTransformationElementBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    LookAtTransformationElement *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const LookAtTransformationElement *>(pRefAspect),
                  dynamic_cast<const LookAtTransformationElement *>(this));

    return returnValue;
}
#endif

void LookAtTransformationElementBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
