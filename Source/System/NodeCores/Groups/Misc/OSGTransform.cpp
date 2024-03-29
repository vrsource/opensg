/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGGL.h"

#include "OSGIntersectAction.h"

#include "OSGRenderAction.h"
#include "OSGTransform.h"
#include "OSGVolume.h"

OSG_USING_NAMESPACE

// Documentation for this class is emited in the
// OSGTransformBase.cpp file.
// To modify it, please change the .fcd file (OSGTransform.fcd) and
// regenerate the base file.

/*-------------------------------------------------------------------------*/
/*                               Sync                                      */

void Transform::changed(ConstFieldMaskArg whichField, 
                        UInt32            origin,
                        BitVector         details)
{
    if(whichField & MatrixFieldMask)
    {
        invalidateVolume();
    }

    Inherited::changed(whichField, origin, details);
}

/*-------------------------------------------------------------------------*/
/*                               Helper                                    */

void Transform::accumulateMatrix(Matrix &result)
{
    result.mult(getMatrix());
}

void Transform::adjustVolume(Volume &volume)
{
    volume.transform(_sfMatrix.getValue());
}

/*-------------------------------------------------------------------------*/
/*                                Dump                                     */

void Transform::dump(      UInt32    uiIndent, 
                     const BitVector bvFlags ) const
{
   Inherited::dump(uiIndent, bvFlags);
}

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

Transform::Transform(void) :
    Inherited()
{
    _sfMatrix.getValue().setIdentity();
}

Transform::Transform(const Transform &source) :
    Inherited(source)
{
}

/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

Transform::~Transform(void)
{
}


/*-------------------------------------------------------------------------*/
/*                                Render                                   */

Action::ResultE Transform::renderEnter(Action *action)
{
    RenderAction *pAction = 
        dynamic_cast<RenderAction *>(action);

    pAction->pushVisibility();

    pAction->pushMatrix(this->getMatrix());

    return Action::Continue;
}

Action::ResultE Transform::renderLeave(Action *action)
{
    RenderAction *pAction = 
        dynamic_cast<RenderAction *>(action);

    pAction->popVisibility();

    pAction->popMatrix();

    return Action::Continue;
}

/*-------------------------------------------------------------------------*/
/*                            Intersect                                    */

Action::ResultE Transform::intersectEnter(Action *action)
{
    // Use parent class for trivial reject
    if(Inherited::intersectEnter(action) == Action::Skip)
        return Action::Skip;
    
    // Need to check children
    IntersectAction *ia = dynamic_cast<IntersectAction *>(action);
    Matrix           m  = this->getMatrix();

    m.invert();
    
    Pnt3f pos;
    Vec3f dir;

    m.multFull(ia->getLine().getPosition (), pos);
    m.mult    (ia->getLine().getDirection(), dir);
    
    Real32 length = dir.length();

    if(length < TypeTraits<Real32>::getDefaultEps())
        SWARNING << "Transform::intersectEnter: Near-zero scale!" << std::endl;

    ia->setLine(Line(pos, dir), ia->getMaxDist());
    ia->scale  (length                          );
    
    return Action::Continue; 
}

Action::ResultE Transform::intersectLeave(Action *action)
{
    IntersectAction *ia = dynamic_cast<IntersectAction *>(action);
    Matrix           m  = this->getMatrix();
    
    Pnt3f pos;
    Vec3f dir;

    m.multFull(ia->getLine().getPosition (), pos);
    m.mult    (ia->getLine().getDirection(), dir);
    
    ia->setLine(Line(pos, dir), ia->getMaxDist());
    ia->scale(dir.length());

    return Action::Continue;
}
/*-------------------------------------------------------------------------*/
/*                                Init                                     */

void Transform::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
        IntersectAction::registerEnterDefault( 
            getClassType(), 
            reinterpret_cast<Action::Callback>(&Transform::intersectEnter));
        IntersectAction::registerLeaveDefault( 
            getClassType(), 
            reinterpret_cast<Action::Callback>(&Transform::intersectLeave));
       
        RenderAction::registerEnterDefault(
            Transform::getClassType(), 
            reinterpret_cast<Action::Callback>(&Transform::renderEnter));
        RenderAction::registerLeaveDefault(
            Transform::getClassType(), 
            reinterpret_cast<Action::Callback>(&Transform::renderLeave));
    }
}

