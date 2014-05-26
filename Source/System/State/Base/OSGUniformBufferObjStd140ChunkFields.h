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


#ifndef _OSGUNIFORMBUFFEROBJSTD140CHUNKFIELDS_H_
#define _OSGUNIFORMBUFFEROBJSTD140CHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class UniformBufferObjStd140Chunk;

OSG_GEN_CONTAINERPTR(UniformBufferObjStd140Chunk);
/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<UniformBufferObjStd140Chunk *, nsOSG> :
    public FieldTraitsFCPtrBase<UniformBufferObjStd140Chunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecUniformBufferObjStd140ChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecUniformBufferObjStd140ChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakUniformBufferObjStd140ChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdUniformBufferObjStd140ChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecUniformBufferObjStd140ChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecUniformBufferObjStd140ChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakUniformBufferObjStd140ChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<UniformBufferObjStd140Chunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdUniformBufferObjStd140ChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<UniformBufferObjStd140Chunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecUniformBufferObjStd140ChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<UniformBufferObjStd140Chunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecUniformBufferObjStd140ChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<UniformBufferObjStd140Chunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakUniformBufferObjStd140ChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<UniformBufferObjStd140Chunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedUniformBufferObjStd140ChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<UniformBufferObjStd140Chunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecUniformBufferObjStd140ChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<UniformBufferObjStd140Chunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecUniformBufferObjStd140ChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<UniformBufferObjStd140Chunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakUniformBufferObjStd140ChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<UniformBufferObjStd140Chunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedUniformBufferObjStd140ChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecUniformBufferObjStd140ChunkPtr : 
    public PointerSField<UniformBufferObjStd140Chunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecUniformBufferObjStd140ChunkPtr : 
    public PointerSField<UniformBufferObjStd140Chunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakUniformBufferObjStd140ChunkPtr :
    public PointerSField<UniformBufferObjStd140Chunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedUniformBufferObjStd140ChunkPtr :
    public PointerSField<UniformBufferObjStd140Chunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecUniformBufferObjStd140ChunkPtr :
    public PointerMField<UniformBufferObjStd140Chunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecUniformBufferObjStd140ChunkPtr :
    public PointerMField<UniformBufferObjStd140Chunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakUniformBufferObjStd140ChunkPtr :
    public PointerMField<UniformBufferObjStd140Chunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedUniformBufferObjStd140ChunkPtr :
    public PointerMField<UniformBufferObjStd140Chunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGUNIFORMBUFFEROBJSTD140CHUNKFIELDS_H_ */