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
 **     class DistortionDisplayFilter
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISTORTIONDISPLAYFILTERBASE_H_
#define _OSGDISTORTIONDISPLAYFILTERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGDisplayFilter.h" // Parent

#include "OSGSysFields.h"               // Rows type
#include "OSGVecFields.h"               // Positions type

#include "OSGDistortionDisplayFilterFields.h"

OSG_BEGIN_NAMESPACE


class DistortionDisplayFilter;

//! \brief DistortionDisplayFilter Base Class.

class OSG_EFFECTGROUPS_DLLMAPPING DistortionDisplayFilterBase : public DisplayFilter
{
  public:

    typedef DisplayFilter Inherited;
    typedef DisplayFilter ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DistortionDisplayFilter);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RowsFieldId = Inherited::NextFieldId,
        ColumnsFieldId = RowsFieldId + 1,
        PositionsFieldId = ColumnsFieldId + 1,
        NextFieldId = PositionsFieldId + 1
    };

    static const OSG::BitVector RowsFieldMask =
        (TypeTraits<BitVector>::One << RowsFieldId);
    static const OSG::BitVector ColumnsFieldMask =
        (TypeTraits<BitVector>::One << ColumnsFieldId);
    static const OSG::BitVector PositionsFieldMask =
        (TypeTraits<BitVector>::One << PositionsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFRowsType;
    typedef SFUInt32          SFColumnsType;
    typedef MFVec2f           MFPositionsType;

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


                  SFUInt32            *editSFRows           (void);
            const SFUInt32            *getSFRows            (void) const;

                  SFUInt32            *editSFColumns        (void);
            const SFUInt32            *getSFColumns         (void) const;

                  MFVec2f             *editMFPositions      (void);
            const MFVec2f             *getMFPositions       (void) const;


                  UInt32              &editRows           (void);
                  UInt32               getRows            (void) const;

                  UInt32              &editColumns        (void);
                  UInt32               getColumns         (void) const;

            MFVec2f            ::reference       editPositions      (const UInt32 index);
            const Vec2f               &getPositions       (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRows           (const UInt32 value);
            void setColumns        (const UInt32 value);

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

    static  DistortionDisplayFilterTransitPtr  create          (void);
    static  DistortionDisplayFilter           *createEmpty     (void);

    static  DistortionDisplayFilterTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DistortionDisplayFilter            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  DistortionDisplayFilterTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt32          _sfRows;
    SFUInt32          _sfColumns;
    MFVec2f           _mfPositions;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DistortionDisplayFilterBase(void);
    DistortionDisplayFilterBase(const DistortionDisplayFilterBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DistortionDisplayFilterBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleRows            (void) const;
     EditFieldHandlePtr editHandleRows           (void);
     GetFieldHandlePtr  getHandleColumns         (void) const;
     EditFieldHandlePtr editHandleColumns        (void);
     GetFieldHandlePtr  getHandlePositions       (void) const;
     EditFieldHandlePtr editHandlePositions      (void);

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

            void execSync (      DistortionDisplayFilterBase *pFrom,
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
    void operator =(const DistortionDisplayFilterBase &source);
};

typedef DistortionDisplayFilterBase *DistortionDisplayFilterBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDISTORTIONDISPLAYFILTERBASE_H_ */
