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
 **     class SkeletonSkinningAlgorithm!
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




#include "OSGSkeletonSkinningAlgorithmBase.h"
#include "OSGSkeletonSkinningAlgorithm.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SkeletonSkinningAlgorithm
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           SkeletonSkinningAlgorithmBase::_mfDrawPositions
    
*/

/*! \var UInt32          SkeletonSkinningAlgorithmBase::_mfDrawIndex
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<SkeletonSkinningAlgorithm *, nsOSG>::_type(
    "SkeletonSkinningAlgorithmPtr", 
    "SkinningAlgorithmPtr", 
    SkeletonSkinningAlgorithm::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(SkeletonSkinningAlgorithm *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SkeletonSkinningAlgorithm *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SkeletonSkinningAlgorithm *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SkeletonSkinningAlgorithmBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFPnt3f::Description(
        MFPnt3f::getClassType(),
        "drawPositions",
        "",
        DrawPositionsFieldId, DrawPositionsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonSkinningAlgorithm::editHandleDrawPositions),
        static_cast<FieldGetMethodSig >(&SkeletonSkinningAlgorithm::getHandleDrawPositions));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "drawIndex",
        "",
        DrawIndexFieldId, DrawIndexFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonSkinningAlgorithm::editHandleDrawIndex),
        static_cast<FieldGetMethodSig >(&SkeletonSkinningAlgorithm::getHandleDrawIndex));

    oType.addInitialDesc(pDesc);
}


SkeletonSkinningAlgorithmBase::TypeObject SkeletonSkinningAlgorithmBase::_type(
    SkeletonSkinningAlgorithmBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&SkeletonSkinningAlgorithmBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&SkeletonSkinningAlgorithm::initMethod),
    reinterpret_cast<ExitContainerF>(&SkeletonSkinningAlgorithm::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&SkeletonSkinningAlgorithm::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SkeletonSkinningAlgorithm\"\n"
    "   parent=\"SkinningAlgorithm\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   childFields=\"none\"\n"
    "   parentFields=\"none\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"drawPositions\"\n"
    "     type=\"Pnt3f\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"protected\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "    <Field\n"
    "     name=\"drawIndex\"\n"
    "     type=\"UInt32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"protected\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonSkinningAlgorithmBase::getType(void)
{
    return _type;
}

const FieldContainerType &SkeletonSkinningAlgorithmBase::getType(void) const
{
    return _type;
}

UInt32 SkeletonSkinningAlgorithmBase::getContainerSize(void) const
{
    return sizeof(SkeletonSkinningAlgorithm);
}

/*------------------------- decorator get ------------------------------*/


MFPnt3f *SkeletonSkinningAlgorithmBase::editMFDrawPositions(void)
{
    editMField(DrawPositionsFieldMask, _mfDrawPositions);

    return &_mfDrawPositions;
}

const MFPnt3f *SkeletonSkinningAlgorithmBase::getMFDrawPositions(void) const
{
    return &_mfDrawPositions;
}


MFUInt32 *SkeletonSkinningAlgorithmBase::editMFDrawIndex(void)
{
    editMField(DrawIndexFieldMask, _mfDrawIndex);

    return &_mfDrawIndex;
}

const MFUInt32 *SkeletonSkinningAlgorithmBase::getMFDrawIndex(void) const
{
    return &_mfDrawIndex;
}






/*------------------------------ access -----------------------------------*/

SizeT SkeletonSkinningAlgorithmBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DrawPositionsFieldMask & whichField))
    {
        returnValue += _mfDrawPositions.getBinSize();
    }
    if(FieldBits::NoField != (DrawIndexFieldMask & whichField))
    {
        returnValue += _mfDrawIndex.getBinSize();
    }

    return returnValue;
}

void SkeletonSkinningAlgorithmBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DrawPositionsFieldMask & whichField))
    {
        _mfDrawPositions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawIndexFieldMask & whichField))
    {
        _mfDrawIndex.copyToBin(pMem);
    }
}

void SkeletonSkinningAlgorithmBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DrawPositionsFieldMask & whichField))
    {
        editMField(DrawPositionsFieldMask, _mfDrawPositions);
        _mfDrawPositions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawIndexFieldMask & whichField))
    {
        editMField(DrawIndexFieldMask, _mfDrawIndex);
        _mfDrawIndex.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SkeletonSkinningAlgorithmTransitPtr SkeletonSkinningAlgorithmBase::createLocal(BitVector bFlags)
{
    SkeletonSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SkeletonSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SkeletonSkinningAlgorithmTransitPtr SkeletonSkinningAlgorithmBase::createDependent(BitVector bFlags)
{
    SkeletonSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SkeletonSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SkeletonSkinningAlgorithmTransitPtr SkeletonSkinningAlgorithmBase::create(void)
{
    SkeletonSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SkeletonSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

SkeletonSkinningAlgorithm *SkeletonSkinningAlgorithmBase::createEmptyLocal(BitVector bFlags)
{
    SkeletonSkinningAlgorithm *returnValue;

    newPtr<SkeletonSkinningAlgorithm>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SkeletonSkinningAlgorithm *SkeletonSkinningAlgorithmBase::createEmpty(void)
{
    SkeletonSkinningAlgorithm *returnValue;

    newPtr<SkeletonSkinningAlgorithm>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SkeletonSkinningAlgorithmBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SkeletonSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonSkinningAlgorithm *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonSkinningAlgorithmBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SkeletonSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonSkinningAlgorithm *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonSkinningAlgorithmBase::shallowCopy(void) const
{
    SkeletonSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SkeletonSkinningAlgorithm *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SkeletonSkinningAlgorithmBase::SkeletonSkinningAlgorithmBase(void) :
    Inherited(),
    _mfDrawPositions          (),
    _mfDrawIndex              ()
{
}

SkeletonSkinningAlgorithmBase::SkeletonSkinningAlgorithmBase(const SkeletonSkinningAlgorithmBase &source) :
    Inherited(source),
    _mfDrawPositions          (source._mfDrawPositions          ),
    _mfDrawIndex              (source._mfDrawIndex              )
{
}


/*-------------------------- destructors ----------------------------------*/

SkeletonSkinningAlgorithmBase::~SkeletonSkinningAlgorithmBase(void)
{
}


GetFieldHandlePtr SkeletonSkinningAlgorithmBase::getHandleDrawPositions   (void) const
{
    MFPnt3f::GetHandlePtr returnValue(
        new  MFPnt3f::GetHandle(
             &_mfDrawPositions,
             this->getType().getFieldDesc(DrawPositionsFieldId),
             const_cast<SkeletonSkinningAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonSkinningAlgorithmBase::editHandleDrawPositions  (void)
{
    MFPnt3f::EditHandlePtr returnValue(
        new  MFPnt3f::EditHandle(
             &_mfDrawPositions,
             this->getType().getFieldDesc(DrawPositionsFieldId),
             this));


    editMField(DrawPositionsFieldMask, _mfDrawPositions);

    return returnValue;
}

GetFieldHandlePtr SkeletonSkinningAlgorithmBase::getHandleDrawIndex       (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfDrawIndex,
             this->getType().getFieldDesc(DrawIndexFieldId),
             const_cast<SkeletonSkinningAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonSkinningAlgorithmBase::editHandleDrawIndex      (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfDrawIndex,
             this->getType().getFieldDesc(DrawIndexFieldId),
             this));


    editMField(DrawIndexFieldMask, _mfDrawIndex);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SkeletonSkinningAlgorithmBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SkeletonSkinningAlgorithm *pThis = static_cast<SkeletonSkinningAlgorithm *>(this);

    pThis->execSync(static_cast<SkeletonSkinningAlgorithm *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SkeletonSkinningAlgorithmBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SkeletonSkinningAlgorithm *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SkeletonSkinningAlgorithm *>(pRefAspect),
                  dynamic_cast<const SkeletonSkinningAlgorithm *>(this));

    return returnValue;
}
#endif

void SkeletonSkinningAlgorithmBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfDrawPositions.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfDrawIndex.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
