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
 **     class Foreground!
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




#include "OSGForegroundBase.h"
#include "OSGForeground.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Foreground
    Foreground is the base class for all foreground rendering.  See \ref
    PageSystemWindowForegrounds for a description.

    \ext

    To create a new Foreground the method that has be overridden is
    draw(DrawActionBase * action, Viewport * port);. It can directly call OpenGL
    commands, but should restore the state after it's done.

    \endext
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            ForegroundBase::_sfActive
    Activate the grabber.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<Foreground *, nsOSG>::_type(
    "ForegroundPtr", 
    "AttachmentContainerPtr", 
    Foreground::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(Foreground *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Foreground *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Foreground *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "active",
        "Activate the grabber.\n",
        ActiveFieldId, ActiveFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Foreground::editHandleActive),
        static_cast<FieldGetMethodSig >(&Foreground::getHandleActive));

    oType.addInitialDesc(pDesc);
}


ForegroundBase::TypeObject ForegroundBase::_type(
    ForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    reinterpret_cast<InitContainerF>(&Foreground::initMethod),
    reinterpret_cast<ExitContainerF>(&Foreground::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&Foreground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"Foreground\"\n"
    "   parent=\"AttachmentContainer\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpSystemWindow\"\n"
    "   >\n"
    "\n"
    "  Foreground is the base class for all foreground rendering.  See \\ref\n"
    "  PageSystemWindowForegrounds for a description.\n"
    "\n"
    "  \\ext\n"
    "\n"
    "  To create a new Foreground the method that has be overridden is\n"
    "  draw(DrawActionBase * action, Viewport * port);. It can directly call OpenGL\n"
    "  commands, but should restore the state after it's done.\n"
    "  \n"
    "  \\endext\n"
    "\n"
    "  <Field\n"
    "\t name=\"active\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tActivate the grabber.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Foreground is the base class for all foreground rendering.  See \\ref\n"
    "PageSystemWindowForegrounds for a description.\n"
    "\n"
    "\\ext\n"
    "\n"
    "To create a new Foreground the method that has be overridden is\n"
    "draw(DrawActionBase * action, Viewport * port);. It can directly call OpenGL\n"
    "commands, but should restore the state after it's done.\n"
    "\n"
    "\\endext\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &ForegroundBase::getType(void) const
{
    return _type;
}

UInt32 ForegroundBase::getContainerSize(void) const
{
    return sizeof(Foreground);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ForegroundBase::editSFActive(void)
{
    editSField(ActiveFieldMask);

    return &_sfActive;
}

const SFBool *ForegroundBase::getSFActive(void) const
{
    return &_sfActive;
}






/*------------------------------ access -----------------------------------*/

SizeT ForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        returnValue += _sfActive.getBinSize();
    }

    return returnValue;
}

void ForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyToBin(pMem);
    }
}

void ForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        editSField(ActiveFieldMask);
        _sfActive.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ForegroundBase::ForegroundBase(void) :
    Inherited(),
    _sfActive                 (bool(true))
{
}

ForegroundBase::ForegroundBase(const ForegroundBase &source) :
    Inherited(source),
    _sfActive                 (source._sfActive                 )
{
}


/*-------------------------- destructors ----------------------------------*/

ForegroundBase::~ForegroundBase(void)
{
}


GetFieldHandlePtr ForegroundBase::getHandleActive          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfActive,
             this->getType().getFieldDesc(ActiveFieldId),
             const_cast<ForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ForegroundBase::editHandleActive         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfActive,
             this->getType().getFieldDesc(ActiveFieldId),
             this));


    editSField(ActiveFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Foreground *pThis = static_cast<Foreground *>(this);

    pThis->execSync(static_cast<Foreground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void ForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
