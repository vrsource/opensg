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
 **     class Geometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOMETRYINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGGeoIntegralProperty.h> // Types Class
#include <OSGGeoIntegralProperty.h> // Lengths Class
#include <OSGGeoVectorProperty.h> // Properties Class
#include <OSGGeoIntegralProperty.h> // PropIndices Class

#include "OSGGeometryBase.h"
#include "OSGGeometry.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Geometry
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GeoIntegralPropertyPtr GeometryBase::_sfTypes
    The types property contains the primitive's types. Legal values are 
    everything that can be passed to glBegin(). There have to be as many 
    types as lengths.
*/

/*! \var GeoIntegralPropertyPtr GeometryBase::_sfLengths
    The lengths property contains the number of vertices to use for the 
    corresponding primitive. There have to be as many  lengths as types.
*/

/*! \var GeoVectorPropertyPtr GeometryBase::_mfProperties
    The attributes used to render the geometry. The order is based on the 
    the one given in ARB_vertex_program.
*/

/*! \var GeoIntegralPropertyPtr GeometryBase::_mfPropIndices
    The indices property contains the index data. See \ref 
    PageSystemGeoIndexing for a description of the indexing options.
*/

/*! \var Int32           GeometryBase::_sfClassicGLId
    The dlist id for the classic rendering mode, if used.
*/

/*! \var Int32           GeometryBase::_sfAttGLId
    The dlist id for the attribute-based rendering mode, if used.
*/


void GeometryBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGeoIntegralPropertyPtr::Description(
        SFGeoIntegralPropertyPtr::getClassType(),
        "types",
        "The types property contains the primitive's types. Legal values are \n"
        "everything that can be passed to glBegin(). There have to be as many \n"
        "types as lengths.\n",
        TypesFieldId, TypesFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&GeometryBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&GeometryBase::getSFTypes));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGeoIntegralPropertyPtr::Description(
        SFGeoIntegralPropertyPtr::getClassType(),
        "lengths",
        "The lengths property contains the number of vertices to use for the \n"
        "corresponding primitive. There have to be as many  lengths as types.\n",
        LengthsFieldId, LengthsFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&GeometryBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&GeometryBase::getSFLengths));

    oType.addInitialDesc(pDesc);

    pDesc = new MFGeoVectorPropertyPtr::Description(
        MFGeoVectorPropertyPtr::getClassType(),
        "properties",
        "The attributes used to render the geometry. The order is based on the \n"
        "the one given in ARB_vertex_program.\n",
        PropertiesFieldId, PropertiesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&GeometryBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&GeometryBase::getMFProperties));

    oType.addInitialDesc(pDesc);

    pDesc = new MFGeoIntegralPropertyPtr::Description(
        MFGeoIntegralPropertyPtr::getClassType(),
        "propIndices",
        "The indices property contains the index data. See \\ref \n"
        "PageSystemGeoIndexing for a description of the indexing options.\n",
        PropIndicesFieldId, PropIndicesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&GeometryBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&GeometryBase::getMFPropIndices));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFInt32 *(GeometryBase::*GetSFClassicGLIdF)(void) const;

    GetSFClassicGLIdF GetSFClassicGLId = &GeometryBase::getSFClassicGLId;
#endif

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "classicGLId",
        "The dlist id for the classic rendering mode, if used.\n",
        ClassicGLIdFieldId, ClassicGLIdFieldMask,
        true,
        (Field::FClusterLocal),
        reinterpret_cast<FieldEditMethodSig>(&GeometryBase::editSFClassicGLId),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFClassicGLId));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeometryBase::getSFClassicGLId));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFInt32 *(GeometryBase::*GetSFAttGLIdF)(void) const;

    GetSFAttGLIdF GetSFAttGLId = &GeometryBase::getSFAttGLId;
#endif

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "attGLId",
        "The dlist id for the attribute-based rendering mode, if used.\n",
        AttGLIdFieldId, AttGLIdFieldMask,
        true,
        (Field::FClusterLocal),
        reinterpret_cast<FieldEditMethodSig>(&GeometryBase::editSFAttGLId),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAttGLId));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeometryBase::getSFAttGLId));
