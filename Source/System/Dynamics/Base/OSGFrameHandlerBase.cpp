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
 **     class FrameHandler!
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




#include "OSGFrameHandlerBase.h"
#include "OSGFrameHandler.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FrameHandler
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt64          FrameHandlerBase::_sfFrameCount
    
*/

/*! \var Time            FrameHandlerBase::_sfStartTime
    
*/

/*! \var Time            FrameHandlerBase::_sfLastTime
    
*/

/*! \var Time            FrameHandlerBase::_sfCurrTime
    
*/

/*! \var Time            FrameHandlerBase::_sfTimeStamp
    
*/

/*! \var Time            FrameHandlerBase::_sfTimeScale
    
*/

/*! \var Time            FrameHandlerBase::_sfConstantTimeStep
    
*/

/*! \var bool            FrameHandlerBase::_sfConstantTime
    
*/

/*! \var bool            FrameHandlerBase::_sfPaused
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<FrameHandler *, nsOSG>::_type(
    "FrameHandlerPtr", 
    "AttachmentContainerPtr", 
    FrameHandler::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(FrameHandler *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FrameHandler *,
                           nsOSG)


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FrameHandlerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt64::Description(
        SFUInt64::getClassType(),
        "frameCount",
        "",
        FrameCountFieldId, FrameCountFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandleFrameCount),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandleFrameCount));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "startTime",
        "",
        StartTimeFieldId, StartTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandleStartTime),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandleStartTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "lastTime",
        "",
        LastTimeFieldId, LastTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandleLastTime),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandleLastTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "currTime",
        "",
        CurrTimeFieldId, CurrTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandleCurrTime),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandleCurrTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "timeStamp",
        "",
        TimeStampFieldId, TimeStampFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandleTimeStamp),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandleTimeStamp));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "timeScale",
        "",
        TimeScaleFieldId, TimeScaleFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandleTimeScale),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandleTimeScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "constantTimeStep",
        "",
        ConstantTimeStepFieldId, ConstantTimeStepFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandleConstantTimeStep),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandleConstantTimeStep));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "constantTime",
        "",
        ConstantTimeFieldId, ConstantTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandleConstantTime),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandleConstantTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "paused",
        "",
        PausedFieldId, PausedFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameHandler::editHandlePaused),
        static_cast<FieldGetMethodSig >(&FrameHandler::getHandlePaused));

    oType.addInitialDesc(pDesc);
}


FrameHandlerBase::TypeObject FrameHandlerBase::_type(
    FrameHandlerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&FrameHandlerBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&FrameHandler::initMethod),
    reinterpret_cast<ExitContainerF>(&FrameHandler::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&FrameHandler::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"FrameHandler\"\n"
    "   parent=\"AttachmentContainer\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"single\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"false\"\n"
    "   isBundle=\"true\"\n"
    "   parentFields=\"none\"\n"
    "   docGroupBase=\"GrpDynamicsBase\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"frameCount\"\n"
    "\t type=\"UInt64\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"0\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"startTime\"\n"
    "\t type=\"Time\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "        defaultValue=\"-1.0\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"lastTime\"\n"
    "\t type=\"Time\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"0.0\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"currTime\"\n"
    "\t type=\"Time\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"0.0\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"timeStamp\"\n"
    "\t type=\"Time\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"0.0\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"timeScale\"\n"
    "\t type=\"Time\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"1.0\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"constantTimeStep\"\n"
    "\t type=\"Time\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"0.0\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"constantTime\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"false\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"paused\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"false\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FrameHandlerBase::getType(void)
{
    return _type;
}

const FieldContainerType &FrameHandlerBase::getType(void) const
{
    return _type;
}

UInt32 FrameHandlerBase::getContainerSize(void) const
{
    return sizeof(FrameHandler);
}

/*------------------------- decorator get ------------------------------*/


SFUInt64 *FrameHandlerBase::editSFFrameCount(void)
{
    editSField(FrameCountFieldMask);

    return &_sfFrameCount;
}

const SFUInt64 *FrameHandlerBase::getSFFrameCount(void) const
{
    return &_sfFrameCount;
}


SFTime *FrameHandlerBase::editSFStartTime(void)
{
    editSField(StartTimeFieldMask);

    return &_sfStartTime;
}

const SFTime *FrameHandlerBase::getSFStartTime(void) const
{
    return &_sfStartTime;
}


SFTime *FrameHandlerBase::editSFLastTime(void)
{
    editSField(LastTimeFieldMask);

    return &_sfLastTime;
}

