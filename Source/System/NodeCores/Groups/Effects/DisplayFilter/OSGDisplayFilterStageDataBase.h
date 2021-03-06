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
 **     class DisplayFilterStageData
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISPLAYFILTERSTAGEDATABASE_H_
#define _OSGDISPLAYFILTERSTAGEDATABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStageData.h" // Parent

#include "OSGSysFields.h"               // Width type
#include "OSGFrameBufferObjectFields.h" // Target type
#include "OSGChunkMaterialFields.h"     // BaseMaterial type
#include "OSGSimpleSHLChunkFields.h"    // ColorFilterShader type
#include "OSGTextureObjChunkFields.h"   // ColorFilterTexture type

#include "OSGDisplayFilterStageDataFields.h"

OSG_BEGIN_NAMESPACE


class DisplayFilterStageData;

//! \brief DisplayFilterStageData Base Class.

class OSG_EFFECTGROUPS_DLLMAPPING DisplayFilterStageDataBase : public StageData
{
  public:

    typedef StageData Inherited;
    typedef StageData ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DisplayFilterStageData);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        WidthFieldId = Inherited::NextFieldId,
        HeightFieldId = WidthFieldId + 1,
        TargetFieldId = HeightFieldId + 1,
        BaseMaterialFieldId = TargetFieldId + 1,
        ColorFilterShaderFieldId = BaseMaterialFieldId + 1,
        ColorFilterTextureFieldId = ColorFilterShaderFieldId + 1,
        NextFieldId = ColorFilterTextureFieldId + 1
    };

    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector TargetFieldMask =
        (TypeTraits<BitVector>::One << TargetFieldId);
    static const OSG::BitVector BaseMaterialFieldMask =
        (TypeTraits<BitVector>::One << BaseMaterialFieldId);
    static const OSG::BitVector ColorFilterShaderFieldMask =
        (TypeTraits<BitVector>::One << ColorFilterShaderFieldId);
    static const OSG::BitVector ColorFilterTextureFieldMask =
        (TypeTraits<BitVector>::One << ColorFilterTextureFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFWidthType;
    typedef SFUInt32          SFHeightType;
    typedef SFUnrecFrameBufferObjectPtr SFTargetType;
    typedef SFUnrecChunkMaterialPtr SFBaseMaterialType;
    typedef SFUnrecSimpleSHLChunkPtr SFColorFilterShaderType;
    typedef SFUnrecTextureObjChunkPtr SFColorFilterTextureType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFWidth          (void);
            const SFUInt32            *getSFWidth           (void) const;

                  SFUInt32            *editSFHeight         (void);
            const SFUInt32            *getSFHeight          (void) const;
            const SFUnrecFrameBufferObjectPtr *getSFTarget         (void) const;
                  SFUnrecFrameBufferObjectPtr *editSFTarget         (void);
            const SFUnrecChunkMaterialPtr *getSFBaseMaterial   (void) const;
                  SFUnrecChunkMaterialPtr *editSFBaseMaterial   (void);
            const SFUnrecSimpleSHLChunkPtr *getSFColorFilterShader(void) const;
                  SFUnrecSimpleSHLChunkPtr *editSFColorFilterShader(void);
            const SFUnrecTextureObjChunkPtr *getSFColorFilterTexture(void) const;
                  SFUnrecTextureObjChunkPtr *editSFColorFilterTexture(void);


                  UInt32              &editWidth          (void);
                  UInt32               getWidth           (void) const;

                  UInt32              &editHeight         (void);
                  UInt32               getHeight          (void) const;

                  FrameBufferObject * getTarget         (void) const;

                  ChunkMaterial * getBaseMaterial   (void) const;

                  SimpleSHLChunk * getColorFilterShader(void) const;

                  TextureObjChunk * getColorFilterTexture(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setWidth          (const UInt32 value);
            void setHeight         (const UInt32 value);
            void setTarget         (FrameBufferObject * const value);
            void setBaseMaterial   (ChunkMaterial * const value);
            void setColorFilterShader(SimpleSHLChunk * const value);
            void setColorFilterTexture(TextureObjChunk * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  DisplayFilterStageDataTransitPtr  create          (void);
    static  DisplayFilterStageData           *createEmpty     (void);

    static  DisplayFilterStageDataTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DisplayFilterStageData            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  DisplayFilterStageDataTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt32          _sfWidth;
    SFUInt32          _sfHeight;
    SFUnrecFrameBufferObjectPtr _sfTarget;
    SFUnrecChunkMaterialPtr _sfBaseMaterial;
    SFUnrecSimpleSHLChunkPtr _sfColorFilterShader;
    SFUnrecTextureObjChunkPtr _sfColorFilterTexture;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DisplayFilterStageDataBase(void);
    DisplayFilterStageDataBase(const DisplayFilterStageDataBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DisplayFilterStageDataBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const DisplayFilterStageData *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleWidth           (void) const;
     EditFieldHandlePtr editHandleWidth          (void);
     GetFieldHandlePtr  getHandleHeight          (void) const;
     EditFieldHandlePtr editHandleHeight         (void);
     GetFieldHandlePtr  getHandleTarget          (void) const;
     EditFieldHandlePtr editHandleTarget         (void);
     GetFieldHandlePtr  getHandleBaseMaterial    (void) const;
     EditFieldHandlePtr editHandleBaseMaterial   (void);
     GetFieldHandlePtr  getHandleColorFilterShader (void) const;
     EditFieldHandlePtr editHandleColorFilterShader(void);
     GetFieldHandlePtr  getHandleColorFilterTexture (void) const;
     EditFieldHandlePtr editHandleColorFilterTexture(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      DisplayFilterStageDataBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DisplayFilterStageDataBase &source);
};

typedef DisplayFilterStageDataBase *DisplayFilterStageDataBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDISPLAYFILTERSTAGEDATABASE_H_ */
