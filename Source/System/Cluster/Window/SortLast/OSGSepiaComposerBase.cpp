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
 **     class SepiaComposer!
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




#include "OSGSepiaComposerBase.h"
#include "OSGSepiaComposer.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SepiaComposer
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<SepiaComposer *, nsOSG>::_type(
    "SepiaComposerPtr", 
    "ImageComposerPtr", 
    SepiaComposer::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(SepiaComposer *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SepiaComposerBase::classDescInserter(TypeObject &oType)
{
}


SepiaComposerBase::TypeObject SepiaComposerBase::_type(
    SepiaComposerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&SepiaComposerBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&SepiaComposer::initMethod),
    reinterpret_cast<ExitContainerF>(&SepiaComposer::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&SepiaComposer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SepiaComposer\"\n"
    "   parent=\"ImageComposer\"\n"
    "   library=\"Cluster\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpClusterWindow\"\n"
    "   >\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SepiaComposerBase::getType(void)
{
    return _type;
}

const FieldContainerType &SepiaComposerBase::getType(void) const
{
    return _type;
}

UInt32 SepiaComposerBase::getContainerSize(void) const
{
    return sizeof(SepiaComposer);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT SepiaComposerBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void SepiaComposerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void SepiaComposerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
SepiaComposerTransitPtr SepiaComposerBase::createLocal(BitVector bFlags)
{
    SepiaComposerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SepiaComposer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SepiaComposerTransitPtr SepiaComposerBase::createDependent(BitVector bFlags)
{
    SepiaComposerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SepiaComposer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SepiaComposerTransitPtr SepiaComposerBase::create(void)
{
    SepiaComposerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SepiaComposer>(tmpPtr);
    }

    return fc;
}

SepiaComposer *SepiaComposerBase::createEmptyLocal(BitVector bFlags)
{
    SepiaComposer *returnValue;

    newPtr<SepiaComposer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SepiaComposer *SepiaComposerBase::createEmpty(void)
{
    SepiaComposer *returnValue;

    newPtr<SepiaComposer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SepiaComposerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SepiaComposer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SepiaComposer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SepiaComposerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SepiaComposer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SepiaComposer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SepiaComposerBase::shallowCopy(void) const
{
    SepiaComposer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SepiaComposer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SepiaComposerBase::SepiaComposerBase(void) :
    Inherited()
{
}

SepiaComposerBase::SepiaComposerBase(const SepiaComposerBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

SepiaComposerBase::~SepiaComposerBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void SepiaComposerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SepiaComposer *pThis = static_cast<SepiaComposer *>(this);

    pThis->execSync(static_cast<SepiaComposer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SepiaComposerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SepiaComposer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SepiaComposer *>(pRefAspect),
                  dynamic_cast<const SepiaComposer *>(this));

    return returnValue;
}
#endif

void SepiaComposerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
