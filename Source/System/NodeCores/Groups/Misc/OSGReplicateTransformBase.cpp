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
 **     class ReplicateTransform!
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



#include "OSGNode.h"                    // Target Class

#include "OSGReplicateTransformBase.h"
#include "OSGReplicateTransform.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ReplicateTransform
    This core replicates the to world transformation of the target node attached
    to it. This means that when this core accumulates it's transform with it's
    parent, that it overwrites it instead of multiplying with it.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Node *          ReplicateTransformBase::_sfTarget
    The target node.  The to world transformation will be replicated by this
    core. 
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ReplicateTransform *, nsOSG>::_type(
    "ReplicateTransformPtr", 
    "GroupPtr", 
    ReplicateTransform::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ReplicateTransform *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ReplicateTransform *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ReplicateTransform *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ReplicateTransformBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "Target",
        "The target node.  The to world transformation will be replicated by this\n"
        "core. \n",
        TargetFieldId, TargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ReplicateTransform::editHandleTarget),
        static_cast<FieldGetMethodSig >(&ReplicateTransform::getHandleTarget));

    oType.addInitialDesc(pDesc);
}


ReplicateTransformBase::TypeObject ReplicateTransformBase::_type(
    ReplicateTransformBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ReplicateTransformBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&ReplicateTransform::initMethod),
    reinterpret_cast<ExitContainerF>(&ReplicateTransform::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&ReplicateTransform::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ReplicateTransform\"\n"
    "    parent=\"Group\"\n"
    "    library=\"Group\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    "    >\n"
    "  This core replicates the to world transformation of the target node attached\n"
    "  to it. This means that when this core accumulates it's transform with it's\n"
    "  parent, that it overwrites it instead of multiplying with it.\n"
    "  <Field\n"
    "      name=\"Target\"\n"
    "      type=\"Node\"\n"
    "      category=\"pointer\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      >\n"
    "    The target node.  The to world transformation will be replicated by this\n"
    "    core. \n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "This core replicates the to world transformation of the target node attached\n"
    "to it. This means that when this core accumulates it's transform with it's\n"
    "parent, that it overwrites it instead of multiplying with it.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ReplicateTransformBase::getType(void)
{
    return _type;
}

const FieldContainerType &ReplicateTransformBase::getType(void) const
{
    return _type;
}

UInt32 ReplicateTransformBase::getContainerSize(void) const
{
    return sizeof(ReplicateTransform);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ReplicateTransform::_sfTarget field.
const SFUnrecNodePtr *ReplicateTransformBase::getSFTarget(void) const
{
    return &_sfTarget;
}

SFUnrecNodePtr      *ReplicateTransformBase::editSFTarget         (void)
{
    editSField(TargetFieldMask);

    return &_sfTarget;
}

//! Get the value of the ReplicateTransform::_sfTarget field.
Node * ReplicateTransformBase::getTarget(void) const
{
    return _sfTarget.getValue();
}

//! Set the value of the ReplicateTransform::_sfTarget field.
void ReplicateTransformBase::setTarget(Node * const value)
{
    editSField(TargetFieldMask);

    _sfTarget.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT ReplicateTransformBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        returnValue += _sfTarget.getBinSize();
    }

    return returnValue;
}

void ReplicateTransformBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        _sfTarget.copyToBin(pMem);
    }
}

void ReplicateTransformBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        editSField(TargetFieldMask);
        _sfTarget.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ReplicateTransformTransitPtr ReplicateTransformBase::createLocal(BitVector bFlags)
{
    ReplicateTransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ReplicateTransform>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ReplicateTransformTransitPtr ReplicateTransformBase::createDependent(BitVector bFlags)
{
    ReplicateTransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ReplicateTransform>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ReplicateTransformTransitPtr ReplicateTransformBase::create(void)
{
    ReplicateTransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ReplicateTransform>(tmpPtr);
    }

    return fc;
}

ReplicateTransform *ReplicateTransformBase::createEmptyLocal(BitVector bFlags)
{
    ReplicateTransform *returnValue;

    newPtr<ReplicateTransform>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ReplicateTransform *ReplicateTransformBase::createEmpty(void)
{
    ReplicateTransform *returnValue;

    newPtr<ReplicateTransform>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ReplicateTransformBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ReplicateTransform *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ReplicateTransform *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ReplicateTransformBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ReplicateTransform *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ReplicateTransform *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ReplicateTransformBase::shallowCopy(void) const
{
    ReplicateTransform *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ReplicateTransform *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ReplicateTransformBase::ReplicateTransformBase(void) :
    Inherited(),
    _sfTarget                 (NULL)
{
}

ReplicateTransformBase::ReplicateTransformBase(const ReplicateTransformBase &source) :
    Inherited(source),
    _sfTarget                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

ReplicateTransformBase::~ReplicateTransformBase(void)
{
}

void ReplicateTransformBase::onCreate(const ReplicateTransform *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ReplicateTransform *pThis = static_cast<ReplicateTransform *>(this);

        pThis->setTarget(source->getTarget());
    }
}

GetFieldHandlePtr ReplicateTransformBase::getHandleTarget          (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfTarget,
             this->getType().getFieldDesc(TargetFieldId),
             const_cast<ReplicateTransformBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ReplicateTransformBase::editHandleTarget         (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfTarget,
             this->getType().getFieldDesc(TargetFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ReplicateTransform::setTarget,
                    static_cast<ReplicateTransform *>(this), _1));

    editSField(TargetFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ReplicateTransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ReplicateTransform *pThis = static_cast<ReplicateTransform *>(this);

    pThis->execSync(static_cast<ReplicateTransform *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ReplicateTransformBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ReplicateTransform *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ReplicateTransform *>(pRefAspect),
                  dynamic_cast<const ReplicateTransform *>(this));

    return returnValue;
}
#endif

void ReplicateTransformBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ReplicateTransform *>(this)->setTarget(NULL);


}


OSG_END_NAMESPACE