const SFTime *FrameHandlerBase::getSFLastTime(void) const
{
    return &_sfLastTime;
}


SFTime *FrameHandlerBase::editSFCurrTime(void)
{
    editSField(CurrTimeFieldMask);

    return &_sfCurrTime;
}

const SFTime *FrameHandlerBase::getSFCurrTime(void) const
{
    return &_sfCurrTime;
}


SFTime *FrameHandlerBase::editSFTimeStamp(void)
{
    editSField(TimeStampFieldMask);

    return &_sfTimeStamp;
}

const SFTime *FrameHandlerBase::getSFTimeStamp(void) const
{
    return &_sfTimeStamp;
}


SFTime *FrameHandlerBase::editSFTimeScale(void)
{
    editSField(TimeScaleFieldMask);

    return &_sfTimeScale;
}

const SFTime *FrameHandlerBase::getSFTimeScale(void) const
{
    return &_sfTimeScale;
}


SFTime *FrameHandlerBase::editSFConstantTimeStep(void)
{
    editSField(ConstantTimeStepFieldMask);

    return &_sfConstantTimeStep;
}

const SFTime *FrameHandlerBase::getSFConstantTimeStep(void) const
{
    return &_sfConstantTimeStep;
}


SFBool *FrameHandlerBase::editSFConstantTime(void)
{
    editSField(ConstantTimeFieldMask);

    return &_sfConstantTime;
}

const SFBool *FrameHandlerBase::getSFConstantTime(void) const
{
    return &_sfConstantTime;
}


SFBool *FrameHandlerBase::editSFPaused(void)
{
    editSField(PausedFieldMask);

    return &_sfPaused;
}

const SFBool *FrameHandlerBase::getSFPaused(void) const
{
    return &_sfPaused;
}






/*------------------------------ access -----------------------------------*/

SizeT FrameHandlerBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        returnValue += _sfFrameCount.getBinSize();
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        returnValue += _sfStartTime.getBinSize();
    }
    if(FieldBits::NoField != (LastTimeFieldMask & whichField))
    {
        returnValue += _sfLastTime.getBinSize();
    }
    if(FieldBits::NoField != (CurrTimeFieldMask & whichField))
    {
        returnValue += _sfCurrTime.getBinSize();
    }
    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        returnValue += _sfTimeStamp.getBinSize();
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        returnValue += _sfTimeScale.getBinSize();
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        returnValue += _sfConstantTimeStep.getBinSize();
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        returnValue += _sfConstantTime.getBinSize();
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        returnValue += _sfPaused.getBinSize();
    }

    return returnValue;
}

void FrameHandlerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        _sfFrameCount.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        _sfStartTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LastTimeFieldMask & whichField))
    {
        _sfLastTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CurrTimeFieldMask & whichField))
    {
        _sfCurrTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        _sfTimeStamp.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        _sfTimeScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        _sfConstantTimeStep.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        _sfConstantTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        _sfPaused.copyToBin(pMem);
    }
}

void FrameHandlerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        editSField(FrameCountFieldMask);
        _sfFrameCount.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        editSField(StartTimeFieldMask);
        _sfStartTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LastTimeFieldMask & whichField))
    {
        editSField(LastTimeFieldMask);
        _sfLastTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CurrTimeFieldMask & whichField))
    {
        editSField(CurrTimeFieldMask);
        _sfCurrTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        editSField(TimeStampFieldMask);
        _sfTimeStamp.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        editSField(TimeScaleFieldMask);
        _sfTimeScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        editSField(ConstantTimeStepFieldMask);
        _sfConstantTimeStep.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        editSField(ConstantTimeFieldMask);
        _sfConstantTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        editSField(PausedFieldMask);
        _sfPaused.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FrameHandlerTransitPtr FrameHandlerBase::createLocal(BitVector bFlags)
{
    FrameHandlerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FrameHandler>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FrameHandlerTransitPtr FrameHandlerBase::createDependent(BitVector bFlags)
{
    FrameHandlerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FrameHandler>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FrameHandlerTransitPtr FrameHandlerBase::create(void)
{
    return createLocal();
}

FrameHandler *FrameHandlerBase::createEmptyLocal(BitVector bFlags)
{
    FrameHandler *returnValue;

    newPtr<FrameHandler>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FrameHandler *FrameHandlerBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr FrameHandlerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FrameHandler *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FrameHandler *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FrameHandlerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FrameHandler *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FrameHandler *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FrameHandlerBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

FrameHandlerBase::FrameHandlerBase(void) :
    Inherited(),
    _sfFrameCount             (UInt64(0)),
    _sfStartTime              (Time(-1.0)),
    _sfLastTime               (Time(0.0)),
    _sfCurrTime               (Time(0.0)),
    _sfTimeStamp              (Time(0.0)),
    _sfTimeScale              (Time(1.0)),
    _sfConstantTimeStep       (Time(0.0)),
    _sfConstantTime           (bool(false)),
    _sfPaused                 (bool(false))
{
}

FrameHandlerBase::FrameHandlerBase(const FrameHandlerBase &source) :
    Inherited(source),
    _sfFrameCount             (source._sfFrameCount             ),
    _sfStartTime              (source._sfStartTime              ),
    _sfLastTime               (source._sfLastTime               ),
    _sfCurrTime               (source._sfCurrTime               ),
    _sfTimeStamp              (source._sfTimeStamp              ),
    _sfTimeScale              (source._sfTimeScale              ),
    _sfConstantTimeStep       (source._sfConstantTimeStep       ),
    _sfConstantTime           (source._sfConstantTime           ),
    _sfPaused                 (source._sfPaused                 )
{
}


/*-------------------------- destructors ----------------------------------*/

FrameHandlerBase::~FrameHandlerBase(void)
{
}


GetFieldHandlePtr FrameHandlerBase::getHandleFrameCount      (void) const
{
    SFUInt64::GetHandlePtr returnValue(
        new  SFUInt64::GetHandle(
             &_sfFrameCount,
             this->getType().getFieldDesc(FrameCountFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandleFrameCount     (void)
{
    SFUInt64::EditHandlePtr returnValue(
        new  SFUInt64::EditHandle(
             &_sfFrameCount,
             this->getType().getFieldDesc(FrameCountFieldId),
             this));


    editSField(FrameCountFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameHandlerBase::getHandleStartTime       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfStartTime,
             this->getType().getFieldDesc(StartTimeFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandleStartTime      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfStartTime,
             this->getType().getFieldDesc(StartTimeFieldId),
             this));


    editSField(StartTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameHandlerBase::getHandleLastTime        (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfLastTime,
             this->getType().getFieldDesc(LastTimeFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandleLastTime       (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfLastTime,
             this->getType().getFieldDesc(LastTimeFieldId),
             this));


    editSField(LastTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameHandlerBase::getHandleCurrTime        (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfCurrTime,
             this->getType().getFieldDesc(CurrTimeFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandleCurrTime       (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfCurrTime,
             this->getType().getFieldDesc(CurrTimeFieldId),
             this));


    editSField(CurrTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameHandlerBase::getHandleTimeStamp       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfTimeStamp,
             this->getType().getFieldDesc(TimeStampFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandleTimeStamp      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfTimeStamp,
             this->getType().getFieldDesc(TimeStampFieldId),
             this));


    editSField(TimeStampFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameHandlerBase::getHandleTimeScale       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfTimeScale,
             this->getType().getFieldDesc(TimeScaleFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandleTimeScale      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfTimeScale,
             this->getType().getFieldDesc(TimeScaleFieldId),
             this));


    editSField(TimeScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameHandlerBase::getHandleConstantTimeStep (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfConstantTimeStep,
             this->getType().getFieldDesc(ConstantTimeStepFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandleConstantTimeStep(void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfConstantTimeStep,
             this->getType().getFieldDesc(ConstantTimeStepFieldId),
             this));


    editSField(ConstantTimeStepFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameHandlerBase::getHandleConstantTime    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfConstantTime,
             this->getType().getFieldDesc(ConstantTimeFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandleConstantTime   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfConstantTime,
             this->getType().getFieldDesc(ConstantTimeFieldId),
             this));


    editSField(ConstantTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameHandlerBase::getHandlePaused          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPaused,
             this->getType().getFieldDesc(PausedFieldId),
             const_cast<FrameHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameHandlerBase::editHandlePaused         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPaused,
             this->getType().getFieldDesc(PausedFieldId),
             this));


    editSField(PausedFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FrameHandlerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FrameHandler *pThis = static_cast<FrameHandler *>(this);

    pThis->execSync(static_cast<FrameHandler *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FrameHandlerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FrameHandler *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FrameHandler *>(pRefAspect),
                  dynamic_cast<const FrameHandler *>(this));

    return returnValue;
}
#endif

void FrameHandlerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
