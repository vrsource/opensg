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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGINTERSECTPROXYATTACHMENTFIELDS_H_
#define _OSGINTERSECTPROXYATTACHMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class IntersectProxyAttachment;

OSG_GEN_CONTAINERPTR(IntersectProxyAttachment);

/*! \ingroup GrpSystemFieldContainerFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<IntersectProxyAttachment *> :
    public FieldTraitsFCPtrBase<IntersectProxyAttachment *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<IntersectProxyAttachment *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFIntersectProxyAttachmentPtr"; }
};

template<> inline
const Char8 *FieldTraits<IntersectProxyAttachment *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecIntersectProxyAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<IntersectProxyAttachment *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecIntersectProxyAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<IntersectProxyAttachment *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakIntersectProxyAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<IntersectProxyAttachment *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdIntersectProxyAttachmentPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldContainerFieldSFields */
typedef PointerSField<IntersectProxyAttachment *,
                      RecordedRefCountPolicy  > SFRecIntersectProxyAttachmentPtr;
/*! \ingroup GrpSystemFieldContainerFieldSFields */
typedef PointerSField<IntersectProxyAttachment *,
                      UnrecordedRefCountPolicy> SFUnrecIntersectProxyAttachmentPtr;
/*! \ingroup GrpSystemFieldContainerFieldSFields */
typedef PointerSField<IntersectProxyAttachment *,
                      WeakRefCountPolicy      > SFWeakIntersectProxyAttachmentPtr;
/*! \ingroup GrpSystemFieldContainerFieldSFields */
typedef PointerSField<IntersectProxyAttachment *,
                      NoRefCountPolicy        > SFUncountedIntersectProxyAttachmentPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldContainerFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecIntersectProxyAttachmentPtr : 
    public PointerSField<IntersectProxyAttachment *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldContainerFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecIntersectProxyAttachmentPtr : 
    public PointerSField<IntersectProxyAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldContainerFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakIntersectProxyAttachmentPtr :
    public PointerSField<IntersectProxyAttachment *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldContainerFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedIntersectProxyAttachmentPtr :
    public PointerSField<IntersectProxyAttachment *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGINTERSECTPROXYATTACHMENTFIELDS_H_ */
