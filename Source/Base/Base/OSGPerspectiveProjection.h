/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2003 by the OpenSG Forum                   *
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

#ifndef _OSGPERSPECTIVEPROJECTION_H_
#define _OSGPERSPECTIVEPROJECTION_H_

#include "OSGBaseTypes.h"
#include "OSGProjection.h"

OSG_BEGIN_NAMESPACE

/*! \ingroup GrpBaseBase
    \ingroup GrpBaseBaseMathObj
    \ingroup GrpLibOSGBase
    \nohierarchy
 */

class OSG_BASE_DLLMAPPING PerspectiveProjection : public Projection
{
    /*==========================  PUBLIC  =================================*/

  public:

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PerspectiveProjection();

    PerspectiveProjection(
                            Real32 fov,
                            Real32 aspect,
                            Real32 zNear,
                            Real32 zFar
                         );

    PerspectiveProjection(const PerspectiveProjection& rhs);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    virtual ~PerspectiveProjection();

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Operators                                 */
    /*! \{                                                                 */
    PerspectiveProjection& operator=(const PerspectiveProjection& rhs);
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Get/Set                                   */
    /*! \{                                                                 */
    virtual Type        getType         () const;

    Real32              getFov          () const;
    void                setFov          (Real32 fov);

    Real32              getAspect       () const;
    void                setAspect       (Real32 aspect);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Operations                                */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Class Specific                            */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    /*==========================  PRIVATE  ================================*/

  private:
    Real32  _fov;
    Real32  _aspect;
};

OSG_END_NAMESPACE

#include "OSGPerspectiveProjection.inl"

#endif // _OSGPERSPECTIVEPROJECTION_H_
