/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                Copyright (C) 2009 by the OpenSG Forum                     *
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

#ifndef _OSGCOLLADAOPTIONS_H_
#define _OSGCOLLADAOPTIONS_H_

#ifdef __sgi
#pragma once
#endif

/*! \file OSGColladaOptions.h
    \ingroup GrpLoader
 */
#include "OSGConfig.h"

#if defined(OSG_WITH_COLLADA) || defined(OSG_DO_DOC)

#include "OSGFileIODef.h"
#include "OSGMemoryObject.h"
#include "OSGRefCountPtr.h"
#include "OSGTransitPtr.h"
#include "OSGIOFileTypeBase.h"

OSG_BEGIN_NAMESPACE

/*! \ingroup GrpFileIOCollada
    \nohierarchy
 */

class OSG_FILEIO_DLLMAPPING ColladaOptions : public MemoryObject
{
    /*==========================  PUBLIC  =================================*/
  public:
    /*---------------------------------------------------------------------*/
    /*! \name Types                                                        */
    /*! \{                                                                 */

    typedef MemoryObject    Inherited;
    typedef ColladaOptions  Self;

    OSG_GEN_INTERNAL_MEMOBJPTR(ColladaOptions);

    typedef IOFileTypeBase::OptionSet OptionSet;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Create                                                       */
    /*! \{                                                                 */

    static ObjTransitPtr create(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Options                                                      */
    /*! \{                                                                 */

    virtual void parseOptions(const OptionSet &optSet);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Options                                                      */
    /*! \{                                                                 */

    template <class ValueTypeT>
    bool getOptionAs(const std::string &name,
                           ValueTypeT  &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Options                                                      */
    /*! \{                                                                 */

    bool getInvertTransparency    (void      ) const;
    void setInvertTransparency    (bool value);

    bool getMergeTransforms       (void      ) const;
    void setMergeTransforms       (bool value);

    bool getCreateNameAttachments (void      ) const;
    void setCreateNameAttachments (bool value);

    bool getLoadAnimations        (void      ) const;
    void setLoadAnimations        (bool value);   

    bool getLoadLights            (void      ) const;
    void setLoadLights            (bool value);

    bool getTryMergeInvalidIndices(void      ) const;
    void setTryMergeInvalidIndices(bool value);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    /*---------------------------------------------------------------------*/
    /*! \name Constructors/Destructor                                      */
    /*! \{                                                                 */

             ColladaOptions(void);
    virtual ~ColladaOptions(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/

    bool      _invertTransparency;
    bool      _mergeTransforms;
    bool      _createNameAttachments;
    bool      _loadAnimations;
    bool      _loadLights;
    bool      _tryMergeInvalidIndices;

    // remaining options
    OptionSet _oOptions;

};

OSG_GEN_MEMOBJPTR(ColladaOptions);

OSG_END_NAMESPACE

#include "OSGColladaOptions.inl"

#endif // OSG_WITH_COLLADA

#endif // _OSGCOLLADAOPTIONS_H_
