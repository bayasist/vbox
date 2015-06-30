/* Copyright (c) 2001, Stanford University
	All rights reserved.

	See the file LICENSE.txt for information on redistributing this software. */
	

#include "cr_server.h"
#include "feedbackspu.h"
#include "feedbackspu_proto.h"

void FEEDBACKSPU_APIENTRY feedbackspu_ClipPlane( GLenum plane, const GLdouble * equation )
{
	crStateClipPlane( plane, equation );

	feedback_spu.super.ClipPlane( plane, equation );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Color3f( GLfloat red, GLfloat green, GLfloat blue )
{
	crStateColor3f( red, green, blue );

	feedback_spu.super.Color3f( red, green, blue );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Color3fv( const GLfloat * v )
{
	crStateColor3fv( v );

	feedback_spu.super.Color3fv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Color4f( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha )
{
	crStateColor4f( red, green, blue, alpha );

	feedback_spu.super.Color4f( red, green, blue, alpha );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Color4fv( const GLfloat * v )
{
	crStateColor4fv( v );

	feedback_spu.super.Color4fv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_DepthRange( GLclampd zNear, GLclampd zFar )
{
	crStateDepthRange( zNear, zFar );

	feedback_spu.super.DepthRange( zNear, zFar );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Frustum( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	crStateFrustum( left, right, bottom, top, zNear, zFar );

	feedback_spu.super.Frustum( left, right, bottom, top, zNear, zFar );
}
void FEEDBACKSPU_APIENTRY feedbackspu_LoadIdentity( void )
{
	crStateLoadIdentity(  );

	feedback_spu.super.LoadIdentity(  );
}
void FEEDBACKSPU_APIENTRY feedbackspu_LoadMatrixd( const GLdouble * m )
{
	crStateLoadMatrixd( m );

	feedback_spu.super.LoadMatrixd( m );
}
void FEEDBACKSPU_APIENTRY feedbackspu_LoadMatrixf( const GLfloat * m )
{
	crStateLoadMatrixf( m );

	feedback_spu.super.LoadMatrixf( m );
}
void FEEDBACKSPU_APIENTRY feedbackspu_LoadTransposeMatrixdARB( const GLdouble * m )
{
	crStateLoadTransposeMatrixdARB( m );

	feedback_spu.super.LoadTransposeMatrixdARB( m );
}
void FEEDBACKSPU_APIENTRY feedbackspu_LoadTransposeMatrixfARB( const GLfloat * m )
{
	crStateLoadTransposeMatrixfARB( m );

	feedback_spu.super.LoadTransposeMatrixfARB( m );
}
void FEEDBACKSPU_APIENTRY feedbackspu_MatrixMode( GLenum mode )
{
	crStateMatrixMode( mode );

	feedback_spu.super.MatrixMode( mode );
}
void FEEDBACKSPU_APIENTRY feedbackspu_MultMatrixd( const GLdouble * m )
{
	crStateMultMatrixd( m );

	feedback_spu.super.MultMatrixd( m );
}
void FEEDBACKSPU_APIENTRY feedbackspu_MultMatrixf( const GLfloat * m )
{
	crStateMultMatrixf( m );

	feedback_spu.super.MultMatrixf( m );
}
void FEEDBACKSPU_APIENTRY feedbackspu_MultTransposeMatrixdARB( const GLdouble * m )
{
	crStateMultTransposeMatrixdARB( m );

	feedback_spu.super.MultTransposeMatrixdARB( m );
}
void FEEDBACKSPU_APIENTRY feedbackspu_MultTransposeMatrixfARB( const GLfloat * m )
{
	crStateMultTransposeMatrixfARB( m );

	feedback_spu.super.MultTransposeMatrixfARB( m );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Ortho( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	crStateOrtho( left, right, bottom, top, zNear, zFar );

	feedback_spu.super.Ortho( left, right, bottom, top, zNear, zFar );
}
void FEEDBACKSPU_APIENTRY feedbackspu_PassThrough( GLfloat token )
{
	crStatePassThrough( token );

	feedback_spu.super.PassThrough( token );
}
void FEEDBACKSPU_APIENTRY feedbackspu_PolygonMode( GLenum face, GLenum mode )
{
	crStatePolygonMode( face, mode );

	feedback_spu.super.PolygonMode( face, mode );
}
void FEEDBACKSPU_APIENTRY feedbackspu_PopAttrib( void )
{
	crStatePopAttrib(  );

	feedback_spu.super.PopAttrib(  );
}
void FEEDBACKSPU_APIENTRY feedbackspu_PopMatrix( void )
{
	crStatePopMatrix(  );

	feedback_spu.super.PopMatrix(  );
}
void FEEDBACKSPU_APIENTRY feedbackspu_PushAttrib( GLbitfield mask )
{
	crStatePushAttrib( mask );

	feedback_spu.super.PushAttrib( mask );
}
void FEEDBACKSPU_APIENTRY feedbackspu_PushMatrix( void )
{
	crStatePushMatrix(  );

	feedback_spu.super.PushMatrix(  );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos2d( GLdouble x, GLdouble y )
{
	crStateRasterPos2d( x, y );

	feedback_spu.super.RasterPos2d( x, y );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos2dv( const GLdouble * v )
{
	crStateRasterPos2dv( v );

	feedback_spu.super.RasterPos2dv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos2f( GLfloat x, GLfloat y )
{
	crStateRasterPos2f( x, y );

	feedback_spu.super.RasterPos2f( x, y );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos2fv( const GLfloat * v )
{
	crStateRasterPos2fv( v );

	feedback_spu.super.RasterPos2fv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos2i( GLint x, GLint y )
{
	crStateRasterPos2i( x, y );

	feedback_spu.super.RasterPos2i( x, y );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos2iv( const GLint * v )
{
	crStateRasterPos2iv( v );

	feedback_spu.super.RasterPos2iv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos2s( GLshort x, GLshort y )
{
	crStateRasterPos2s( x, y );

	feedback_spu.super.RasterPos2s( x, y );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos2sv( const GLshort * v )
{
	crStateRasterPos2sv( v );

	feedback_spu.super.RasterPos2sv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos3d( GLdouble x, GLdouble y, GLdouble z )
{
	crStateRasterPos3d( x, y, z );

	feedback_spu.super.RasterPos3d( x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos3dv( const GLdouble * v )
{
	crStateRasterPos3dv( v );

	feedback_spu.super.RasterPos3dv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos3f( GLfloat x, GLfloat y, GLfloat z )
{
	crStateRasterPos3f( x, y, z );

	feedback_spu.super.RasterPos3f( x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos3fv( const GLfloat * v )
{
	crStateRasterPos3fv( v );

	feedback_spu.super.RasterPos3fv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos3i( GLint x, GLint y, GLint z )
{
	crStateRasterPos3i( x, y, z );

	feedback_spu.super.RasterPos3i( x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos3iv( const GLint * v )
{
	crStateRasterPos3iv( v );

	feedback_spu.super.RasterPos3iv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos3s( GLshort x, GLshort y, GLshort z )
{
	crStateRasterPos3s( x, y, z );

	feedback_spu.super.RasterPos3s( x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos3sv( const GLshort * v )
{
	crStateRasterPos3sv( v );

	feedback_spu.super.RasterPos3sv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos4d( GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	crStateRasterPos4d( x, y, z, w );

	feedback_spu.super.RasterPos4d( x, y, z, w );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos4dv( const GLdouble * v )
{
	crStateRasterPos4dv( v );

	feedback_spu.super.RasterPos4dv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos4f( GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	crStateRasterPos4f( x, y, z, w );

	feedback_spu.super.RasterPos4f( x, y, z, w );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos4fv( const GLfloat * v )
{
	crStateRasterPos4fv( v );

	feedback_spu.super.RasterPos4fv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos4i( GLint x, GLint y, GLint z, GLint w )
{
	crStateRasterPos4i( x, y, z, w );

	feedback_spu.super.RasterPos4i( x, y, z, w );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos4iv( const GLint * v )
{
	crStateRasterPos4iv( v );

	feedback_spu.super.RasterPos4iv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos4s( GLshort x, GLshort y, GLshort z, GLshort w )
{
	crStateRasterPos4s( x, y, z, w );

	feedback_spu.super.RasterPos4s( x, y, z, w );
}
void FEEDBACKSPU_APIENTRY feedbackspu_RasterPos4sv( const GLshort * v )
{
	crStateRasterPos4sv( v );

	feedback_spu.super.RasterPos4sv( v );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Rotated( GLdouble angle, GLdouble x, GLdouble y, GLdouble z )
{
	crStateRotated( angle, x, y, z );

	feedback_spu.super.Rotated( angle, x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Rotatef( GLfloat angle, GLfloat x, GLfloat y, GLfloat z )
{
	crStateRotatef( angle, x, y, z );

	feedback_spu.super.Rotatef( angle, x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Scaled( GLdouble x, GLdouble y, GLdouble z )
{
	crStateScaled( x, y, z );

	feedback_spu.super.Scaled( x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Scalef( GLfloat x, GLfloat y, GLfloat z )
{
	crStateScalef( x, y, z );

	feedback_spu.super.Scalef( x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Scissor( GLint x, GLint y, GLsizei width, GLsizei height )
{
	crStateScissor( x, y, width, height );

	feedback_spu.super.Scissor( x, y, width, height );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Translated( GLdouble x, GLdouble y, GLdouble z )
{
	crStateTranslated( x, y, z );

	feedback_spu.super.Translated( x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Translatef( GLfloat x, GLfloat y, GLfloat z )
{
	crStateTranslatef( x, y, z );

	feedback_spu.super.Translatef( x, y, z );
}
void FEEDBACKSPU_APIENTRY feedbackspu_VBoxAttachThread( void )
{
	crStateVBoxAttachThread(  );

	feedback_spu.super.VBoxAttachThread(  );
}
void FEEDBACKSPU_APIENTRY feedbackspu_VBoxDetachThread( void )
{
	crStateVBoxDetachThread(  );

	feedback_spu.super.VBoxDetachThread(  );
}
void FEEDBACKSPU_APIENTRY feedbackspu_Viewport( GLint x, GLint y, GLsizei width, GLsizei height )
{
	crStateViewport( x, y, width, height );

	feedback_spu.super.Viewport( x, y, width, height );
}