#endif

    oType.addInitialDesc(pDesc);
}


GeometryBase::TypeObject GeometryBase::_type(
    GeometryBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GeometryBase::createEmpty,
    Geometry::initMethod,
    (InitalInsertDescFunc) &GeometryBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Geometry\"\n"
    "\tparent=\"MaterialDrawable\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"types\"\n"
    "\t\ttype=\"GeoIntegralPropertyPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "\t>\n"
    "        The types property contains the primitive's types. Legal values are \n"
    "        everything that can be passed to glBegin(). There have to be as many \n"
    "        types as lengths.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lengths\"\n"
    "\t\ttype=\"GeoIntegralPropertyPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "\t>\n"
    "        The lengths property contains the number of vertices to use for the \n"
    "        corresponding primitive. There have to be as many  lengths as types.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"properties\"\n"
    "\t\ttype=\"GeoVectorPropertyPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "        checkNilPtr=\"false\"\n"
    "\t>\n"
    "        The attributes used to render the geometry. The order is based on the \n"
    "        the one given in ARB_vertex_program.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"propIndices\"\n"
    "\t\ttype=\"GeoIntegralPropertyPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        linkMParent=\"true\"\n"
    "        checkNilPtr=\"false\"\n"
    "\t>\n"
    "        The indices property contains the index data. See \\ref \n"
    "        PageSystemGeoIndexing for a description of the indexing options.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"classicGLId\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tfieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tThe dlist id for the classic rendering mode, if used.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"attGLId\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tfieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tThe dlist id for the attribute-based rendering mode, if used.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeometryBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeometryBase::getType(void) const
{
    return _type;
}

UInt32 GeometryBase::getContainerSize(void) const
{
    return sizeof(Geometry);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Geometry::_sfTypes field.
const SFGeoIntegralPropertyPtr *GeometryBase::getSFTypes(void) const
{
    return &_sfTypes;
}

//! Get the Geometry::_sfLengths field.
const SFGeoIntegralPropertyPtr *GeometryBase::getSFLengths(void) const
{
    return &_sfLengths;
}

//! Get the Geometry::_mfProperties field.
const MFGeoVectorPropertyPtr *GeometryBase::getMFProperties(void) const
{
    return &_mfProperties;
}

//! Get the Geometry::_mfPropIndices field.
const MFGeoIntegralPropertyPtr *GeometryBase::getMFPropIndices(void) const
{
    return &_mfPropIndices;
}

SFInt32 *GeometryBase::editSFClassicGLId(void)
{
    editSField(ClassicGLIdFieldMask);

    return &_sfClassicGLId;
}

const SFInt32 *GeometryBase::getSFClassicGLId(void) const
{
    return &_sfClassicGLId;
}

#ifdef OSG_1_COMPAT
SFInt32             *GeometryBase::getSFClassicGLId    (void)
{
    return this->editSFClassicGLId    ();
}
#endif

SFInt32 *GeometryBase::editSFAttGLId(void)
{
    editSField(AttGLIdFieldMask);

    return &_sfAttGLId;
}

const SFInt32 *GeometryBase::getSFAttGLId(void) const
{
    return &_sfAttGLId;
}

#ifdef OSG_1_COMPAT
SFInt32             *GeometryBase::getSFAttGLId        (void)
{
    return this->editSFAttGLId        ();
}
#endif


void GeometryBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == TypesFieldId)
    {
        static_cast<Geometry *>(this)->setTypes(
            cast_dynamic<GeoIntegralPropertyPtr>(pNewElement));
    }
    if(uiFieldId == LengthsFieldId)
    {
        static_cast<Geometry *>(this)->setLengths(
            cast_dynamic<GeoIntegralPropertyPtr>(pNewElement));
    }
    if(uiFieldId == PropertiesFieldId)
    {
        static_cast<Geometry *>(this)->pushToProperties(
            cast_dynamic<GeoVectorPropertyPtr>(pNewElement));
    }
    if(uiFieldId == PropIndicesFieldId)
    {
        static_cast<Geometry *>(this)->pushToPropIndices(
            cast_dynamic<GeoIntegralPropertyPtr>(pNewElement));
    }
}

void GeometryBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == PropertiesFieldId)
    {
        static_cast<Geometry *>(this)->insertIntoProperties(
            uiIndex,
            cast_dynamic<GeoVectorPropertyPtr>(pNewElement));
    }
    if(uiFieldId == PropIndicesFieldId)
    {
        static_cast<Geometry *>(this)->insertIntoPropIndices(
            uiIndex,
            cast_dynamic<GeoIntegralPropertyPtr>(pNewElement));
    }
}

void GeometryBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == PropertiesFieldId)
    {
        static_cast<Geometry *>(this)->replaceInProperties(
            uiIndex,
            cast_dynamic<GeoVectorPropertyPtr>(pNewElement));
    }
    if(uiFieldId == PropIndicesFieldId)
    {
        static_cast<Geometry *>(this)->replaceInPropIndices(
            uiIndex,
            cast_dynamic<GeoIntegralPropertyPtr>(pNewElement));
    }
}

void GeometryBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == PropertiesFieldId)
    {
        static_cast<Geometry *>(this)->replaceInProperties(
            cast_dynamic<GeoVectorPropertyPtr>(pOldElement),
            cast_dynamic<GeoVectorPropertyPtr>(pNewElement));
    }
    if(uiFieldId == PropIndicesFieldId)
    {
        static_cast<Geometry *>(this)->replaceInPropIndices(
            cast_dynamic<GeoIntegralPropertyPtr>(pOldElement),
            cast_dynamic<GeoIntegralPropertyPtr>(pNewElement));
    }
}

void GeometryBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == PropertiesFieldId)
    {
        static_cast<Geometry *>(this)->removeFromProperties(
            uiIndex);
    }
    if(uiFieldId == PropIndicesFieldId)
    {
        static_cast<Geometry *>(this)->removeFromPropIndices(
            uiIndex);
    }
}

void GeometryBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == PropertiesFieldId)
    {
        static_cast<Geometry *>(this)->removeFromProperties(
            cast_dynamic<GeoVectorPropertyPtr>(pElement));
    }
    if(uiFieldId == PropIndicesFieldId)
    {
        static_cast<Geometry *>(this)->removeFromPropIndices(
            cast_dynamic<GeoIntegralPropertyPtr>(pElement));
    }
}

void GeometryBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == TypesFieldId)
    {
        static_cast<Geometry *>(this)->setTypes(NullFC);
    }
    if(uiFieldId == LengthsFieldId)
    {
        static_cast<Geometry *>(this)->setLengths(NullFC);
    }
    if(uiFieldId == PropertiesFieldId)
    {
        static_cast<Geometry *>(this)->clearProperties();
    }
    if(uiFieldId == PropIndicesFieldId)
    {
        static_cast<Geometry *>(this)->clearPropIndices();
    }
}

void GeometryBase::pushToProperties(GeoVectorPropertyPtrConstArg value)
{
    editMField(PropertiesFieldMask, _mfProperties);

    addRef(value);

    _mfProperties.push_back(value);

    if(value == NullFC)
        return;

    GeometryPtr thisP = Inherited::constructPtr<Geometry>(
        static_cast<Geometry *>(this));

    value->addParent(thisP, PropertiesFieldMask);
}

void GeometryBase::insertIntoProperties(UInt32                uiIndex,
                                                   GeoVectorPropertyPtrConstArg value   )
{
    editMField(PropertiesFieldMask, _mfProperties);

    MFGeoVectorPropertyPtr::iterator fieldIt = _mfProperties.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfProperties.insert(fieldIt, value);

    if(value == NullFC)
        return;

    GeometryPtr thisP = Inherited::constructPtr<Geometry>(
        static_cast<Geometry *>(this));

    value->addParent(thisP, PropertiesFieldMask);
}

