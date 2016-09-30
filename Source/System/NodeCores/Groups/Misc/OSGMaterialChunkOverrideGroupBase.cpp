/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: Johannes Brunen                                                  *
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
 **     class MaterialChunkOverrideGroup!
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



#include "OSGMaterial.h"                // Material Class

#include "OSGMaterialChunkOverrideGroupBase.h"
#include "OSGMaterialChunkOverrideGroup.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MaterialChunkOverrideGroup
    MaterialChunkOverrideGroup is a ChunkOverrideGroup  node that takes a
    material  instead of individual chunks. If the material can't be finalized
    to a ChunkMaterial the class behaves exactly as the MaterialGroup class,
    i.e. overwriting the complete material instead of individual chunks.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Material *      MaterialChunkOverrideGroupBase::_sfMaterial
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<MaterialChunkOverrideGroup *, nsOSG>::_type(
    "MaterialChunkOverrideGroupPtr", 
    "ChunkOverrideGroupPtr", 
    MaterialChunkOverrideGroup::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(MaterialChunkOverrideGroup *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MaterialChunkOverrideGroup *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MaterialChunkOverrideGroup *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MaterialChunkOverrideGroupBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecMaterialPtr::Description(
        SFUnrecMaterialPtr::getClassType(),
        "material",
        "",
        MaterialFieldId, MaterialFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MaterialChunkOverrideGroup::editHandleMaterial),
        static_cast<FieldGetMethodSig >(&MaterialChunkOverrideGroup::getHandleMaterial));

    oType.addInitialDesc(pDesc);
}


MaterialChunkOverrideGroupBase::TypeObject MaterialChunkOverrideGroupBase::_type(
    MaterialChunkOverrideGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&MaterialChunkOverrideGroupBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&MaterialChunkOverrideGroup::initMethod),
    reinterpret_cast<ExitContainerF>(&MaterialChunkOverrideGroup::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&MaterialChunkOverrideGroup::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"MaterialChunkOverrideGroup\"\n"
    "   parent=\"ChunkOverrideGroup\"\n"
    "   library=\"Group\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"true\"\n"
    "   authors=\"Johannes Brunen\"\n"
    "   docGroupBase=\"GrpGroupMisc\"\n"
    "   >\n"
    "  MaterialChunkOverrideGroup is a ChunkOverrideGroup  node that takes a\n"
    "  material  instead of individual chunks. If the material can't be finalized\n"
    "  to a ChunkMaterial the class behaves exactly as the MaterialGroup class,\n"
    "  i.e. overwriting the complete material instead of individual chunks.\n"
    "\n"
    "  <Field\n"
    "\t name=\"material\"\n"
    "\t type=\"Material\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "MaterialChunkOverrideGroup is a ChunkOverrideGroup  node that takes a\n"
    "material  instead of individual chunks. If the material can't be finalized\n"
    "to a ChunkMaterial the class behaves exactly as the MaterialGroup class,\n"
    "i.e. overwriting the complete material instead of individual chunks.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MaterialChunkOverrideGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &MaterialChunkOverrideGroupBase::getType(void) const
{
    return _type;
}

UInt32 MaterialChunkOverrideGroupBase::getContainerSize(void) const
{
    return sizeof(MaterialChunkOverrideGroup);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MaterialChunkOverrideGroup::_sfMaterial field.
const SFUnrecMaterialPtr *MaterialChunkOverrideGroupBase::getSFMaterial(void) const
{
    return &_sfMaterial;
}

SFUnrecMaterialPtr  *MaterialChunkOverrideGroupBase::editSFMaterial       (void)
{
    editSField(MaterialFieldMask);

    return &_sfMaterial;
}

//! Get the value of the MaterialChunkOverrideGroup::_sfMaterial field.
Material * MaterialChunkOverrideGroupBase::getMaterial(void) const
{
    return _sfMaterial.getValue();
}

//! Set the value of the MaterialChunkOverrideGroup::_sfMaterial field.
void MaterialChunkOverrideGroupBase::setMaterial(Material * const value)
{
    editSField(MaterialFieldMask);

    _sfMaterial.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT MaterialChunkOverrideGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }

    return returnValue;
}

void MaterialChunkOverrideGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }
}

void MaterialChunkOverrideGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        editSField(MaterialFieldMask);
        _sfMaterial.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MaterialChunkOverrideGroupTransitPtr MaterialChunkOverrideGroupBase::createLocal(BitVector bFlags)
{
    MaterialChunkOverrideGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MaterialChunkOverrideGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MaterialChunkOverrideGroupTransitPtr MaterialChunkOverrideGroupBase::createDependent(BitVector bFlags)
{
    MaterialChunkOverrideGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MaterialChunkOverrideGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MaterialChunkOverrideGroupTransitPtr MaterialChunkOverrideGroupBase::create(void)
{
    MaterialChunkOverrideGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MaterialChunkOverrideGroup>(tmpPtr);
    }

    return fc;
}

MaterialChunkOverrideGroup *MaterialChunkOverrideGroupBase::createEmptyLocal(BitVector bFlags)
{
    MaterialChunkOverrideGroup *returnValue;

    newPtr<MaterialChunkOverrideGroup>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MaterialChunkOverrideGroup *MaterialChunkOverrideGroupBase::createEmpty(void)
{
    MaterialChunkOverrideGroup *returnValue;

    newPtr<MaterialChunkOverrideGroup>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MaterialChunkOverrideGroupBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MaterialChunkOverrideGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MaterialChunkOverrideGroup *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MaterialChunkOverrideGroupBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MaterialChunkOverrideGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MaterialChunkOverrideGroup *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MaterialChunkOverrideGroupBase::shallowCopy(void) const
{
    MaterialChunkOverrideGroup *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MaterialChunkOverrideGroup *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MaterialChunkOverrideGroupBase::MaterialChunkOverrideGroupBase(void) :
    Inherited(),
    _sfMaterial               (NULL)
{
}

MaterialChunkOverrideGroupBase::MaterialChunkOverrideGroupBase(const MaterialChunkOverrideGroupBase &source) :
    Inherited(source),
    _sfMaterial               (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

MaterialChunkOverrideGroupBase::~MaterialChunkOverrideGroupBase(void)
{
}

void MaterialChunkOverrideGroupBase::onCreate(const MaterialChunkOverrideGroup *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        MaterialChunkOverrideGroup *pThis = static_cast<MaterialChunkOverrideGroup *>(this);

        pThis->setMaterial(source->getMaterial());
    }
}

GetFieldHandlePtr MaterialChunkOverrideGroupBase::getHandleMaterial        (void) const
{
    SFUnrecMaterialPtr::GetHandlePtr returnValue(
        new  SFUnrecMaterialPtr::GetHandle(
             &_sfMaterial,
             this->getType().getFieldDesc(MaterialFieldId),
             const_cast<MaterialChunkOverrideGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MaterialChunkOverrideGroupBase::editHandleMaterial       (void)
{
    SFUnrecMaterialPtr::EditHandlePtr returnValue(
        new  SFUnrecMaterialPtr::EditHandle(
             &_sfMaterial,
             this->getType().getFieldDesc(MaterialFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&MaterialChunkOverrideGroup::setMaterial,
                    static_cast<MaterialChunkOverrideGroup *>(this), _1));

    editSField(MaterialFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MaterialChunkOverrideGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MaterialChunkOverrideGroup *pThis = static_cast<MaterialChunkOverrideGroup *>(this);

    pThis->execSync(static_cast<MaterialChunkOverrideGroup *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MaterialChunkOverrideGroupBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MaterialChunkOverrideGroup *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MaterialChunkOverrideGroup *>(pRefAspect),
                  dynamic_cast<const MaterialChunkOverrideGroup *>(this));

    return returnValue;
}
#endif

void MaterialChunkOverrideGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<MaterialChunkOverrideGroup *>(this)->setMaterial(NULL);


}


OSG_END_NAMESPACE
