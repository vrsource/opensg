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
 **     class ScaleTransformationElement!
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




#include "OSGScaleTransformationElementBase.h"
#include "OSGScaleTransformationElement.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ScaleTransformationElement
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec3f           ScaleTransformationElementBase::_sfScale
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ScaleTransformationElement *, nsOSG>::_type(
    "ScaleTransformationElementPtr", 
    "TransformationElementPtr", 
    ScaleTransformationElement::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ScaleTransformationElement *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ScaleTransformationElement *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ScaleTransformationElement *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ScaleTransformationElementBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Scale",
        "",
        ScaleFieldId, ScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScaleTransformationElement::editHandleScale),
        static_cast<FieldGetMethodSig >(&ScaleTransformationElement::getHandleScale));

    oType.addInitialDesc(pDesc);
}


ScaleTransformationElementBase::TypeObject ScaleTransformationElementBase::_type(
    ScaleTransformationElementBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ScaleTransformationElementBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&ScaleTransformationElement::initMethod),
    reinterpret_cast<ExitContainerF>(&ScaleTransformationElement::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&ScaleTransformationElement::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ScaleTransformationElement\"\n"
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
    "      name=\"Scale\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"1.0f,1.0f,1.0f\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScaleTransformationElementBase::getType(void)
{
    return _type;
}

const FieldContainerType &ScaleTransformationElementBase::getType(void) const
{
    return _type;
}

UInt32 ScaleTransformationElementBase::getContainerSize(void) const
{
    return sizeof(ScaleTransformationElement);
}

/*------------------------- decorator get ------------------------------*/


SFVec3f *ScaleTransformationElementBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFVec3f *ScaleTransformationElementBase::getSFScale(void) const
{
    return &_sfScale;
}






/*------------------------------ access -----------------------------------*/

SizeT ScaleTransformationElementBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }

    return returnValue;
}

void ScaleTransformationElementBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
}

void ScaleTransformationElementBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        editSField(ScaleFieldMask);
        _sfScale.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ScaleTransformationElementTransitPtr ScaleTransformationElementBase::createLocal(BitVector bFlags)
{
    ScaleTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ScaleTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ScaleTransformationElementTransitPtr ScaleTransformationElementBase::createDependent(BitVector bFlags)
{
    ScaleTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ScaleTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ScaleTransformationElementTransitPtr ScaleTransformationElementBase::create(void)
{
    ScaleTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ScaleTransformationElement>(tmpPtr);
    }

    return fc;
}

ScaleTransformationElement *ScaleTransformationElementBase::createEmptyLocal(BitVector bFlags)
{
    ScaleTransformationElement *returnValue;

    newPtr<ScaleTransformationElement>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ScaleTransformationElement *ScaleTransformationElementBase::createEmpty(void)
{
    ScaleTransformationElement *returnValue;

    newPtr<ScaleTransformationElement>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ScaleTransformationElementBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ScaleTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScaleTransformationElement *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScaleTransformationElementBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ScaleTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScaleTransformationElement *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScaleTransformationElementBase::shallowCopy(void) const
{
    ScaleTransformationElement *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ScaleTransformationElement *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ScaleTransformationElementBase::ScaleTransformationElementBase(void) :
    Inherited(),
    _sfScale                  (Vec3f(1.0f,1.0f,1.0f))
{
}

ScaleTransformationElementBase::ScaleTransformationElementBase(const ScaleTransformationElementBase &source) :
    Inherited(source),
    _sfScale                  (source._sfScale                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ScaleTransformationElementBase::~ScaleTransformationElementBase(void)
{
}


GetFieldHandlePtr ScaleTransformationElementBase::getHandleScale           (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             const_cast<ScaleTransformationElementBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScaleTransformationElementBase::editHandleScale          (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             this));


    editSField(ScaleFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ScaleTransformationElementBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ScaleTransformationElement *pThis = static_cast<ScaleTransformationElement *>(this);

    pThis->execSync(static_cast<ScaleTransformationElement *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ScaleTransformationElementBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ScaleTransformationElement *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ScaleTransformationElement *>(pRefAspect),
                  dynamic_cast<const ScaleTransformationElement *>(this));

    return returnValue;
}
#endif

void ScaleTransformationElementBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