void GeometryBase::replaceInProperties(UInt32                uiIndex,
                                                       GeoVectorPropertyPtrConstArg value   )
{
    if(uiIndex >= _mfProperties.size())
        return;

    editMField(PropertiesFieldMask, _mfProperties);

    addRef(value);

    GeometryPtr thisP = Inherited::constructPtr<Geometry>(
        static_cast<Geometry *>(this));

    if(_mfProperties[uiIndex] != NullFC)
    {
        _mfProperties[uiIndex]->subParent(thisP);
    }

    subRef(_mfProperties[uiIndex]);

    _mfProperties[uiIndex] = value;

    if(value == NullFC)
        return;

    value->addParent(thisP, PropertiesFieldMask);
}

void GeometryBase::replaceInProperties(GeoVectorPropertyPtrConstArg pOldElem,
                                                        GeoVectorPropertyPtrConstArg pNewElem)
{
    Int32  elemIdx = _mfProperties.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(PropertiesFieldMask, _mfProperties);

        MFGeoVectorPropertyPtr::iterator fieldIt = _mfProperties.begin();

        fieldIt += elemIdx;

        GeometryPtr thisP = Inherited::constructPtr<Geometry>(
            static_cast<Geometry *>(this));

        if(pOldElem != NullFC)
        {
            pOldElem->subParent(thisP);
        }

        if(pNewElem != NullFC)
        {
            pNewElem->addParent(thisP, PropertiesFieldMask);
        }

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void GeometryBase::removeFromProperties(UInt32 uiIndex)
{
    if(uiIndex < _mfProperties.size())
    {
        editMField(PropertiesFieldMask, _mfProperties);

        MFGeoVectorPropertyPtr::iterator fieldIt = _mfProperties.begin();

        fieldIt += uiIndex;

        GeometryPtr thisP = Inherited::constructPtr<Geometry>(
            static_cast<Geometry *>(this));

        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(thisP);
        }

        subRef(*fieldIt);

        _mfProperties.erase(fieldIt);
    }
}

void GeometryBase::removeFromProperties(GeoVectorPropertyPtrConstArg value)
{
    Int32 iElemIdx = _mfProperties.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(PropertiesFieldMask, _mfProperties);

        MFGeoVectorPropertyPtr::iterator fieldIt = _mfProperties.begin();

        fieldIt += iElemIdx;

        GeometryPtr thisP = Inherited::constructPtr<Geometry>(
            static_cast<Geometry *>(this));

        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(thisP);
        }

        subRef(*fieldIt);

        _mfProperties.erase(fieldIt);
    }
}
void GeometryBase::clearProperties(void)
{
    editMField(PropertiesFieldMask, _mfProperties);

    MFGeoVectorPropertyPtr::iterator       fieldIt  = _mfProperties.begin();
    MFGeoVectorPropertyPtr::const_iterator fieldEnd = _mfProperties.end  ();

    while(fieldIt != fieldEnd)
    {
        GeometryPtr thisP = Inherited::constructPtr<Geometry>(
            static_cast<Geometry *>(this));

        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(thisP);
        }

        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfProperties.clear();
}

void GeometryBase::pushToPropIndices(GeoIntegralPropertyPtrConstArg value)
{
    editMField(PropIndicesFieldMask, _mfPropIndices);

    addRef(value);

    _mfPropIndices.push_back(value);

    if(value == NullFC)
        return;

    GeometryPtr thisP = Inherited::constructPtr<Geometry>(
        static_cast<Geometry *>(this));

    value->addParent(thisP, PropIndicesFieldMask);
}

void GeometryBase::insertIntoPropIndices(UInt32                uiIndex,
                                                   GeoIntegralPropertyPtrConstArg value   )
{
    editMField(PropIndicesFieldMask, _mfPropIndices);

    MFGeoIntegralPropertyPtr::iterator fieldIt = _mfPropIndices.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfPropIndices.insert(fieldIt, value);

    if(value == NullFC)
        return;

    GeometryPtr thisP = Inherited::constructPtr<Geometry>(
        static_cast<Geometry *>(this));

    value->addParent(thisP, PropIndicesFieldMask);
}

