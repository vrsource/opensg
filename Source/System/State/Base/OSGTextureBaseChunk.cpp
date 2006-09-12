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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include <boost/bind.hpp>

#include "OSGConfig.h"

#include <OSGGL.h>
#include <OSGGLU.h>
#include <OSGGLEXT.h>
#include <OSGImage.h>

#include "OSGDrawActionBase.h"
#include "OSGDrawEnv.h"

#include "OSGTextureBaseChunk.h"

//#define OSG_DUMP_TEX

OSG_USING_NAMESPACE


/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureBaseChunk
    \ingroup GrpSystemState

See \ref PageSystemTextureChunk for a description.

 */

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

StateChunkClass TextureBaseChunk::_class("Texture", osgMaxTexImages);

volatile UInt16 TextureBaseChunk::_uiChunkCounter = 1;

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                -
\*-------------------------------------------------------------------------*/

void TextureBaseChunk::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/


/*------------- constructors & destructors --------------------------------*/

TextureBaseChunk::TextureBaseChunk(void) :
     Inherited( ),
    _uiChunkId(0)
{
}

TextureBaseChunk::TextureBaseChunk(const TextureBaseChunk &source) :
     Inherited(source),
    _uiChunkId(     0)
{
}

TextureBaseChunk::~TextureBaseChunk(void)
{
}

/*------------------------- Chunk Class Access ---------------------------*/

const StateChunkClass *TextureBaseChunk::getClass(void) const
{
    return &_class;
}

UInt16 TextureBaseChunk::getChunkId(void)
{
    return _uiChunkId;
}

/*------------------------------- Sync -----------------------------------*/

/*! React to field changes.
    Note: this function also handles CubeTexture changes, make sure to keep
    it consistent with the cubeTexture specifics
*/

void TextureBaseChunk::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}


/*----------------------------- onCreate --------------------------------*/

void TextureBaseChunk::onCreate(const TextureBaseChunk *source)
{
    Inherited::onCreate(source);

    if(GlobalSystemState == Startup)
        return;

    _uiChunkId = _uiChunkCounter++;
}

void TextureBaseChunk::onCreateAspect(const TextureBaseChunk *createAspect,
                                      const TextureBaseChunk *source      )
{
    Inherited::onCreateAspect(createAspect, source);

    _uiChunkId = createAspect->_uiChunkId;
}

/*------------------------------ Output ----------------------------------*/

void TextureBaseChunk::dump(      UInt32    OSG_CHECK_ARG(uiIndent),
                            const BitVector OSG_CHECK_ARG(bvFlags )) const
{
    SLOG << "Dump TextureBaseChunk NI" << std::endl;
}


/*------------------------------ State ------------------------------------*/


/*-------------------------- Comparison -----------------------------------*/

/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGTextureBaseChunk.cpp,v 1.1.2.1 2006/05/08 07:27:24 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGTEXTUREBASECHUNK_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTEXTUREBASECHUNK_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTEXTUREBASECHUNKFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

