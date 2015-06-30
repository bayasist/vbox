/* Copyright (c) 2001, Stanford University
	All rights reserved.

	See the file LICENSE.txt for information on redistributing this software. */
	

/* DO NOT EDIT - generated by feedback.py */
#include <stdio.h>
#include "cr_spu.h"
#include "feedbackspu.h"
#include "feedbackspu_proto.h"
#include "cr_packfunctions.h"
#include "cr_glstate.h"


static void FEEDBACKSPU_APIENTRY feedbackspu_Rectd( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 )
{
	feedback_spu.super.Rectd( x1, y1, x2, y2 );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Rectdv( const GLdouble * v1, const GLdouble * v2 )
{
	feedback_spu.super.Rectdv( v1, v2 );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Rectf( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 )
{
	feedback_spu.super.Rectf( x1, y1, x2, y2 );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Rectfv( const GLfloat * v1, const GLfloat * v2 )
{
	feedback_spu.super.Rectfv( v1, v2 );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Recti( GLint x1, GLint y1, GLint x2, GLint y2 )
{
	feedback_spu.super.Recti( x1, y1, x2, y2 );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Rectiv( const GLint * v1, const GLint * v2 )
{
	feedback_spu.super.Rectiv( v1, v2 );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Rects( GLshort x1, GLshort y1, GLshort x2, GLshort y2 )
{
	feedback_spu.super.Rects( x1, y1, x2, y2 );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Rectsv( const GLshort * v1, const GLshort * v2 )
{
	feedback_spu.super.Rectsv( v1, v2 );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord1d( GLdouble s )
{
	feedback_spu.super.TexCoord1d( s );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord1dv( const GLdouble * v )
{
	feedback_spu.super.TexCoord1dv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord1f( GLfloat s )
{
	feedback_spu.super.TexCoord1f( s );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord1fv( const GLfloat * v )
{
	feedback_spu.super.TexCoord1fv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord1i( GLint s )
{
	feedback_spu.super.TexCoord1i( s );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord1iv( const GLint * v )
{
	feedback_spu.super.TexCoord1iv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord1s( GLshort s )
{
	feedback_spu.super.TexCoord1s( s );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord1sv( const GLshort * v )
{
	feedback_spu.super.TexCoord1sv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord2d( GLdouble s, GLdouble t )
{
	feedback_spu.super.TexCoord2d( s, t );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord2dv( const GLdouble * v )
{
	feedback_spu.super.TexCoord2dv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord2f( GLfloat s, GLfloat t )
{
	feedback_spu.super.TexCoord2f( s, t );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord2fv( const GLfloat * v )
{
	feedback_spu.super.TexCoord2fv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord2i( GLint s, GLint t )
{
	feedback_spu.super.TexCoord2i( s, t );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord2iv( const GLint * v )
{
	feedback_spu.super.TexCoord2iv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord2s( GLshort s, GLshort t )
{
	feedback_spu.super.TexCoord2s( s, t );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord2sv( const GLshort * v )
{
	feedback_spu.super.TexCoord2sv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord3d( GLdouble s, GLdouble t, GLdouble r )
{
	feedback_spu.super.TexCoord3d( s, t, r );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord3dv( const GLdouble * v )
{
	feedback_spu.super.TexCoord3dv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord3f( GLfloat s, GLfloat t, GLfloat r )
{
	feedback_spu.super.TexCoord3f( s, t, r );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord3fv( const GLfloat * v )
{
	feedback_spu.super.TexCoord3fv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord3i( GLint s, GLint t, GLint r )
{
	feedback_spu.super.TexCoord3i( s, t, r );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord3iv( const GLint * v )
{
	feedback_spu.super.TexCoord3iv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord3s( GLshort s, GLshort t, GLshort r )
{
	feedback_spu.super.TexCoord3s( s, t, r );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord3sv( const GLshort * v )
{
	feedback_spu.super.TexCoord3sv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord4d( GLdouble s, GLdouble t, GLdouble r, GLdouble q )
{
	feedback_spu.super.TexCoord4d( s, t, r, q );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord4dv( const GLdouble * v )
{
	feedback_spu.super.TexCoord4dv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord4f( GLfloat s, GLfloat t, GLfloat r, GLfloat q )
{
	feedback_spu.super.TexCoord4f( s, t, r, q );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord4fv( const GLfloat * v )
{
	feedback_spu.super.TexCoord4fv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord4i( GLint s, GLint t, GLint r, GLint q )
{
	feedback_spu.super.TexCoord4i( s, t, r, q );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord4iv( const GLint * v )
{
	feedback_spu.super.TexCoord4iv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord4s( GLshort s, GLshort t, GLshort r, GLshort q )
{
	feedback_spu.super.TexCoord4s( s, t, r, q );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_TexCoord4sv( const GLshort * v )
{
	feedback_spu.super.TexCoord4sv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex2d( GLdouble x, GLdouble y )
{
	feedback_spu.super.Vertex2d( x, y );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex2dv( const GLdouble * v )
{
	feedback_spu.super.Vertex2dv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex2f( GLfloat x, GLfloat y )
{
	feedback_spu.super.Vertex2f( x, y );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex2fv( const GLfloat * v )
{
	feedback_spu.super.Vertex2fv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex2i( GLint x, GLint y )
{
	feedback_spu.super.Vertex2i( x, y );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex2iv( const GLint * v )
{
	feedback_spu.super.Vertex2iv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex2s( GLshort x, GLshort y )
{
	feedback_spu.super.Vertex2s( x, y );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex2sv( const GLshort * v )
{
	feedback_spu.super.Vertex2sv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex3d( GLdouble x, GLdouble y, GLdouble z )
{
	feedback_spu.super.Vertex3d( x, y, z );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex3dv( const GLdouble * v )
{
	feedback_spu.super.Vertex3dv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex3f( GLfloat x, GLfloat y, GLfloat z )
{
	feedback_spu.super.Vertex3f( x, y, z );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex3fv( const GLfloat * v )
{
	feedback_spu.super.Vertex3fv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex3i( GLint x, GLint y, GLint z )
{
	feedback_spu.super.Vertex3i( x, y, z );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex3iv( const GLint * v )
{
	feedback_spu.super.Vertex3iv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex3s( GLshort x, GLshort y, GLshort z )
{
	feedback_spu.super.Vertex3s( x, y, z );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex3sv( const GLshort * v )
{
	feedback_spu.super.Vertex3sv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex4d( GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	feedback_spu.super.Vertex4d( x, y, z, w );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex4dv( const GLdouble * v )
{
	feedback_spu.super.Vertex4dv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex4f( GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	feedback_spu.super.Vertex4f( x, y, z, w );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex4fv( const GLfloat * v )
{
	feedback_spu.super.Vertex4fv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex4i( GLint x, GLint y, GLint z, GLint w )
{
	feedback_spu.super.Vertex4i( x, y, z, w );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex4iv( const GLint * v )
{
	feedback_spu.super.Vertex4iv( v );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex4s( GLshort x, GLshort y, GLshort z, GLshort w )
{
	feedback_spu.super.Vertex4s( x, y, z, w );
}
static void FEEDBACKSPU_APIENTRY feedbackspu_Vertex4sv( const GLshort * v )
{
	feedback_spu.super.Vertex4sv( v );
}

#define CHANGE( name, func ) crSPUChangeInterface( (void *)&(feedback_spu.self), (void *)feedback_spu.self.name, (void *)((SPUGenericFunction) func) )
#define CHANGESWAP( name, swapfunc, regfunc ) crSPUChangeInterface( (void *)&(feedback_spu.self), (void *)feedback_spu.self.name, (void *)((SPUGenericFunction) (feedback_spu.swap ? swapfunc: regfunc )) )

static void __loadFeedbackAPI( void )
{

	CHANGE( Rectd, crStateFeedbackRectd );
	CHANGE( Rectdv, crStateFeedbackRectdv );
	CHANGE( Rectf, crStateFeedbackRectf );
	CHANGE( Rectfv, crStateFeedbackRectfv );
	CHANGE( Recti, crStateFeedbackRecti );
	CHANGE( Rectiv, crStateFeedbackRectiv );
	CHANGE( Rects, crStateFeedbackRects );
	CHANGE( Rectsv, crStateFeedbackRectsv );
	CHANGE( TexCoord1d, crStateFeedbackTexCoord1d );
	CHANGE( TexCoord1dv, crStateFeedbackTexCoord1dv );
	CHANGE( TexCoord1f, crStateFeedbackTexCoord1f );
	CHANGE( TexCoord1fv, crStateFeedbackTexCoord1fv );
	CHANGE( TexCoord1i, crStateFeedbackTexCoord1i );
	CHANGE( TexCoord1iv, crStateFeedbackTexCoord1iv );
	CHANGE( TexCoord1s, crStateFeedbackTexCoord1s );
	CHANGE( TexCoord1sv, crStateFeedbackTexCoord1sv );
	CHANGE( TexCoord2d, crStateFeedbackTexCoord2d );
	CHANGE( TexCoord2dv, crStateFeedbackTexCoord2dv );
	CHANGE( TexCoord2f, crStateFeedbackTexCoord2f );
	CHANGE( TexCoord2fv, crStateFeedbackTexCoord2fv );
	CHANGE( TexCoord2i, crStateFeedbackTexCoord2i );
	CHANGE( TexCoord2iv, crStateFeedbackTexCoord2iv );
	CHANGE( TexCoord2s, crStateFeedbackTexCoord2s );
	CHANGE( TexCoord2sv, crStateFeedbackTexCoord2sv );
	CHANGE( TexCoord3d, crStateFeedbackTexCoord3d );
	CHANGE( TexCoord3dv, crStateFeedbackTexCoord3dv );
	CHANGE( TexCoord3f, crStateFeedbackTexCoord3f );
	CHANGE( TexCoord3fv, crStateFeedbackTexCoord3fv );
	CHANGE( TexCoord3i, crStateFeedbackTexCoord3i );
	CHANGE( TexCoord3iv, crStateFeedbackTexCoord3iv );
	CHANGE( TexCoord3s, crStateFeedbackTexCoord3s );
	CHANGE( TexCoord3sv, crStateFeedbackTexCoord3sv );
	CHANGE( TexCoord4d, crStateFeedbackTexCoord4d );
	CHANGE( TexCoord4dv, crStateFeedbackTexCoord4dv );
	CHANGE( TexCoord4f, crStateFeedbackTexCoord4f );
	CHANGE( TexCoord4fv, crStateFeedbackTexCoord4fv );
	CHANGE( TexCoord4i, crStateFeedbackTexCoord4i );
	CHANGE( TexCoord4iv, crStateFeedbackTexCoord4iv );
	CHANGE( TexCoord4s, crStateFeedbackTexCoord4s );
	CHANGE( TexCoord4sv, crStateFeedbackTexCoord4sv );
	CHANGE( Vertex2d, crStateFeedbackVertex2d );
	CHANGE( Vertex2dv, crStateFeedbackVertex2dv );
	CHANGE( Vertex2f, crStateFeedbackVertex2f );
	CHANGE( Vertex2fv, crStateFeedbackVertex2fv );
	CHANGE( Vertex2i, crStateFeedbackVertex2i );
	CHANGE( Vertex2iv, crStateFeedbackVertex2iv );
	CHANGE( Vertex2s, crStateFeedbackVertex2s );
	CHANGE( Vertex2sv, crStateFeedbackVertex2sv );
	CHANGE( Vertex3d, crStateFeedbackVertex3d );
	CHANGE( Vertex3dv, crStateFeedbackVertex3dv );
	CHANGE( Vertex3f, crStateFeedbackVertex3f );
	CHANGE( Vertex3fv, crStateFeedbackVertex3fv );
	CHANGE( Vertex3i, crStateFeedbackVertex3i );
	CHANGE( Vertex3iv, crStateFeedbackVertex3iv );
	CHANGE( Vertex3s, crStateFeedbackVertex3s );
	CHANGE( Vertex3sv, crStateFeedbackVertex3sv );
	CHANGE( Vertex4d, crStateFeedbackVertex4d );
	CHANGE( Vertex4dv, crStateFeedbackVertex4dv );
	CHANGE( Vertex4f, crStateFeedbackVertex4f );
	CHANGE( Vertex4fv, crStateFeedbackVertex4fv );
	CHANGE( Vertex4i, crStateFeedbackVertex4i );
	CHANGE( Vertex4iv, crStateFeedbackVertex4iv );
	CHANGE( Vertex4s, crStateFeedbackVertex4s );
	CHANGE( Vertex4sv, crStateFeedbackVertex4sv );

}

static void __loadSelectAPI( void )
{

	CHANGE( RasterPos2d, crStateSelectRasterPos2d );
	CHANGE( RasterPos2dv, crStateSelectRasterPos2dv );
	CHANGE( RasterPos2f, crStateSelectRasterPos2f );
	CHANGE( RasterPos2fv, crStateSelectRasterPos2fv );
	CHANGE( RasterPos2i, crStateSelectRasterPos2i );
	CHANGE( RasterPos2iv, crStateSelectRasterPos2iv );
	CHANGE( RasterPos2s, crStateSelectRasterPos2s );
	CHANGE( RasterPos2sv, crStateSelectRasterPos2sv );
	CHANGE( RasterPos3d, crStateSelectRasterPos3d );
	CHANGE( RasterPos3dv, crStateSelectRasterPos3dv );
	CHANGE( RasterPos3f, crStateSelectRasterPos3f );
	CHANGE( RasterPos3fv, crStateSelectRasterPos3fv );
	CHANGE( RasterPos3i, crStateSelectRasterPos3i );
	CHANGE( RasterPos3iv, crStateSelectRasterPos3iv );
	CHANGE( RasterPos3s, crStateSelectRasterPos3s );
	CHANGE( RasterPos3sv, crStateSelectRasterPos3sv );
	CHANGE( RasterPos4d, crStateSelectRasterPos4d );
	CHANGE( RasterPos4dv, crStateSelectRasterPos4dv );
	CHANGE( RasterPos4f, crStateSelectRasterPos4f );
	CHANGE( RasterPos4fv, crStateSelectRasterPos4fv );
	CHANGE( RasterPos4i, crStateSelectRasterPos4i );
	CHANGE( RasterPos4iv, crStateSelectRasterPos4iv );
	CHANGE( RasterPos4s, crStateSelectRasterPos4s );
	CHANGE( RasterPos4sv, crStateSelectRasterPos4sv );
	CHANGE( Rectd, crStateSelectRectd );
	CHANGE( Rectdv, crStateSelectRectdv );
	CHANGE( Rectf, crStateSelectRectf );
	CHANGE( Rectfv, crStateSelectRectfv );
	CHANGE( Recti, crStateSelectRecti );
	CHANGE( Rectiv, crStateSelectRectiv );
	CHANGE( Rects, crStateSelectRects );
	CHANGE( Rectsv, crStateSelectRectsv );
	CHANGE( TexCoord1d, feedbackspu_TexCoord1d );
	CHANGE( TexCoord1dv, feedbackspu_TexCoord1dv );
	CHANGE( TexCoord1f, feedbackspu_TexCoord1f );
	CHANGE( TexCoord1fv, feedbackspu_TexCoord1fv );
	CHANGE( TexCoord1i, feedbackspu_TexCoord1i );
	CHANGE( TexCoord1iv, feedbackspu_TexCoord1iv );
	CHANGE( TexCoord1s, feedbackspu_TexCoord1s );
	CHANGE( TexCoord1sv, feedbackspu_TexCoord1sv );
	CHANGE( TexCoord2d, feedbackspu_TexCoord2d );
	CHANGE( TexCoord2dv, feedbackspu_TexCoord2dv );
	CHANGE( TexCoord2f, feedbackspu_TexCoord2f );
	CHANGE( TexCoord2fv, feedbackspu_TexCoord2fv );
	CHANGE( TexCoord2i, feedbackspu_TexCoord2i );
	CHANGE( TexCoord2iv, feedbackspu_TexCoord2iv );
	CHANGE( TexCoord2s, feedbackspu_TexCoord2s );
	CHANGE( TexCoord2sv, feedbackspu_TexCoord2sv );
	CHANGE( TexCoord3d, feedbackspu_TexCoord3d );
	CHANGE( TexCoord3dv, feedbackspu_TexCoord3dv );
	CHANGE( TexCoord3f, feedbackspu_TexCoord3f );
	CHANGE( TexCoord3fv, feedbackspu_TexCoord3fv );
	CHANGE( TexCoord3i, feedbackspu_TexCoord3i );
	CHANGE( TexCoord3iv, feedbackspu_TexCoord3iv );
	CHANGE( TexCoord3s, feedbackspu_TexCoord3s );
	CHANGE( TexCoord3sv, feedbackspu_TexCoord3sv );
	CHANGE( TexCoord4d, feedbackspu_TexCoord4d );
	CHANGE( TexCoord4dv, feedbackspu_TexCoord4dv );
	CHANGE( TexCoord4f, feedbackspu_TexCoord4f );
	CHANGE( TexCoord4fv, feedbackspu_TexCoord4fv );
	CHANGE( TexCoord4i, feedbackspu_TexCoord4i );
	CHANGE( TexCoord4iv, feedbackspu_TexCoord4iv );
	CHANGE( TexCoord4s, feedbackspu_TexCoord4s );
	CHANGE( TexCoord4sv, feedbackspu_TexCoord4sv );
	CHANGE( Vertex2d, crStateSelectVertex2d );
	CHANGE( Vertex2dv, crStateSelectVertex2dv );
	CHANGE( Vertex2f, crStateSelectVertex2f );
	CHANGE( Vertex2fv, crStateSelectVertex2fv );
	CHANGE( Vertex2i, crStateSelectVertex2i );
	CHANGE( Vertex2iv, crStateSelectVertex2iv );
	CHANGE( Vertex2s, crStateSelectVertex2s );
	CHANGE( Vertex2sv, crStateSelectVertex2sv );
	CHANGE( Vertex3d, crStateSelectVertex3d );
	CHANGE( Vertex3dv, crStateSelectVertex3dv );
	CHANGE( Vertex3f, crStateSelectVertex3f );
	CHANGE( Vertex3fv, crStateSelectVertex3fv );
	CHANGE( Vertex3i, crStateSelectVertex3i );
	CHANGE( Vertex3iv, crStateSelectVertex3iv );
	CHANGE( Vertex3s, crStateSelectVertex3s );
	CHANGE( Vertex3sv, crStateSelectVertex3sv );
	CHANGE( Vertex4d, crStateSelectVertex4d );
	CHANGE( Vertex4dv, crStateSelectVertex4dv );
	CHANGE( Vertex4f, crStateSelectVertex4f );
	CHANGE( Vertex4fv, crStateSelectVertex4fv );
	CHANGE( Vertex4i, crStateSelectVertex4i );
	CHANGE( Vertex4iv, crStateSelectVertex4iv );
	CHANGE( Vertex4s, crStateSelectVertex4s );
	CHANGE( Vertex4sv, crStateSelectVertex4sv );

}

static void __loadRenderAPI( void )
{

	CHANGE( RasterPos2d, feedbackspu_RasterPos2d );
	CHANGE( RasterPos2dv, feedbackspu_RasterPos2dv );
	CHANGE( RasterPos2f, feedbackspu_RasterPos2f );
	CHANGE( RasterPos2fv, feedbackspu_RasterPos2fv );
	CHANGE( RasterPos2i, feedbackspu_RasterPos2i );
	CHANGE( RasterPos2iv, feedbackspu_RasterPos2iv );
	CHANGE( RasterPos2s, feedbackspu_RasterPos2s );
	CHANGE( RasterPos2sv, feedbackspu_RasterPos2sv );
	CHANGE( RasterPos3d, feedbackspu_RasterPos3d );
	CHANGE( RasterPos3dv, feedbackspu_RasterPos3dv );
	CHANGE( RasterPos3f, feedbackspu_RasterPos3f );
	CHANGE( RasterPos3fv, feedbackspu_RasterPos3fv );
	CHANGE( RasterPos3i, feedbackspu_RasterPos3i );
	CHANGE( RasterPos3iv, feedbackspu_RasterPos3iv );
	CHANGE( RasterPos3s, feedbackspu_RasterPos3s );
	CHANGE( RasterPos3sv, feedbackspu_RasterPos3sv );
	CHANGE( RasterPos4d, feedbackspu_RasterPos4d );
	CHANGE( RasterPos4dv, feedbackspu_RasterPos4dv );
	CHANGE( RasterPos4f, feedbackspu_RasterPos4f );
	CHANGE( RasterPos4fv, feedbackspu_RasterPos4fv );
	CHANGE( RasterPos4i, feedbackspu_RasterPos4i );
	CHANGE( RasterPos4iv, feedbackspu_RasterPos4iv );
	CHANGE( RasterPos4s, feedbackspu_RasterPos4s );
	CHANGE( RasterPos4sv, feedbackspu_RasterPos4sv );
	CHANGE( Rectd, feedbackspu_Rectd );
	CHANGE( Rectdv, feedbackspu_Rectdv );
	CHANGE( Rectf, feedbackspu_Rectf );
	CHANGE( Rectfv, feedbackspu_Rectfv );
	CHANGE( Recti, feedbackspu_Recti );
	CHANGE( Rectiv, feedbackspu_Rectiv );
	CHANGE( Rects, feedbackspu_Rects );
	CHANGE( Rectsv, feedbackspu_Rectsv );
	CHANGE( TexCoord1d, feedbackspu_TexCoord1d );
	CHANGE( TexCoord1dv, feedbackspu_TexCoord1dv );
	CHANGE( TexCoord1f, feedbackspu_TexCoord1f );
	CHANGE( TexCoord1fv, feedbackspu_TexCoord1fv );
	CHANGE( TexCoord1i, feedbackspu_TexCoord1i );
	CHANGE( TexCoord1iv, feedbackspu_TexCoord1iv );
	CHANGE( TexCoord1s, feedbackspu_TexCoord1s );
	CHANGE( TexCoord1sv, feedbackspu_TexCoord1sv );
	CHANGE( TexCoord2d, feedbackspu_TexCoord2d );
	CHANGE( TexCoord2dv, feedbackspu_TexCoord2dv );
	CHANGE( TexCoord2f, feedbackspu_TexCoord2f );
	CHANGE( TexCoord2fv, feedbackspu_TexCoord2fv );
	CHANGE( TexCoord2i, feedbackspu_TexCoord2i );
	CHANGE( TexCoord2iv, feedbackspu_TexCoord2iv );
	CHANGE( TexCoord2s, feedbackspu_TexCoord2s );
	CHANGE( TexCoord2sv, feedbackspu_TexCoord2sv );
	CHANGE( TexCoord3d, feedbackspu_TexCoord3d );
	CHANGE( TexCoord3dv, feedbackspu_TexCoord3dv );
	CHANGE( TexCoord3f, feedbackspu_TexCoord3f );
	CHANGE( TexCoord3fv, feedbackspu_TexCoord3fv );
	CHANGE( TexCoord3i, feedbackspu_TexCoord3i );
	CHANGE( TexCoord3iv, feedbackspu_TexCoord3iv );
	CHANGE( TexCoord3s, feedbackspu_TexCoord3s );
	CHANGE( TexCoord3sv, feedbackspu_TexCoord3sv );
	CHANGE( TexCoord4d, feedbackspu_TexCoord4d );
	CHANGE( TexCoord4dv, feedbackspu_TexCoord4dv );
	CHANGE( TexCoord4f, feedbackspu_TexCoord4f );
	CHANGE( TexCoord4fv, feedbackspu_TexCoord4fv );
	CHANGE( TexCoord4i, feedbackspu_TexCoord4i );
	CHANGE( TexCoord4iv, feedbackspu_TexCoord4iv );
	CHANGE( TexCoord4s, feedbackspu_TexCoord4s );
	CHANGE( TexCoord4sv, feedbackspu_TexCoord4sv );
	CHANGE( Vertex2d, feedbackspu_Vertex2d );
	CHANGE( Vertex2dv, feedbackspu_Vertex2dv );
	CHANGE( Vertex2f, feedbackspu_Vertex2f );
	CHANGE( Vertex2fv, feedbackspu_Vertex2fv );
	CHANGE( Vertex2i, feedbackspu_Vertex2i );
	CHANGE( Vertex2iv, feedbackspu_Vertex2iv );
	CHANGE( Vertex2s, feedbackspu_Vertex2s );
	CHANGE( Vertex2sv, feedbackspu_Vertex2sv );
	CHANGE( Vertex3d, feedbackspu_Vertex3d );
	CHANGE( Vertex3dv, feedbackspu_Vertex3dv );
	CHANGE( Vertex3f, feedbackspu_Vertex3f );
	CHANGE( Vertex3fv, feedbackspu_Vertex3fv );
	CHANGE( Vertex3i, feedbackspu_Vertex3i );
	CHANGE( Vertex3iv, feedbackspu_Vertex3iv );
	CHANGE( Vertex3s, feedbackspu_Vertex3s );
	CHANGE( Vertex3sv, feedbackspu_Vertex3sv );
	CHANGE( Vertex4d, feedbackspu_Vertex4d );
	CHANGE( Vertex4dv, feedbackspu_Vertex4dv );
	CHANGE( Vertex4f, feedbackspu_Vertex4f );
	CHANGE( Vertex4fv, feedbackspu_Vertex4fv );
	CHANGE( Vertex4i, feedbackspu_Vertex4i );
	CHANGE( Vertex4iv, feedbackspu_Vertex4iv );
	CHANGE( Vertex4s, feedbackspu_Vertex4s );
	CHANGE( Vertex4sv, feedbackspu_Vertex4sv );

}


static GLint FEEDBACKSPU_APIENTRY feedbackspu_RenderMode ( GLenum mode )
{
	feedback_spu.render_mode = mode;

	switch (mode) {
		case GL_FEEDBACK:
			/*printf("Switching to Feedback API\n");*/
			__loadFeedbackAPI( );
			break;
		case GL_SELECT:
			/*printf("Switching to Selection API\n");*/
			__loadSelectAPI( );
			break;
		case GL_RENDER:
			/*printf("Switching to Render API\n");*/
			__loadRenderAPI( );
			break;
	}

	return crStateRenderMode( mode );
}

static void FEEDBACKSPU_APIENTRY feedbackspu_Begin ( GLenum mode )
{
	if (feedback_spu.render_mode == GL_FEEDBACK)
		crStateFeedbackBegin( mode );
	else if (feedback_spu.render_mode == GL_SELECT)
		crStateSelectBegin( mode );
	else
	{
		crStateBegin( mode );
		feedback_spu.super.Begin( mode );
	}
}

static void FEEDBACKSPU_APIENTRY feedbackspu_End ( void )
{
	if (feedback_spu.render_mode == GL_FEEDBACK)
		crStateFeedbackEnd( );
	else if (feedback_spu.render_mode == GL_SELECT)
		crStateSelectEnd( );
	else
	{
		crStateEnd( );
		feedback_spu.super.End( );
	}
}

static void FEEDBACKSPU_APIENTRY feedbackspu_Bitmap ( GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap )
{
	crStateBitmap( width, height, xorig, yorig, xmove, ymove, bitmap );

	if (feedback_spu.render_mode == GL_FEEDBACK)
		crStateFeedbackBitmap( width, height, xorig, yorig, xmove, ymove, bitmap );
	else if (feedback_spu.render_mode == GL_SELECT)
		crStateSelectBitmap( width, height, xorig, yorig, xmove, ymove, bitmap );
	else
		feedback_spu.super.Bitmap( width, height, xorig, yorig, xmove, ymove, bitmap );
}

static void FEEDBACKSPU_APIENTRY feedbackspu_CopyPixels( GLint x, GLint y, GLsizei width, GLsizei height, GLenum type )
{
	if (feedback_spu.render_mode == GL_FEEDBACK)
		crStateFeedbackCopyPixels( x, y, width, height, type );
	else if (feedback_spu.render_mode == GL_SELECT)
		crStateSelectCopyPixels( x, y, width, height, type );
	else
		feedback_spu.super.CopyPixels( x, y, width, height, type );
}

static void FEEDBACKSPU_APIENTRY feedbackspu_DrawPixels( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels )
{
	if (feedback_spu.render_mode == GL_FEEDBACK)
		crStateFeedbackDrawPixels( width, height, format, type, pixels );
	else if (feedback_spu.render_mode == GL_SELECT)
		crStateSelectDrawPixels( width, height, format, type, pixels );
	else
		feedback_spu.super.DrawPixels( width, height, format, type, pixels );
}

static void FEEDBACKSPU_APIENTRY feedbackspu_GetBooleanv( GLenum pname, GLboolean *params )

{
	if (pname == GL_FEEDBACK_BUFFER_SIZE ||
	    pname == GL_FEEDBACK_BUFFER_TYPE ||
	    pname == GL_SELECTION_BUFFER_SIZE)
		crStateFeedbackGetBooleanv( pname, params );
	else
	if (pname == GL_VIEWPORT && feedback_spu.default_viewport)
		crStateGetBooleanv( pname, params );
	else
		feedback_spu.super.GetBooleanv( pname, params );
}

static void FEEDBACKSPU_APIENTRY feedbackspu_GetDoublev( GLenum pname, GLdouble *params )

{
	if (pname == GL_FEEDBACK_BUFFER_SIZE ||
	    pname == GL_FEEDBACK_BUFFER_TYPE ||
	    pname == GL_SELECTION_BUFFER_SIZE)
		crStateFeedbackGetDoublev( pname, params );
	else
	if (pname == GL_VIEWPORT && feedback_spu.default_viewport)
		crStateGetDoublev( pname, params );
	else
		feedback_spu.super.GetDoublev( pname, params );
}

static void FEEDBACKSPU_APIENTRY feedbackspu_GetFloatv( GLenum pname, GLfloat *params )

{
	if (pname == GL_FEEDBACK_BUFFER_SIZE ||
	    pname == GL_FEEDBACK_BUFFER_TYPE ||
	    pname == GL_SELECTION_BUFFER_SIZE)
		crStateFeedbackGetFloatv( pname, params );
	else
	if (pname == GL_VIEWPORT && feedback_spu.default_viewport)
		crStateGetFloatv( pname, params );
	else
		feedback_spu.super.GetFloatv( pname, params );
}

static void FEEDBACKSPU_APIENTRY feedbackspu_GetIntegerv( GLenum pname, GLint *params )

{
	if (pname == GL_FEEDBACK_BUFFER_SIZE ||
	    pname == GL_FEEDBACK_BUFFER_TYPE ||
	    pname == GL_SELECTION_BUFFER_SIZE)
		crStateFeedbackGetIntegerv( pname, params );
	else
	if (pname == GL_VIEWPORT && feedback_spu.default_viewport)
		crStateGetIntegerv( pname, params );
	else
		feedback_spu.super.GetIntegerv( pname, params );
}

SPUNamedFunctionTable _cr_feedback_table[] = {

	{ "ClipPlane", (SPUGenericFunction) feedbackspu_ClipPlane }, 
	{ "Color3f", (SPUGenericFunction) feedbackspu_Color3f }, 
	{ "Color3fv", (SPUGenericFunction) feedbackspu_Color3fv }, 
	{ "Color4f", (SPUGenericFunction) feedbackspu_Color4f }, 
	{ "Color4fv", (SPUGenericFunction) feedbackspu_Color4fv }, 
	{ "CreateContext", (SPUGenericFunction) feedbackspu_CreateContext }, 
	{ "DepthRange", (SPUGenericFunction) feedbackspu_DepthRange }, 
	{ "DestroyContext", (SPUGenericFunction) feedbackspu_DestroyContext }, 
	{ "Frustum", (SPUGenericFunction) feedbackspu_Frustum }, 
	{ "LoadIdentity", (SPUGenericFunction) feedbackspu_LoadIdentity }, 
	{ "LoadMatrixd", (SPUGenericFunction) feedbackspu_LoadMatrixd }, 
	{ "LoadMatrixf", (SPUGenericFunction) feedbackspu_LoadMatrixf }, 
	{ "LoadTransposeMatrixdARB", (SPUGenericFunction) feedbackspu_LoadTransposeMatrixdARB }, 
	{ "LoadTransposeMatrixfARB", (SPUGenericFunction) feedbackspu_LoadTransposeMatrixfARB }, 
	{ "MakeCurrent", (SPUGenericFunction) feedbackspu_MakeCurrent }, 
	{ "MatrixMode", (SPUGenericFunction) feedbackspu_MatrixMode }, 
	{ "MultMatrixd", (SPUGenericFunction) feedbackspu_MultMatrixd }, 
	{ "MultMatrixf", (SPUGenericFunction) feedbackspu_MultMatrixf }, 
	{ "MultTransposeMatrixdARB", (SPUGenericFunction) feedbackspu_MultTransposeMatrixdARB }, 
	{ "MultTransposeMatrixfARB", (SPUGenericFunction) feedbackspu_MultTransposeMatrixfARB }, 
	{ "Ortho", (SPUGenericFunction) feedbackspu_Ortho }, 
	{ "PassThrough", (SPUGenericFunction) feedbackspu_PassThrough }, 
	{ "PolygonMode", (SPUGenericFunction) feedbackspu_PolygonMode }, 
	{ "PopAttrib", (SPUGenericFunction) feedbackspu_PopAttrib }, 
	{ "PopMatrix", (SPUGenericFunction) feedbackspu_PopMatrix }, 
	{ "PushAttrib", (SPUGenericFunction) feedbackspu_PushAttrib }, 
	{ "PushMatrix", (SPUGenericFunction) feedbackspu_PushMatrix }, 
	{ "RasterPos2d", (SPUGenericFunction) feedbackspu_RasterPos2d }, 
	{ "RasterPos2dv", (SPUGenericFunction) feedbackspu_RasterPos2dv }, 
	{ "RasterPos2f", (SPUGenericFunction) feedbackspu_RasterPos2f }, 
	{ "RasterPos2fv", (SPUGenericFunction) feedbackspu_RasterPos2fv }, 
	{ "RasterPos2i", (SPUGenericFunction) feedbackspu_RasterPos2i }, 
	{ "RasterPos2iv", (SPUGenericFunction) feedbackspu_RasterPos2iv }, 
	{ "RasterPos2s", (SPUGenericFunction) feedbackspu_RasterPos2s }, 
	{ "RasterPos2sv", (SPUGenericFunction) feedbackspu_RasterPos2sv }, 
	{ "RasterPos3d", (SPUGenericFunction) feedbackspu_RasterPos3d }, 
	{ "RasterPos3dv", (SPUGenericFunction) feedbackspu_RasterPos3dv }, 
	{ "RasterPos3f", (SPUGenericFunction) feedbackspu_RasterPos3f }, 
	{ "RasterPos3fv", (SPUGenericFunction) feedbackspu_RasterPos3fv }, 
	{ "RasterPos3i", (SPUGenericFunction) feedbackspu_RasterPos3i }, 
	{ "RasterPos3iv", (SPUGenericFunction) feedbackspu_RasterPos3iv }, 
	{ "RasterPos3s", (SPUGenericFunction) feedbackspu_RasterPos3s }, 
	{ "RasterPos3sv", (SPUGenericFunction) feedbackspu_RasterPos3sv }, 
	{ "RasterPos4d", (SPUGenericFunction) feedbackspu_RasterPos4d }, 
	{ "RasterPos4dv", (SPUGenericFunction) feedbackspu_RasterPos4dv }, 
	{ "RasterPos4f", (SPUGenericFunction) feedbackspu_RasterPos4f }, 
	{ "RasterPos4fv", (SPUGenericFunction) feedbackspu_RasterPos4fv }, 
	{ "RasterPos4i", (SPUGenericFunction) feedbackspu_RasterPos4i }, 
	{ "RasterPos4iv", (SPUGenericFunction) feedbackspu_RasterPos4iv }, 
	{ "RasterPos4s", (SPUGenericFunction) feedbackspu_RasterPos4s }, 
	{ "RasterPos4sv", (SPUGenericFunction) feedbackspu_RasterPos4sv }, 
	{ "Rotated", (SPUGenericFunction) feedbackspu_Rotated }, 
	{ "Rotatef", (SPUGenericFunction) feedbackspu_Rotatef }, 
	{ "Scaled", (SPUGenericFunction) feedbackspu_Scaled }, 
	{ "Scalef", (SPUGenericFunction) feedbackspu_Scalef }, 
	{ "Scissor", (SPUGenericFunction) feedbackspu_Scissor }, 
	{ "Translated", (SPUGenericFunction) feedbackspu_Translated }, 
	{ "Translatef", (SPUGenericFunction) feedbackspu_Translatef }, 
	{ "VBoxAttachThread", (SPUGenericFunction) feedbackspu_VBoxAttachThread }, 
	{ "VBoxCreateContext", (SPUGenericFunction) feedbackspu_VBoxCreateContext }, 
	{ "VBoxDetachThread", (SPUGenericFunction) feedbackspu_VBoxDetachThread }, 
	{ "Viewport", (SPUGenericFunction) feedbackspu_Viewport }, 

	{ "GetBooleanv", (SPUGenericFunction) feedbackspu_GetBooleanv },
	{ "GetDoublev", (SPUGenericFunction) feedbackspu_GetDoublev },
	{ "GetFloatv", (SPUGenericFunction) feedbackspu_GetFloatv },
	{ "GetIntegerv", (SPUGenericFunction) feedbackspu_GetIntegerv },
	{ "FeedbackBuffer", (SPUGenericFunction) crStateFeedbackBuffer },
	{ "SelectBuffer", (SPUGenericFunction) crStateSelectBuffer },
	{ "InitNames", (SPUGenericFunction) crStateInitNames },
	{ "LoadName", (SPUGenericFunction) crStateLoadName },
	{ "PushName", (SPUGenericFunction) crStatePushName },
	{ "PopName", (SPUGenericFunction) crStatePopName },
	{ "Begin", (SPUGenericFunction) feedbackspu_Begin },
	{ "End", (SPUGenericFunction) feedbackspu_End },
	{ "Bitmap", (SPUGenericFunction) feedbackspu_Bitmap },
	{ "CopyPixels", (SPUGenericFunction) feedbackspu_CopyPixels },
	{ "DrawPixels", (SPUGenericFunction) feedbackspu_DrawPixels },
	{ "TexCoord1d", (SPUGenericFunction) feedbackspu_TexCoord1d },
	{ "TexCoord1dv", (SPUGenericFunction) feedbackspu_TexCoord1dv },
	{ "TexCoord1f", (SPUGenericFunction) feedbackspu_TexCoord1f },
	{ "TexCoord1fv", (SPUGenericFunction) feedbackspu_TexCoord1fv },
	{ "TexCoord1s", (SPUGenericFunction) feedbackspu_TexCoord1s },
	{ "TexCoord1sv", (SPUGenericFunction) feedbackspu_TexCoord1sv },
	{ "TexCoord1i", (SPUGenericFunction) feedbackspu_TexCoord1i },
	{ "TexCoord1iv", (SPUGenericFunction) feedbackspu_TexCoord1iv },
	{ "TexCoord2d", (SPUGenericFunction) feedbackspu_TexCoord2d },
	{ "TexCoord2dv", (SPUGenericFunction) feedbackspu_TexCoord2dv },
	{ "TexCoord2f", (SPUGenericFunction) feedbackspu_TexCoord2f },
	{ "TexCoord2fv", (SPUGenericFunction) feedbackspu_TexCoord2fv },
	{ "TexCoord2s", (SPUGenericFunction) feedbackspu_TexCoord2s },
	{ "TexCoord2sv", (SPUGenericFunction) feedbackspu_TexCoord2sv },
	{ "TexCoord2i", (SPUGenericFunction) feedbackspu_TexCoord2i },
	{ "TexCoord2iv", (SPUGenericFunction) feedbackspu_TexCoord2iv },
	{ "TexCoord3d", (SPUGenericFunction) feedbackspu_TexCoord3d },
	{ "TexCoord3dv", (SPUGenericFunction) feedbackspu_TexCoord3dv },
	{ "TexCoord3f", (SPUGenericFunction) feedbackspu_TexCoord3f },
	{ "TexCoord3fv", (SPUGenericFunction) feedbackspu_TexCoord3fv },
	{ "TexCoord3s", (SPUGenericFunction) feedbackspu_TexCoord3s },
	{ "TexCoord3sv", (SPUGenericFunction) feedbackspu_TexCoord3sv },
	{ "TexCoord3i", (SPUGenericFunction) feedbackspu_TexCoord3i },
	{ "TexCoord3iv", (SPUGenericFunction) feedbackspu_TexCoord3iv },
	{ "TexCoord4d", (SPUGenericFunction) feedbackspu_TexCoord4d },
	{ "TexCoord4dv", (SPUGenericFunction) feedbackspu_TexCoord4dv },
	{ "TexCoord4f", (SPUGenericFunction) feedbackspu_TexCoord4f },
	{ "TexCoord4fv", (SPUGenericFunction) feedbackspu_TexCoord4fv },
	{ "TexCoord4s", (SPUGenericFunction) feedbackspu_TexCoord4s },
	{ "TexCoord4sv", (SPUGenericFunction) feedbackspu_TexCoord4sv },
	{ "TexCoord4i", (SPUGenericFunction) feedbackspu_TexCoord4i },
	{ "TexCoord4iv", (SPUGenericFunction) feedbackspu_TexCoord4iv },
	{ "RenderMode", (SPUGenericFunction) feedbackspu_RenderMode },
	{ NULL, NULL }
};