void GeometryBase::replaceInPropIndices(UInt32                uiIndex,
                                                       GeoIntegralPropertyPtrConstArg value   )
{
    if(uiIndex >= _mfPropIndices.size())
        return;

    editMField(PropIndicesFieldMask, _mfPropIndices);

    addRef(value);

    GeometryPtr thisP = Inherited::constructPtr<Geometry>(
        static_cast<Geometry *>(this));

    if(_mfPropIndices[uiIndex] != NullFC)
    {
        _mfPropIndices[uiIndex]->subParent(thisP);
    }

    subRef(_mfPropIndices[uiIndex]);

    _mfPropIndices[uiIndex] = value;

    if(value == NullFC)
        return;

    value->addParent(thisP, PropIndicesFieldMask);
}

void GeometryBase::replaceInPropIndices(GeoIntegralPropertyPtrConstArg pOldElem,
                                                        GeoIntegralPropertyPtrConstArg pNewElem)
{
    Int32  elemIdx = _mfPropIndices.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(PropIndicesFieldMask, _mfPropIndices);

        MFGeoIntegralPropertyPtr::iterator fieldIt = _mfPropIndices.begin();

        fieldIt += elemIdx;

        GeometryPtr thisP = Inherited::constructPtr<Geometry>(
            static_cast<Geometry *>(this));

        if(pOldElem != NullFC)
        {
            pOldElem->subParent(thisP);
        }

        if(pNewElem != NullFC)
        {
            pNewElem->addParent(thisP, PropIndicesFieldMask);
        }

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void GeometryBase::removeFromPropIndices(UInt32 uiIndex)
{
    if(uiIndex < _mfPropIndices.size())
    {
        editMField(PropIndicesFieldMask, _mfPropIndices);

        MFGeoIntegralPropertyPtr::iterator fieldIt = _mfPropIndices.begin();

        fieldIt += uiIndex;

        GeometryPtr thisP = Inherited::constructPtr<Geometry>(
            static_cast<Geometry *>(this));

        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(thisP);
        }

        subRef(*fieldIt);

        _mfPropIndices.erase(fieldIt);
    }
}

void GeometryBase::removeFromPropIndices(GeoIntegralPropertyPtrConstArg value)
{
    Int32 iElemIdx = _mfPropIndices.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(PropIndicesFieldMask, _mfPropIndices);

        MFGeoIntegralPropertyPtr::iterator fieldIt = _mfPropIndices.begin();

        fieldIt += iElemIdx;

        GeometryPtr thisP = Inherited::constructPtr<Geometry>(
            static_cast<Geometry *>(this));

        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(thisP);
        }

        subRef(*fieldIt);

        _mfPropIndices.erase(fieldIt);
    }
}
void GeometryBase::clearPropIndices(void)
{
    editMField(PropIndicesFieldMask, _mfPropIndices);

    MFGeoIntegralPropertyPtr::iterator       fieldIt  = _mfPropIndices.begin();
    MFGeoIntegralPropertyPtr::const_iterator fieldEnd = _mfPropIndices.end  ();

    while(fieldIt != fieldEnd)
    {
        GeometryPtr thisP = Inherited::constructPtr<Geometry>(
            static_cast<Geometry *>(this));

        if(*fieldIt != NullFC)
        {
            (*fieldIt)->subParent(thisP);
        }

        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfPropIndices.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 GeometryBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TypesFieldMask & whichField))
    {
        returnValue += _sfTypes.getBinSize();
    }
    if(FieldBits::NoField != (LengthsFieldMask & whichField))
    {
        returnValue += _sfLengths.getBinSize();
    }
    if(FieldBits::NoField != (PropertiesFieldMask & whichField))
    {
        returnValue += _mfProperties.getBinSize();
    }
    if(FieldBits::NoField != (PropIndicesFieldMask & whichField))
    {
        returnValue += _mfPropIndices.getBinSize();
    }
    if(FieldBits::NoField != (ClassicGLIdFieldMask & whichField))
    {
        returnValue += _sfClassicGLId.getBinSize();
    }
    if(FieldBits::NoField != (AttGLIdFieldMask & whichField))
    {
        returnValue += _sfAttGLId.getBinSize();
    }

    return returnValue;
}

void GeometryBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TypesFieldMask & whichField))
    {
        _sfTypes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LengthsFieldMask & whichField))
    {
        _sfLengths.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PropertiesFieldMask & whichField))
    {
        _mfProperties.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PropIndicesFieldMask & whichField))
    {
        _mfPropIndices.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ClassicGLIdFieldMask & whichField))
    {
        _sfClassicGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AttGLIdFieldMask & whichField))
    {
        _sfAttGLId.copyToBin(pMem);
    }
}

void GeometryBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TypesFieldMask & whichField))
    {
        _sfTypes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LengthsFieldMask & whichField))
    {
        _sfLengths.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PropertiesFieldMask & whichField))
    {
        _mfProperties.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PropIndicesFieldMask & whichField))
    {
        _mfPropIndices.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ClassicGLIdFieldMask & whichField))
    {
        _sfClassicGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AttGLIdFieldMask & whichField))
    {
        _sfAttGLId.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
GeometryPtr GeometryBase::createEmpty(void)
{
    GeometryPtr returnValue;

    newPtr<Geometry>(returnValue);

    return returnValue;
}

FieldContainerPtr GeometryBase::shallowCopy(void) const
{
    GeometryPtr returnValue;

    newPtr(returnValue, dynamic_cast<const Geometry *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GeometryBase::GeometryBase(void) :
    Inherited(),
    _sfTypes                  (),
    _sfLengths                (),
    _mfProperties             (),
    _mfPropIndices            (),
    _sfClassicGLId            (Int32(0)),
    _sfAttGLId                (Int32(0))
{
}

GeometryBase::GeometryBase(const GeometryBase &source) :
    Inherited(source),
    _sfTypes                  (),
    _sfLengths                (),
    _mfProperties             (),
    _mfPropIndices            (),
    _sfClassicGLId            (source._sfClassicGLId            ),
    _sfAttGLId                (source._sfAttGLId                )
{
}

/*-------------------------- destructors ----------------------------------*/

GeometryBase::~GeometryBase(void)
{
}

void GeometryBase::onCreate(const Geometry *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setTypes(source->getTypes());

        this->setLengths(source->getLengths());

        MFGeoVectorPropertyPtr::const_iterator PropertiesIt  =
            source->_mfProperties.begin();
        MFGeoVectorPropertyPtr::const_iterator PropertiesEnd =
            source->_mfProperties.end  ();

        while(PropertiesIt != PropertiesEnd)
        {
            this->pushToProperties(*PropertiesIt);

            ++PropertiesIt;
        }

        MFGeoIntegralPropertyPtr::const_iterator PropIndicesIt  =
            source->_mfPropIndices.begin();
        MFGeoIntegralPropertyPtr::const_iterator PropIndicesEnd =
            source->_mfPropIndices.end  ();

        while(PropIndicesIt != PropIndicesEnd)
        {
            this->pushToPropIndices(*PropIndicesIt);

            ++PropIndicesIt;
        }
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void GeometryBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<GeometryBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void GeometryBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeometryBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void GeometryBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GeometryBase::createAspectCopy(void) const
{
    GeometryPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Geometry *>(this));

    return returnValue;
}
#endif

void GeometryBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Geometry *>(this)->setTypes(NullFC);

    static_cast<Geometry *>(this)->setLengths(NullFC);

    static_cast<Geometry *>(this)->clearProperties();

    static_cast<Geometry *>(this)->clearPropIndices();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeometryPtr>::_type("GeometryPtr", "MaterialDrawablePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeometryPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, GeometryPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, GeometryPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
