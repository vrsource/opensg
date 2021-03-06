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


#ifndef _OSGORTHOGRAPHICCAMERAFIELDS_H_
#define _OSGORTHOGRAPHICCAMERAFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class OrthographicCamera;

OSG_GEN_CONTAINERPTR(OrthographicCamera);
/*! \ingroup GrpWindowCameraFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<OrthographicCamera *, nsOSG> :
    public FieldTraitsFCPtrBase<OrthographicCamera *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<OrthographicCamera *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<OrthographicCamera *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCamera *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCamera *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCamera *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCamera *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCamera *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCamera *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakOrthographicCameraPtr"; 
}

template<> inline
const Char8 *FieldTraits<OrthographicCamera *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdOrthographicCameraPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<OrthographicCamera *,
                      RecordedRefCountPolicy, nsOSG  > SFRecOrthographicCameraPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<OrthographicCamera *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecOrthographicCameraPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<OrthographicCamera *,
                      WeakRefCountPolicy, nsOSG      > SFWeakOrthographicCameraPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<OrthographicCamera *,
                      NoRefCountPolicy, nsOSG        > SFUncountedOrthographicCameraPtr;


/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<OrthographicCamera *,
                      RecordedRefCountPolicy, nsOSG  > MFRecOrthographicCameraPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<OrthographicCamera *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecOrthographicCameraPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<OrthographicCamera *,
                      WeakRefCountPolicy, nsOSG      > MFWeakOrthographicCameraPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<OrthographicCamera *,
                      NoRefCountPolicy, nsOSG        > MFUncountedOrthographicCameraPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecOrthographicCameraPtr : 
    public PointerSField<OrthographicCamera *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecOrthographicCameraPtr : 
    public PointerSField<OrthographicCamera *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakOrthographicCameraPtr :
    public PointerSField<OrthographicCamera *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedOrthographicCameraPtr :
    public PointerSField<OrthographicCamera *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecOrthographicCameraPtr :
    public PointerMField<OrthographicCamera *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecOrthographicCameraPtr :
    public PointerMField<OrthographicCamera *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakOrthographicCameraPtr :
    public PointerMField<OrthographicCamera *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedOrthographicCameraPtr :
    public PointerMField<OrthographicCamera *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGORTHOGRAPHICCAMERAFIELDS_H_ */
