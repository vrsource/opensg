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
 **     class CalibrationPatternFilter!
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




#include "OSGCalibrationPatternFilterBase.h"
#include "OSGCalibrationPatternFilter.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CalibrationPatternFilter
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            CalibrationPatternFilterBase::_sfEnabled
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CalibrationPatternFilter *, nsOSG>::_type(
    "CalibrationPatternFilterPtr", 
    "AttachmentContainerPtr", 
    CalibrationPatternFilter::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CalibrationPatternFilter *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CalibrationPatternFilter *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CalibrationPatternFilter *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CalibrationPatternFilterBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enabled",
        "",
        EnabledFieldId, EnabledFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CalibrationPatternFilter::editHandleEnabled),
        static_cast<FieldGetMethodSig >(&CalibrationPatternFilter::getHandleEnabled));

    oType.addInitialDesc(pDesc);
}


CalibrationPatternFilterBase::TypeObject CalibrationPatternFilterBase::_type(
    CalibrationPatternFilterBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    reinterpret_cast<InitContainerF>(&CalibrationPatternFilter::initMethod),
    reinterpret_cast<ExitContainerF>(&CalibrationPatternFilter::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&CalibrationPatternFilter::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CalibrationPatternFilter\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"EffectGroups\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    docGroupBase=\"GrpEffectsGroupsDisplayFilter\"\n"
    "    >   \n"
    "  <Field\n"
    "\t name=\"enabled\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"true\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CalibrationPatternFilterBase::getType(void)
{
    return _type;
}

const FieldContainerType &CalibrationPatternFilterBase::getType(void) const
{
    return _type;
}

UInt32 CalibrationPatternFilterBase::getContainerSize(void) const
{
    return sizeof(CalibrationPatternFilter);
}

/*------------------------- decorator get ------------------------------*/


SFBool *CalibrationPatternFilterBase::editSFEnabled(void)
{
    editSField(EnabledFieldMask);

    return &_sfEnabled;
}

const SFBool *CalibrationPatternFilterBase::getSFEnabled(void) const
{
    return &_sfEnabled;
}






/*------------------------------ access -----------------------------------*/

SizeT CalibrationPatternFilterBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        returnValue += _sfEnabled.getBinSize();
    }

    return returnValue;
}

void CalibrationPatternFilterBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyToBin(pMem);
    }
}

void CalibrationPatternFilterBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        editSField(EnabledFieldMask);
        _sfEnabled.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

CalibrationPatternFilterBase::CalibrationPatternFilterBase(void) :
    Inherited(),
    _sfEnabled                (bool(true))
{
}

CalibrationPatternFilterBase::CalibrationPatternFilterBase(const CalibrationPatternFilterBase &source) :
    Inherited(source),
    _sfEnabled                (source._sfEnabled                )
{
}


/*-------------------------- destructors ----------------------------------*/

CalibrationPatternFilterBase::~CalibrationPatternFilterBase(void)
{
}


GetFieldHandlePtr CalibrationPatternFilterBase::getHandleEnabled         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnabled,
             this->getType().getFieldDesc(EnabledFieldId),
             const_cast<CalibrationPatternFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CalibrationPatternFilterBase::editHandleEnabled        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnabled,
             this->getType().getFieldDesc(EnabledFieldId),
             this));


    editSField(EnabledFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CalibrationPatternFilterBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CalibrationPatternFilter *pThis = static_cast<CalibrationPatternFilter *>(this);

    pThis->execSync(static_cast<CalibrationPatternFilter *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void CalibrationPatternFilterBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
