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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMULTIPROPERTYUBOCHUNKFIELDS_H_
#define _OSGMULTIPROPERTYUBOCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class MultiPropertyUBOChunk;

OSG_GEN_CONTAINERPTR(MultiPropertyUBOChunk);
/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<MultiPropertyUBOChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<MultiPropertyUBOChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<MultiPropertyUBOChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<MultiPropertyUBOChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMultiPropertyUBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertyUBOChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMultiPropertyUBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertyUBOChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMultiPropertyUBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertyUBOChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMultiPropertyUBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertyUBOChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMultiPropertyUBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertyUBOChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMultiPropertyUBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertyUBOChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMultiPropertyUBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertyUBOChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMultiPropertyUBOChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiPropertyUBOChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecMultiPropertyUBOChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiPropertyUBOChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecMultiPropertyUBOChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiPropertyUBOChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakMultiPropertyUBOChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiPropertyUBOChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedMultiPropertyUBOChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiPropertyUBOChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecMultiPropertyUBOChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiPropertyUBOChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecMultiPropertyUBOChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiPropertyUBOChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakMultiPropertyUBOChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiPropertyUBOChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedMultiPropertyUBOChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecMultiPropertyUBOChunkPtr : 
    public PointerSField<MultiPropertyUBOChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecMultiPropertyUBOChunkPtr : 
    public PointerSField<MultiPropertyUBOChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakMultiPropertyUBOChunkPtr :
    public PointerSField<MultiPropertyUBOChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedMultiPropertyUBOChunkPtr :
    public PointerSField<MultiPropertyUBOChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecMultiPropertyUBOChunkPtr :
    public PointerMField<MultiPropertyUBOChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecMultiPropertyUBOChunkPtr :
    public PointerMField<MultiPropertyUBOChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakMultiPropertyUBOChunkPtr :
    public PointerMField<MultiPropertyUBOChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedMultiPropertyUBOChunkPtr :
    public PointerMField<MultiPropertyUBOChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMULTIPROPERTYUBOCHUNKFIELDS_H_ */
