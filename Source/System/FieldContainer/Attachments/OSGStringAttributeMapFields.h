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


#ifndef _OSGSTRINGATTRIBUTEMAPFIELDS_H_
#define _OSGSTRINGATTRIBUTEMAPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class StringAttributeMap;

OSG_GEN_CONTAINERPTR(StringAttributeMap);

/*! \ingroup GrpSystemFieldContainerFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<StringAttributeMap *> :
    public FieldTraitsFCPtrBase<StringAttributeMap *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<StringAttributeMap *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFStringAttributeMapPtr"; }
};

template<> inline
const Char8 *FieldTraits<StringAttributeMap *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecStringAttributeMapPtr"; 
}

template<> inline
const Char8 *FieldTraits<StringAttributeMap *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecStringAttributeMapPtr"; 
}

template<> inline
const Char8 *FieldTraits<StringAttributeMap *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakStringAttributeMapPtr"; 
}

template<> inline
const Char8 *FieldTraits<StringAttributeMap *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdStringAttributeMapPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldContainerFieldSFields */
typedef PointerSField<StringAttributeMap *,
                      RecordedRefCountPolicy  > SFRecStringAttributeMapPtr;
/*! \ingroup GrpSystemFieldContainerFieldSFields */
typedef PointerSField<StringAttributeMap *,
                      UnrecordedRefCountPolicy> SFUnrecStringAttributeMapPtr;
/*! \ingroup GrpSystemFieldContainerFieldSFields */
typedef PointerSField<StringAttributeMap *,
                      WeakRefCountPolicy      > SFWeakStringAttributeMapPtr;
/*! \ingroup GrpSystemFieldContainerFieldSFields */
typedef PointerSField<StringAttributeMap *,
                      NoRefCountPolicy        > SFUncountedStringAttributeMapPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldContainerFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecStringAttributeMapPtr : 
    public PointerSField<StringAttributeMap *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldContainerFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecStringAttributeMapPtr : 
    public PointerSField<StringAttributeMap *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldContainerFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakStringAttributeMapPtr :
    public PointerSField<StringAttributeMap *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldContainerFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedStringAttributeMapPtr :
    public PointerSField<StringAttributeMap *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSTRINGATTRIBUTEMAPFIELDS_H_ */
