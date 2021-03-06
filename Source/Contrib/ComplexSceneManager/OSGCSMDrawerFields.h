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


#ifndef _OSGCSMDRAWERFIELDS_H_
#define _OSGCSMDRAWERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CSMDrawer;

OSG_GEN_CONTAINERPTR(CSMDrawer);
/*! \ingroup GrpContribCSMFieldTraits
    \ingroup GrpLibOSGContribCSM
 */
template <>
struct FieldTraits<CSMDrawer *, nsOSG> :
    public FieldTraitsFCPtrBase<CSMDrawer *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CSMDrawer *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CSMDrawer *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCSMDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMDrawer *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCSMDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMDrawer *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCSMDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMDrawer *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCSMDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMDrawer *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCSMDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMDrawer *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCSMDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMDrawer *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCSMDrawerPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMDrawer *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCSMDrawerPtr"; 
}


/*! \ingroup GrpContribCSMFieldTraits
 */
template <>
struct FieldTraits<CSMDrawer *, nsOSG + 1> : 
    public FieldTraitsFCPtrBase<CSMDrawer *, nsOSG + 1>
{
  private:

    static  DataType                                _type;

  public:

    static const bool bIsPointerField = true;

    typedef FieldTraits<CSMDrawer *, nsOSG + 1> Self;


    enum             { Convertible = Self::NotConvertible };
    
    static OSG_CONTRIBCSM_DLLMAPPING
                 DataType &getType (void);

    static const Char8    *getSName(void) 
    {
        return "SFParentCSMDrawerPtr"; 
    }

    static const Char8    *getMName(void) 
    { 
        return "MFParentCSMDrawerPtr"; 
    }
};

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMDrawer *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCSMDrawerPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMDrawer *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCSMDrawerPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMDrawer *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCSMDrawerPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMDrawer *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCSMDrawerPtr;


/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMDrawer *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCSMDrawerPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMDrawer *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCSMDrawerPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMDrawer *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCSMDrawerPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMDrawer *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCSMDrawerPtr;



/*! \ingroup GrpContribCSMFieldSFields */
typedef ParentPointerSField<
          CSMDrawer *, 
          NoRefCountPolicy,
          nsOSG + 1    > SFParentCSMDrawerPtr;


#else // these are the doxygen hacks

/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFRecCSMDrawerPtr : 
    public PointerSField<CSMDrawer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUnrecCSMDrawerPtr : 
    public PointerSField<CSMDrawer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFWeakCSMDrawerPtr :
    public PointerSField<CSMDrawer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUncountedCSMDrawerPtr :
    public PointerSField<CSMDrawer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFRecCSMDrawerPtr :
    public PointerMField<CSMDrawer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUnrecCSMDrawerPtr :
    public PointerMField<CSMDrawer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFWeakCSMDrawerPtr :
    public PointerMField<CSMDrawer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUncountedCSMDrawerPtr :
    public PointerMField<CSMDrawer *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFParentCSMDrawerPtr :
    public ParentPointerSField<
        CSMDrawer *, 
        NoRefCountPolicy,
        nsOSG + 1    > {};

#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCSMDRAWERFIELDS_H_ */
