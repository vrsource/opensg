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


#ifndef _OSGSHADERVARIABLEVEC4FFIELDS_H_
#define _OSGSHADERVARIABLEVEC4FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ShaderVariableVec4f;

OSG_GEN_CONTAINERPTR(ShaderVariableVec4f);
/*! \ingroup GrpSystemShaderFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderVariableVec4f *, nsOSG> :
    public FieldTraitsFCPtrBase<ShaderVariableVec4f *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ShaderVariableVec4f *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ShaderVariableVec4f *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderVariableVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec4f *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderVariableVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec4f *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderVariableVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec4f *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderVariableVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec4f *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderVariableVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec4f *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderVariableVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec4f *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderVariableVec4fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableVec4f *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderVariableVec4fPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableVec4f *,
                      RecordedRefCountPolicy, nsOSG  > SFRecShaderVariableVec4fPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableVec4f *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecShaderVariableVec4fPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableVec4f *,
                      WeakRefCountPolicy, nsOSG      > SFWeakShaderVariableVec4fPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableVec4f *,
                      NoRefCountPolicy, nsOSG        > SFUncountedShaderVariableVec4fPtr;


/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableVec4f *,
                      RecordedRefCountPolicy, nsOSG  > MFRecShaderVariableVec4fPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableVec4f *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecShaderVariableVec4fPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableVec4f *,
                      WeakRefCountPolicy, nsOSG      > MFWeakShaderVariableVec4fPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableVec4f *,
                      NoRefCountPolicy, nsOSG        > MFUncountedShaderVariableVec4fPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderVariableVec4fPtr : 
    public PointerSField<ShaderVariableVec4f *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderVariableVec4fPtr : 
    public PointerSField<ShaderVariableVec4f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderVariableVec4fPtr :
    public PointerSField<ShaderVariableVec4f *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderVariableVec4fPtr :
    public PointerSField<ShaderVariableVec4f *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderVariableVec4fPtr :
    public PointerMField<ShaderVariableVec4f *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderVariableVec4fPtr :
    public PointerMField<ShaderVariableVec4f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderVariableVec4fPtr :
    public PointerMField<ShaderVariableVec4f *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderVariableVec4fPtr :
    public PointerMField<ShaderVariableVec4f *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERVARIABLEVEC4FFIELDS_H_ */
