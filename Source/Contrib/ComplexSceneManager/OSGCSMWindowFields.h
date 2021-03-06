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


#ifndef _OSGCSMWINDOWFIELDS_H_
#define _OSGCSMWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CSMWindow;

OSG_GEN_CONTAINERPTR(CSMWindow);
/*! \ingroup GrpContribCSMFieldTraits
    \ingroup GrpLibOSGContribCSM
 */
template <>
struct FieldTraits<CSMWindow *, nsOSG> :
    public FieldTraitsFCPtrBase<CSMWindow *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CSMWindow *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCSMWindowPtr"; 
}


/*! \ingroup GrpContribCSMFieldTraits
 */
template <>
struct FieldTraits<CSMWindow *, nsOSG + 1> :
    public FieldTraitsFCPtrBase<CSMWindow *, nsOSG + 1>
{
  private:

  public:
    typedef FieldTraits<CSMWindow *, nsOSG + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG + 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG + 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG + 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildCSMWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMWindow *, nsOSG + 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildCSMWindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMWindow *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCSMWindowPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMWindow *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCSMWindowPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMWindow *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCSMWindowPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMWindow *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCSMWindowPtr;


/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMWindow *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCSMWindowPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMWindow *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCSMWindowPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMWindow *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCSMWindowPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMWindow *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCSMWindowPtr;



/*! \ingroup GrpContribCSMFieldSFields */
typedef ChildPointerSField<
          CSMWindow *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > SFUnrecChildCSMWindowPtr;


/*! \ingroup GrpContribCSMFieldMFields */
typedef ChildPointerMField<
          CSMWindow *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > MFUnrecChildCSMWindowPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFRecCSMWindowPtr : 
    public PointerSField<CSMWindow *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUnrecCSMWindowPtr : 
    public PointerSField<CSMWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFWeakCSMWindowPtr :
    public PointerSField<CSMWindow *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUncountedCSMWindowPtr :
    public PointerSField<CSMWindow *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFRecCSMWindowPtr :
    public PointerMField<CSMWindow *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUnrecCSMWindowPtr :
    public PointerMField<CSMWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFWeakCSMWindowPtr :
    public PointerMField<CSMWindow *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUncountedCSMWindowPtr :
    public PointerMField<CSMWindow *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUnrecChildCSMWindowPtr :
    public ChildPointerSField<
        CSMWindow *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUnrecChildCSMWindowPtr :
    public ChildPointerMField<
        CSMWindow *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCSMWINDOWFIELDS_H_ */
