/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class SkeletonJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGSkeleton.h"                // Skeleton Class

#include "OSGSkeletonJointBase.h"
#include "OSGSkeletonJoint.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SkeletonJoint
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Skeleton *      SkeletonJointBase::_sfSkeleton
    Parent skeleton.
*/

/*! \var Int16           SkeletonJointBase::_sfJointId
    Id of the joint in the skeleton, used to assign vertices to joints.
    The joints in a skeleton must have a unique jointId and they should
    form an interval (no holes) [0, N].
*/

/*! \var Matrix          SkeletonJointBase::_sfInvBindMatrix
    Inverse of the bind matrix for this joint.
*/

/*! \var Matrix          SkeletonJointBase::_sfMatrix
    Transformation matrix of this joint.
*/

/*! \var Matrix          SkeletonJointBase::_sfWorldMatrix
    World transformation matrix of this joint.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SkeletonJoint *>::_type("SkeletonJointPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SkeletonJoint *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SkeletonJoint *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SkeletonJoint *,
                           0);

DataType &FieldTraits< SkeletonJoint *, 1 >::getType(void)
{
    return FieldTraits<SkeletonJoint *, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      SkeletonJoint *,
                      UnrecordedRefCountPolicy,
                      1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      SkeletonJoint *,
                      UnrecordedRefCountPolicy,
                      1);


DataType &FieldTraits<SkeletonJoint *, 2 >::getType(void)
{
    return FieldTraits<SkeletonJoint *, 0>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    SkeletonJoint *,
                    NoRefCountPolicy,
                    2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         SkeletonJoint *,
                         NoRefCountPolicy,
                         2);


OSG_MFIELDTYPE_INST(ParentPointerMField,
                    SkeletonJoint *,
                    NoRefCountPolicy,
                    2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerMField,
                         SkeletonJoint *,
                         NoRefCountPolicy,
                         2);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SkeletonJointBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentSkeletonPtr::Description(
        SFParentSkeletonPtr::getClassType(),
        "skeleton",
        "Parent skeleton.\n",
        SkeletonFieldId, SkeletonFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&SkeletonJoint::invalidEditField),
        static_cast     <FieldGetMethodSig >(&SkeletonJoint::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt16::Description(
        SFInt16::getClassType(),
        "jointId",
        "Id of the joint in the skeleton, used to assign vertices to joints.\n"
        "The joints in a skeleton must have a unique jointId and they should\n"
        "form an interval (no holes) [0, N].\n",
        JointIdFieldId, JointIdFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonJoint::editHandleJointId),
        static_cast<FieldGetMethodSig >(&SkeletonJoint::getHandleJointId));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "invBindMatrix",
        "Inverse of the bind matrix for this joint.\n",
        InvBindMatrixFieldId, InvBindMatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonJoint::editHandleInvBindMatrix),
        static_cast<FieldGetMethodSig >(&SkeletonJoint::getHandleInvBindMatrix));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "matrix",
        "Transformation matrix of this joint.\n",
        MatrixFieldId, MatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonJoint::editHandleMatrix),
        static_cast<FieldGetMethodSig >(&SkeletonJoint::getHandleMatrix));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "worldMatrix",
        "World transformation matrix of this joint.\n",
        WorldMatrixFieldId, WorldMatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonJoint::editHandleWorldMatrix),
        static_cast<FieldGetMethodSig >(&SkeletonJoint::getHandleWorldMatrix));

    oType.addInitialDesc(pDesc);
}


SkeletonJointBase::TypeObject SkeletonJointBase::_type(
    SkeletonJointBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SkeletonJointBase::createEmptyLocal),
    SkeletonJoint::initMethod,
    SkeletonJoint::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SkeletonJoint::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SkeletonJoint\"\n"
    "   parent=\"Group\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   isNodeCore=\"false\"\n"
    "   childFields=\"both\"\n"
    "   parentFields=\"both\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"skeleton\"\n"
    "     type=\"Skeleton\"\n"
    "     category=\"parentpointer\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"NULL\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"none\"\n"
    "     >\n"
    "    Parent skeleton.\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"jointId\"\n"
    "     type=\"Int16\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     defaultValue=\"SkeletonJoint::INVALID_JOINT_ID\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Id of the joint in the skeleton, used to assign vertices to joints.\n"
    "    The joints in a skeleton must have a unique jointId and they should\n"
    "    form an interval (no holes) [0, N].\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"invBindMatrix\"\n"
    "     type=\"Matrix\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Inverse of the bind matrix for this joint.\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"matrix\"\n"
    "     type=\"Matrix\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Transformation matrix of this joint.\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"worldMatrix\"\n"
    "     type=\"Matrix\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"protected\"\n"
    "     >\n"
    "    World transformation matrix of this joint.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonJointBase::getType(void)
{
    return _type;
}

const FieldContainerType &SkeletonJointBase::getType(void) const
{
    return _type;
}

UInt32 SkeletonJointBase::getContainerSize(void) const
{
    return sizeof(SkeletonJoint);
}

/*------------------------- decorator get ------------------------------*/



