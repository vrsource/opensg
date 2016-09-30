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
 **     class ComputeShaderChunk!
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



#include "OSGShaderProgram.h"           // ComputeShader Class
#include "OSGShaderProgramVariables.h"  // Variables Class

#include "OSGComputeShaderChunkBase.h"
#include "OSGComputeShaderChunk.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComputeShaderChunk
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ShaderProgram * ComputeShaderChunkBase::_mfComputeShader
    fragment program object
*/

/*! \var std::string     ComputeShaderChunkBase::_sfComputeProgram
    vertex program source
*/

/*! \var ShaderProgramVariables * ComputeShaderChunkBase::_sfVariables
    fragment program object
*/

/*! \var Int32           ComputeShaderChunkBase::_mfVariableLocations
    fragment program object
*/

/*! \var Int32           ComputeShaderChunkBase::_mfProceduralVariableLocations
    fragment program object
*/

/*! \var UInt32          ComputeShaderChunkBase::_sfGLId
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ComputeShaderChunk *, nsOSG>::_type(
    "ComputeShaderChunkPtr", 
    "StateChunkPtr", 
    ComputeShaderChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ComputeShaderChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ComputeShaderChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ComputeShaderChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ComputeShaderChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecShaderProgramPtr::Description(
        MFUnrecShaderProgramPtr::getClassType(),
        "computeShader",
        "fragment program object\n",
        ComputeShaderFieldId, ComputeShaderFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComputeShaderChunk::editHandleComputeShader),
        static_cast<FieldGetMethodSig >(&ComputeShaderChunk::getHandleComputeShader));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "computeProgram",
        "vertex program source\n",
        ComputeProgramFieldId, ComputeProgramFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComputeShaderChunk::editHandleComputeProgram),
        static_cast<FieldGetMethodSig >(&ComputeShaderChunk::getHandleComputeProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecChildShaderProgramVariablesPtr::Description(
        SFUnrecChildShaderProgramVariablesPtr::getClassType(),
        "variables",
        "fragment program object\n",
        VariablesFieldId, VariablesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComputeShaderChunk::editHandleVariables),
        static_cast<FieldGetMethodSig >(&ComputeShaderChunk::getHandleVariables));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "variableLocations",
        "fragment program object\n",
        VariableLocationsFieldId, VariableLocationsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComputeShaderChunk::editHandleVariableLocations),
        static_cast<FieldGetMethodSig >(&ComputeShaderChunk::getHandleVariableLocations));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "proceduralVariableLocations",
        "fragment program object\n",
        ProceduralVariableLocationsFieldId, ProceduralVariableLocationsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComputeShaderChunk::editHandleProceduralVariableLocations),
        static_cast<FieldGetMethodSig >(&ComputeShaderChunk::getHandleProceduralVariableLocations));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&ComputeShaderChunk::editHandleGLId),
        static_cast<FieldGetMethodSig >(&ComputeShaderChunk::getHandleGLId));

    oType.addInitialDesc(pDesc);
}


ComputeShaderChunkBase::TypeObject ComputeShaderChunkBase::_type(
    ComputeShaderChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ComputeShaderChunkBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&ComputeShaderChunk::initMethod),
    reinterpret_cast<ExitContainerF>(&ComputeShaderChunk::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(&ComputeShaderChunk::classDescInserter),
    false,
    ComputeProgramFieldMask,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ComputeShaderChunk\"\n"
    "    parent=\"StateChunk\"\n"
    "    library=\"ContribComputeBase\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    fieldsUnmarkedOnCreate=\"ComputeProgramFieldMask\"\n"
    "    docGroupBase=\"GrpSystemShader\"\n"
    "    >\n"
    "  <Field\n"
    "\t  name=\"computeShader\"\n"
    "\t  type=\"ShaderProgram\"\n"
    "\t  cardinality=\"multi\"\n"
    "\t  visibility=\"external\"\n"
    "\t  access=\"public\"\n"
    "      category=\"pointer\"\n"
    "      \n"
    "      pushToFieldAs=\"addComputeShader\"\n"
    "      removeFromMFieldIndexAs=\"subComputeShader\"\n"
    "      clearFieldAs=\"clearComputeShaders\"        \n"
    "\t  >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"computeProgram\"\n"
    "      type=\"std::string\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "\tvertex program source\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "      name=\"variables\"\n"
    "      type=\"ShaderProgramVariables\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      category=\"childpointer\"\n"
    "      childParentType=\"FieldContainer\"\n"
    "      linkParentField=\"Parents\"\n"
    "      >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"variableLocations\"\n"
    "      type=\"Int32\"\n"
    "      cardinality=\"multi\"\n"
    "      visibility=\"internal\"\n"
    "      access=\"protected\"\n"
    "      >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"proceduralVariableLocations\"\n"
    "      type=\"Int32\"\n"
    "      cardinality=\"multi\"\n"
    "      visibility=\"internal\"\n"
    "      access=\"protected\"\n"
    "      >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  \n"
    "  <Field\n"
    "      name=\"GLId\"\n"
    "      type=\"UInt32\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"internal\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"0\"\n"
    "      fieldFlags=\"FClusterLocal\"\n"
    "      >\n"
    "  </Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComputeShaderChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComputeShaderChunkBase::getType(void) const
{
    return _type;
}

UInt32 ComputeShaderChunkBase::getContainerSize(void) const
{
    return sizeof(ComputeShaderChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ComputeShaderChunk::_mfComputeShader field.
const MFUnrecShaderProgramPtr *ComputeShaderChunkBase::getMFComputeShader(void) const
{
    return &_mfComputeShader;
}

MFUnrecShaderProgramPtr *ComputeShaderChunkBase::editMFComputeShader  (void)
{
    editMField(ComputeShaderFieldMask, _mfComputeShader);

    return &_mfComputeShader;
}
ShaderProgram * ComputeShaderChunkBase::getComputeShader(const UInt32 index) const
{
    return _mfComputeShader[index];
}

SFString *ComputeShaderChunkBase::editSFComputeProgram(void)
{
    editSField(ComputeProgramFieldMask);

    return &_sfComputeProgram;
}

const SFString *ComputeShaderChunkBase::getSFComputeProgram(void) const
{
    return &_sfComputeProgram;
}


//! Get the ComputeShaderChunk::_sfVariables field.
const SFUnrecChildShaderProgramVariablesPtr *ComputeShaderChunkBase::getSFVariables(void) const
{
    return &_sfVariables;
}

SFUnrecChildShaderProgramVariablesPtr *ComputeShaderChunkBase::editSFVariables      (void)
{
    editSField(VariablesFieldMask);

    return &_sfVariables;
}

//! Get the value of the ComputeShaderChunk::_sfVariables field.
ShaderProgramVariables * ComputeShaderChunkBase::getVariables(void) const
{
    return _sfVariables.getValue();
}

//! Set the value of the ComputeShaderChunk::_sfVariables field.
void ComputeShaderChunkBase::setVariables(ShaderProgramVariables * const value)
{
    editSField(VariablesFieldMask);

    _sfVariables.setValue(value);
}


MFInt32 *ComputeShaderChunkBase::editMFVariableLocations(void)
{
    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return &_mfVariableLocations;
}

const MFInt32 *ComputeShaderChunkBase::getMFVariableLocations(void) const
{
    return &_mfVariableLocations;
}


MFInt32 *ComputeShaderChunkBase::editMFProceduralVariableLocations(void)
{
    editMField(ProceduralVariableLocationsFieldMask, _mfProceduralVariableLocations);

    return &_mfProceduralVariableLocations;
}

const MFInt32 *ComputeShaderChunkBase::getMFProceduralVariableLocations(void) const
{
    return &_mfProceduralVariableLocations;
}


SFUInt32 *ComputeShaderChunkBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *ComputeShaderChunkBase::getSFGLId(void) const
{
    return &_sfGLId;
}




void ComputeShaderChunkBase::addComputeShader(ShaderProgram * const value)
{
    editMField(ComputeShaderFieldMask, _mfComputeShader);

    _mfComputeShader.push_back(value);
}

void ComputeShaderChunkBase::assignComputeShader(const MFUnrecShaderProgramPtr &value)
{
    MFUnrecShaderProgramPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecShaderProgramPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ComputeShaderChunk *>(this)->clearComputeShaders();

    while(elemIt != elemEnd)
    {
        this->addComputeShader(*elemIt);

        ++elemIt;
    }
}

void ComputeShaderChunkBase::subComputeShader(UInt32 uiIndex)
{
    if(uiIndex < _mfComputeShader.size())
    {
        editMField(ComputeShaderFieldMask, _mfComputeShader);

        _mfComputeShader.erase(uiIndex);
    }
}

void ComputeShaderChunkBase::removeObjFromComputeShader(ShaderProgram * const value)
{
    Int32 iElemIdx = _mfComputeShader.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ComputeShaderFieldMask, _mfComputeShader);

        _mfComputeShader.erase(iElemIdx);
    }
}
void ComputeShaderChunkBase::clearComputeShaders(void)
{
    editMField(ComputeShaderFieldMask, _mfComputeShader);


    _mfComputeShader.clear();
}



/*------------------------------ access -----------------------------------*/

SizeT ComputeShaderChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ComputeShaderFieldMask & whichField))
    {
        returnValue += _mfComputeShader.getBinSize();
    }
    if(FieldBits::NoField != (ComputeProgramFieldMask & whichField))
    {
        returnValue += _sfComputeProgram.getBinSize();
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        returnValue += _sfVariables.getBinSize();
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        returnValue += _mfVariableLocations.getBinSize();
    }
    if(FieldBits::NoField != (ProceduralVariableLocationsFieldMask & whichField))
    {
        returnValue += _mfProceduralVariableLocations.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void ComputeShaderChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ComputeShaderFieldMask & whichField))
    {
        _mfComputeShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ComputeProgramFieldMask & whichField))
    {
        _sfComputeProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        _mfVariableLocations.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProceduralVariableLocationsFieldMask & whichField))
    {
        _mfProceduralVariableLocations.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void ComputeShaderChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ComputeShaderFieldMask & whichField))
    {
        editMField(ComputeShaderFieldMask, _mfComputeShader);
        _mfComputeShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ComputeProgramFieldMask & whichField))
    {
        editSField(ComputeProgramFieldMask);
        _sfComputeProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        editSField(VariablesFieldMask);
        _sfVariables.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        editMField(VariableLocationsFieldMask, _mfVariableLocations);
        _mfVariableLocations.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProceduralVariableLocationsFieldMask & whichField))
    {
        editMField(ProceduralVariableLocationsFieldMask, _mfProceduralVariableLocations);
        _mfProceduralVariableLocations.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        editSField(GLIdFieldMask);
        _sfGLId.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ComputeShaderChunkTransitPtr ComputeShaderChunkBase::createLocal(BitVector bFlags)
{
    ComputeShaderChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComputeShaderChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ComputeShaderChunkTransitPtr ComputeShaderChunkBase::createDependent(BitVector bFlags)
{
    ComputeShaderChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ComputeShaderChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComputeShaderChunkTransitPtr ComputeShaderChunkBase::create(void)
{
    ComputeShaderChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ComputeShaderChunk>(tmpPtr);
    }

    return fc;
}

ComputeShaderChunk *ComputeShaderChunkBase::createEmptyLocal(BitVector bFlags)
{
    ComputeShaderChunk *returnValue;

    newPtr<ComputeShaderChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComputeShaderChunk *ComputeShaderChunkBase::createEmpty(void)
{
    ComputeShaderChunk *returnValue;

    newPtr<ComputeShaderChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ComputeShaderChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComputeShaderChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComputeShaderChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComputeShaderChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ComputeShaderChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComputeShaderChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComputeShaderChunkBase::shallowCopy(void) const
{
    ComputeShaderChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ComputeShaderChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ComputeShaderChunkBase::ComputeShaderChunkBase(void) :
    Inherited(),
    _mfComputeShader          (),
    _sfComputeProgram         (),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfVariableLocations      (),
    _mfProceduralVariableLocations(),
    _sfGLId                   (UInt32(0))
{
}

ComputeShaderChunkBase::ComputeShaderChunkBase(const ComputeShaderChunkBase &source) :
    Inherited(source),
    _mfComputeShader          (),
    _sfComputeProgram         (source._sfComputeProgram         ),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfVariableLocations      (source._mfVariableLocations      ),
    _mfProceduralVariableLocations(source._mfProceduralVariableLocations),
    _sfGLId                   (source._sfGLId                   )
{
}


/*-------------------------- destructors ----------------------------------*/

ComputeShaderChunkBase::~ComputeShaderChunkBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool ComputeShaderChunkBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == VariablesFieldId)
    {
        ShaderProgramVariables * pTypedChild =
            dynamic_cast<ShaderProgramVariables *>(pChild);

        if(pTypedChild != NULL)
        {
            if(_sfVariables.getValue() == pTypedChild)
            {
                editSField(VariablesFieldMask);

                _sfVariables.setValue(NULL);

                return true;
            }

            SWARNING << "Parent (["        << this
                     << "] id ["           << this->getId()
                     << "] type ["         << this->getType().getCName()
                     << "] childFieldId [" << childFieldId
                     << "]) - Child (["    << pChild
                     << "] id ["           << pChild->getId()
                     << "] type ["         << pChild->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void ComputeShaderChunkBase::onCreate(const ComputeShaderChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ComputeShaderChunk *pThis = static_cast<ComputeShaderChunk *>(this);

        MFUnrecShaderProgramPtr::const_iterator ComputeShaderIt  =
            source->_mfComputeShader.begin();
        MFUnrecShaderProgramPtr::const_iterator ComputeShaderEnd =
            source->_mfComputeShader.end  ();

        while(ComputeShaderIt != ComputeShaderEnd)
        {
            pThis->addComputeShader(*ComputeShaderIt);

            ++ComputeShaderIt;
        }

        pThis->setVariables(source->getVariables());
    }
}

GetFieldHandlePtr ComputeShaderChunkBase::getHandleComputeShader   (void) const
{
    MFUnrecShaderProgramPtr::GetHandlePtr returnValue(
        new  MFUnrecShaderProgramPtr::GetHandle(
             &_mfComputeShader,
             this->getType().getFieldDesc(ComputeShaderFieldId),
             const_cast<ComputeShaderChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComputeShaderChunkBase::editHandleComputeShader  (void)
{
    MFUnrecShaderProgramPtr::EditHandlePtr returnValue(
        new  MFUnrecShaderProgramPtr::EditHandle(
             &_mfComputeShader,
             this->getType().getFieldDesc(ComputeShaderFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&ComputeShaderChunk::addComputeShader,
                    static_cast<ComputeShaderChunk *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ComputeShaderChunk::subComputeShader,
                    static_cast<ComputeShaderChunk *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ComputeShaderChunk::removeObjFromComputeShader,
                    static_cast<ComputeShaderChunk *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ComputeShaderChunk::clearComputeShaders,
                    static_cast<ComputeShaderChunk *>(this)));

    editMField(ComputeShaderFieldMask, _mfComputeShader);

    return returnValue;
}

GetFieldHandlePtr ComputeShaderChunkBase::getHandleComputeProgram  (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfComputeProgram,
             this->getType().getFieldDesc(ComputeProgramFieldId),
             const_cast<ComputeShaderChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComputeShaderChunkBase::editHandleComputeProgram (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfComputeProgram,
             this->getType().getFieldDesc(ComputeProgramFieldId),
             this));


    editSField(ComputeProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComputeShaderChunkBase::getHandleVariables       (void) const
{
    SFUnrecChildShaderProgramVariablesPtr::GetHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::GetHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId),
             const_cast<ComputeShaderChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComputeShaderChunkBase::editHandleVariables      (void)
{
    SFUnrecChildShaderProgramVariablesPtr::EditHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::EditHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ComputeShaderChunk::setVariables,
                    static_cast<ComputeShaderChunk *>(this), _1));

    editSField(VariablesFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComputeShaderChunkBase::getHandleVariableLocations (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfVariableLocations,
             this->getType().getFieldDesc(VariableLocationsFieldId),
             const_cast<ComputeShaderChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComputeShaderChunkBase::editHandleVariableLocations(void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfVariableLocations,
             this->getType().getFieldDesc(VariableLocationsFieldId),
             this));


    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return returnValue;
}

GetFieldHandlePtr ComputeShaderChunkBase::getHandleProceduralVariableLocations (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfProceduralVariableLocations,
             this->getType().getFieldDesc(ProceduralVariableLocationsFieldId),
             const_cast<ComputeShaderChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComputeShaderChunkBase::editHandleProceduralVariableLocations(void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfProceduralVariableLocations,
             this->getType().getFieldDesc(ProceduralVariableLocationsFieldId),
             this));


    editMField(ProceduralVariableLocationsFieldMask, _mfProceduralVariableLocations);

    return returnValue;
}

GetFieldHandlePtr ComputeShaderChunkBase::getHandleGLId            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             const_cast<ComputeShaderChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ComputeShaderChunkBase::editHandleGLId           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             this));


    editSField(GLIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ComputeShaderChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ComputeShaderChunk *pThis = static_cast<ComputeShaderChunk *>(this);

    pThis->execSync(static_cast<ComputeShaderChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComputeShaderChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ComputeShaderChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComputeShaderChunk *>(pRefAspect),
                  dynamic_cast<const ComputeShaderChunk *>(this));

    return returnValue;
}
#endif

void ComputeShaderChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ComputeShaderChunk *>(this)->clearComputeShaders();

    static_cast<ComputeShaderChunk *>(this)->setVariables(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfVariableLocations.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfProceduralVariableLocations.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