SFInt16 *SkeletonJointBase::editSFJointId(void)
{
    editSField(JointIdFieldMask);

    return &_sfJointId;
}

const SFInt16 *SkeletonJointBase::getSFJointId(void) const
{
    return &_sfJointId;
}


SFMatrix *SkeletonJointBase::editSFInvBindMatrix(void)
{
    editSField(InvBindMatrixFieldMask);

    return &_sfInvBindMatrix;
}

const SFMatrix *SkeletonJointBase::getSFInvBindMatrix(void) const
{
    return &_sfInvBindMatrix;
}


SFMatrix *SkeletonJointBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrix *SkeletonJointBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}


SFMatrix *SkeletonJointBase::editSFWorldMatrix(void)
{
    editSField(WorldMatrixFieldMask);

    return &_sfWorldMatrix;
}

const SFMatrix *SkeletonJointBase::getSFWorldMatrix(void) const
{
    return &_sfWorldMatrix;
}






/*------------------------------ access -----------------------------------*/

UInt32 SkeletonJointBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        returnValue += _sfSkeleton.getBinSize();
    }
    if(FieldBits::NoField != (JointIdFieldMask & whichField))
    {
        returnValue += _sfJointId.getBinSize();
    }
    if(FieldBits::NoField != (InvBindMatrixFieldMask & whichField))
    {
        returnValue += _sfInvBindMatrix.getBinSize();
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }
    if(FieldBits::NoField != (WorldMatrixFieldMask & whichField))
    {
        returnValue += _sfWorldMatrix.getBinSize();
    }

    return returnValue;
}

void SkeletonJointBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        _sfSkeleton.copyToBin(pMem);
    }
    if(FieldBits::NoField != (JointIdFieldMask & whichField))
    {
        _sfJointId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InvBindMatrixFieldMask & whichField))
    {
        _sfInvBindMatrix.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WorldMatrixFieldMask & whichField))
    {
        _sfWorldMatrix.copyToBin(pMem);
    }
}

void SkeletonJointBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        _sfSkeleton.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (JointIdFieldMask & whichField))
    {
        _sfJointId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InvBindMatrixFieldMask & whichField))
    {
        _sfInvBindMatrix.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WorldMatrixFieldMask & whichField))
    {
        _sfWorldMatrix.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SkeletonJointTransitPtr SkeletonJointBase::createLocal(BitVector bFlags)
{
    SkeletonJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SkeletonJoint>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SkeletonJointTransitPtr SkeletonJointBase::createDependent(BitVector bFlags)
{
    SkeletonJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SkeletonJoint>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SkeletonJointTransitPtr SkeletonJointBase::create(void)
{
    SkeletonJointTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SkeletonJoint>(tmpPtr);
    }

    return fc;
}

SkeletonJoint *SkeletonJointBase::createEmptyLocal(BitVector bFlags)
{
    SkeletonJoint *returnValue;

    newPtr<SkeletonJoint>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SkeletonJoint *SkeletonJointBase::createEmpty(void)
{
    SkeletonJoint *returnValue;

    newPtr<SkeletonJoint>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SkeletonJointBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SkeletonJoint *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonJoint *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonJointBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SkeletonJoint *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonJoint *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonJointBase::shallowCopy(void) const
{
    SkeletonJoint *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SkeletonJoint *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SkeletonJointBase::SkeletonJointBase(void) :
    Inherited(),
    _sfSkeleton               (NULL),
    _sfJointId                (Int16(SkeletonJoint::INVALID_JOINT_ID)),
    _sfInvBindMatrix          (),
    _sfMatrix                 (),
    _sfWorldMatrix            ()
{
}

SkeletonJointBase::SkeletonJointBase(const SkeletonJointBase &source) :
    Inherited(source),
    _sfSkeleton               (NULL),
    _sfJointId                (source._sfJointId                ),
    _sfInvBindMatrix          (source._sfInvBindMatrix          ),
    _sfMatrix                 (source._sfMatrix                 ),
    _sfWorldMatrix            (source._sfWorldMatrix            )
{
}


/*-------------------------- destructors ----------------------------------*/

SkeletonJointBase::~SkeletonJointBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool SkeletonJointBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == SkeletonFieldId)
    {
        Skeleton * pTypedParent =
            dynamic_cast< Skeleton * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfSkeleton.getValue         ();

            UInt16 oldChildFieldId =
                _sfSkeleton.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(SkeletonFieldMask);

            _sfSkeleton.setValue(static_cast<Skeleton *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool SkeletonJointBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == SkeletonFieldId)
    {
        Skeleton * pTypedParent =
            dynamic_cast< Skeleton * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfSkeleton.getValue() == pParent)
            {
                editSField(SkeletonFieldMask);

                _sfSkeleton.setValue(NULL, 0xFFFF);

                return true;
            }

            FWARNING(("SkeletonJointBase::unlinkParent: "
                      "Child <-> Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr SkeletonJointBase::getHandleSkeleton        (void) const
{
    SFParentSkeletonPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr SkeletonJointBase::editHandleSkeleton       (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr SkeletonJointBase::getHandleJointId         (void) const
{
    SFInt16::GetHandlePtr returnValue(
        new  SFInt16::GetHandle(
             &_sfJointId,
             this->getType().getFieldDesc(JointIdFieldId),
             const_cast<SkeletonJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonJointBase::editHandleJointId        (void)
{
    SFInt16::EditHandlePtr returnValue(
        new  SFInt16::EditHandle(
             &_sfJointId,
             this->getType().getFieldDesc(JointIdFieldId),
             this));


    editSField(JointIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonJointBase::getHandleInvBindMatrix   (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfInvBindMatrix,
             this->getType().getFieldDesc(InvBindMatrixFieldId),
             const_cast<SkeletonJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonJointBase::editHandleInvBindMatrix  (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfInvBindMatrix,
             this->getType().getFieldDesc(InvBindMatrixFieldId),
             this));


    editSField(InvBindMatrixFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonJointBase::getHandleMatrix          (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             const_cast<SkeletonJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonJointBase::editHandleMatrix         (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             this));


    editSField(MatrixFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonJointBase::getHandleWorldMatrix     (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfWorldMatrix,
             this->getType().getFieldDesc(WorldMatrixFieldId),
             const_cast<SkeletonJointBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonJointBase::editHandleWorldMatrix    (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfWorldMatrix,
             this->getType().getFieldDesc(WorldMatrixFieldId),
             this));


    editSField(WorldMatrixFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SkeletonJointBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SkeletonJoint *pThis = static_cast<SkeletonJoint *>(this);

    pThis->execSync(static_cast<SkeletonJoint *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SkeletonJointBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SkeletonJoint *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SkeletonJoint *>(pRefAspect),
                  dynamic_cast<const SkeletonJoint *>(this));

    return returnValue;
}
#endif

void SkeletonJointBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
