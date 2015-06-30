/* Copyright (c) 2001, Stanford University
	All rights reserved.

	See the file LICENSE.txt for information on redistributing this software. */
	
#define GL_GLEXT_PROTOTYPES
#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include "chromium.h"
#include "stub.h"
#include "dri_glx.h"

void VBOXGLTAG(glAccum)( GLenum op, GLfloat value );

void VBOXGLTAG(glAccum)( GLenum op, GLfloat value )
{
	glim.Accum( op, value );
}

void VBOXGLTAG(glActiveStencilFaceEXT)( GLenum face );

void VBOXGLTAG(glActiveStencilFaceEXT)( GLenum face )
{
	glim.ActiveStencilFaceEXT( face );
}

void VBOXGLTAG(glActiveTextureARB)( GLenum texture );

void VBOXGLTAG(glActiveTextureARB)( GLenum texture )
{
	glim.ActiveTextureARB( texture );
}

void VBOXGLTAG(glAlphaFunc)( GLenum func, GLclampf ref );

void VBOXGLTAG(glAlphaFunc)( GLenum func, GLclampf ref )
{
	glim.AlphaFunc( func, ref );
}

GLboolean VBOXGLTAG(glAreProgramsResidentNV)( GLsizei n, const GLuint * ids, GLboolean * residences );

GLboolean VBOXGLTAG(glAreProgramsResidentNV)( GLsizei n, const GLuint * ids, GLboolean * residences )
{
	return  glim.AreProgramsResidentNV( n, ids, residences );
}

GLboolean VBOXGLTAG(glAreTexturesResident)( GLsizei n, const GLuint * textures, GLboolean * residences );

GLboolean VBOXGLTAG(glAreTexturesResident)( GLsizei n, const GLuint * textures, GLboolean * residences )
{
	return  glim.AreTexturesResident( n, textures, residences );
}

void VBOXGLTAG(glArrayElement)( GLint i );

void VBOXGLTAG(glArrayElement)( GLint i )
{
	glim.ArrayElement( i );
}

void VBOXGLTAG(glAttachShader)( GLuint program, GLuint shader );

void VBOXGLTAG(glAttachShader)( GLuint program, GLuint shader )
{
	glim.AttachShader( program, shader );
}

void VBOXGLTAG(glBarrierCreateCR)( GLuint name, GLuint count );

void VBOXGLTAG(glBarrierCreateCR)( GLuint name, GLuint count )
{
	glim.BarrierCreateCR( name, count );
}

void VBOXGLTAG(glBarrierDestroyCR)( GLuint name );

void VBOXGLTAG(glBarrierDestroyCR)( GLuint name )
{
	glim.BarrierDestroyCR( name );
}

void VBOXGLTAG(glBarrierExecCR)( GLuint name );

void VBOXGLTAG(glBarrierExecCR)( GLuint name )
{
	glim.BarrierExecCR( name );
}

void VBOXGLTAG(glBegin)( GLenum mode );

void VBOXGLTAG(glBegin)( GLenum mode )
{
	glim.Begin( mode );
}

void VBOXGLTAG(glBeginQueryARB)( GLenum target, GLuint id );

void VBOXGLTAG(glBeginQueryARB)( GLenum target, GLuint id )
{
	glim.BeginQueryARB( target, id );
}

void VBOXGLTAG(glBindAttribLocation)( GLuint program, GLuint index, const char * name );

void VBOXGLTAG(glBindAttribLocation)( GLuint program, GLuint index, const char * name )
{
	glim.BindAttribLocation( program, index, name );
}

void VBOXGLTAG(glBindBufferARB)( GLenum target, GLuint buffer );

void VBOXGLTAG(glBindBufferARB)( GLenum target, GLuint buffer )
{
	glim.BindBufferARB( target, buffer );
}

void VBOXGLTAG(glBindFramebufferEXT)( GLenum target, GLuint framebuffer );

void VBOXGLTAG(glBindFramebufferEXT)( GLenum target, GLuint framebuffer )
{
	glim.BindFramebufferEXT( target, framebuffer );
}

void VBOXGLTAG(glBindProgramARB)( GLenum target, GLuint program );

void VBOXGLTAG(glBindProgramARB)( GLenum target, GLuint program )
{
	glim.BindProgramARB( target, program );
}

void VBOXGLTAG(glBindProgramNV)( GLenum target, GLuint id );

void VBOXGLTAG(glBindProgramNV)( GLenum target, GLuint id )
{
	glim.BindProgramNV( target, id );
}

void VBOXGLTAG(glBindRenderbufferEXT)( GLenum target, GLuint renderbuffer );

void VBOXGLTAG(glBindRenderbufferEXT)( GLenum target, GLuint renderbuffer )
{
	glim.BindRenderbufferEXT( target, renderbuffer );
}

void VBOXGLTAG(glBindTexture)( GLenum target, GLuint texture );

void VBOXGLTAG(glBindTexture)( GLenum target, GLuint texture )
{
	glim.BindTexture( target, texture );
}

void VBOXGLTAG(glBitmap)( GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap );

void VBOXGLTAG(glBitmap)( GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap )
{
	glim.Bitmap( width, height, xorig, yorig, xmove, ymove, bitmap );
}

void VBOXGLTAG(glBlendColorEXT)( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );

void VBOXGLTAG(glBlendColorEXT)( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha )
{
	glim.BlendColorEXT( red, green, blue, alpha );
}

void VBOXGLTAG(glBlendEquationEXT)( GLenum mode );

void VBOXGLTAG(glBlendEquationEXT)( GLenum mode )
{
	glim.BlendEquationEXT( mode );
}

void VBOXGLTAG(glBlendEquationSeparate)( GLenum modeRGB, GLenum modeAlpha );

void VBOXGLTAG(glBlendEquationSeparate)( GLenum modeRGB, GLenum modeAlpha )
{
	glim.BlendEquationSeparate( modeRGB, modeAlpha );
}

void VBOXGLTAG(glBlendFunc)( GLenum sfactor, GLenum dfactor );

void VBOXGLTAG(glBlendFunc)( GLenum sfactor, GLenum dfactor )
{
	glim.BlendFunc( sfactor, dfactor );
}

void VBOXGLTAG(glBlendFuncSeparateEXT)( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorA, GLenum dfactorA );

void VBOXGLTAG(glBlendFuncSeparateEXT)( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorA, GLenum dfactorA )
{
	glim.BlendFuncSeparateEXT( sfactorRGB, dfactorRGB, sfactorA, dfactorA );
}

void VBOXGLTAG(glBlitFramebufferEXT)( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter );

void VBOXGLTAG(glBlitFramebufferEXT)( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter )
{
	glim.BlitFramebufferEXT( srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter );
}

void VBOXGLTAG(glBoundsInfoCR)( const CRrecti * bounds, const GLbyte * payload, GLint len, GLint num_opcodes );

void VBOXGLTAG(glBoundsInfoCR)( const CRrecti * bounds, const GLbyte * payload, GLint len, GLint num_opcodes )
{
	glim.BoundsInfoCR( bounds, payload, len, num_opcodes );
}

void VBOXGLTAG(glBufferDataARB)( GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage );

void VBOXGLTAG(glBufferDataARB)( GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage )
{
	glim.BufferDataARB( target, size, data, usage );
}

void VBOXGLTAG(glBufferSubDataARB)( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data );

void VBOXGLTAG(glBufferSubDataARB)( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data )
{
	glim.BufferSubDataARB( target, offset, size, data );
}

void VBOXGLTAG(glCallList)( GLuint list );

void VBOXGLTAG(glCallList)( GLuint list )
{
	glim.CallList( list );
}

void VBOXGLTAG(glCallLists)( GLsizei n, GLenum type, const GLvoid * lists );

void VBOXGLTAG(glCallLists)( GLsizei n, GLenum type, const GLvoid * lists )
{
	glim.CallLists( n, type, lists );
}

GLenum VBOXGLTAG(glCheckFramebufferStatusEXT)( GLenum target );

GLenum VBOXGLTAG(glCheckFramebufferStatusEXT)( GLenum target )
{
	return  glim.CheckFramebufferStatusEXT( target );
}

void VBOXGLTAG(glChromiumParameterfCR)( GLenum target, GLfloat value );

void VBOXGLTAG(glChromiumParameterfCR)( GLenum target, GLfloat value )
{
	glim.ChromiumParameterfCR( target, value );
}

void VBOXGLTAG(glChromiumParameteriCR)( GLenum target, GLint value );

void VBOXGLTAG(glChromiumParameteriCR)( GLenum target, GLint value )
{
	glim.ChromiumParameteriCR( target, value );
}

void VBOXGLTAG(glChromiumParametervCR)( GLenum target, GLenum type, GLsizei count, const GLvoid * values );

void VBOXGLTAG(glChromiumParametervCR)( GLenum target, GLenum type, GLsizei count, const GLvoid * values )
{
	glim.ChromiumParametervCR( target, type, count, values );
}

void VBOXGLTAG(glClear)( GLbitfield mask );

void VBOXGLTAG(glClear)( GLbitfield mask )
{
	glim.Clear( mask );
}

void VBOXGLTAG(glClearAccum)( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );

void VBOXGLTAG(glClearAccum)( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha )
{
	glim.ClearAccum( red, green, blue, alpha );
}

void VBOXGLTAG(glClearColor)( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );

void VBOXGLTAG(glClearColor)( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha )
{
	glim.ClearColor( red, green, blue, alpha );
}

void VBOXGLTAG(glClearDepth)( GLclampd depth );

void VBOXGLTAG(glClearDepth)( GLclampd depth )
{
	glim.ClearDepth( depth );
}

void VBOXGLTAG(glClearIndex)( GLfloat c );

void VBOXGLTAG(glClearIndex)( GLfloat c )
{
	glim.ClearIndex( c );
}

void VBOXGLTAG(glClearStencil)( GLint s );

void VBOXGLTAG(glClearStencil)( GLint s )
{
	glim.ClearStencil( s );
}

void VBOXGLTAG(glClientActiveTextureARB)( GLenum texture );

void VBOXGLTAG(glClientActiveTextureARB)( GLenum texture )
{
	glim.ClientActiveTextureARB( texture );
}

void VBOXGLTAG(glClipPlane)( GLenum plane, const GLdouble * equation );

void VBOXGLTAG(glClipPlane)( GLenum plane, const GLdouble * equation )
{
	glim.ClipPlane( plane, equation );
}

void VBOXGLTAG(glColor3b)( GLbyte red, GLbyte green, GLbyte blue );

void VBOXGLTAG(glColor3b)( GLbyte red, GLbyte green, GLbyte blue )
{
	glim.Color3b( red, green, blue );
}

void VBOXGLTAG(glColor3bv)( const GLbyte * v );

void VBOXGLTAG(glColor3bv)( const GLbyte * v )
{
	glim.Color3bv( v );
}

void VBOXGLTAG(glColor3d)( GLdouble red, GLdouble green, GLdouble blue );

void VBOXGLTAG(glColor3d)( GLdouble red, GLdouble green, GLdouble blue )
{
	glim.Color3d( red, green, blue );
}

void VBOXGLTAG(glColor3dv)( const GLdouble * v );

void VBOXGLTAG(glColor3dv)( const GLdouble * v )
{
	glim.Color3dv( v );
}

void VBOXGLTAG(glColor3f)( GLfloat red, GLfloat green, GLfloat blue );

void VBOXGLTAG(glColor3f)( GLfloat red, GLfloat green, GLfloat blue )
{
	glim.Color3f( red, green, blue );
}

void VBOXGLTAG(glColor3fv)( const GLfloat * v );

void VBOXGLTAG(glColor3fv)( const GLfloat * v )
{
	glim.Color3fv( v );
}

void VBOXGLTAG(glColor3i)( GLint red, GLint green, GLint blue );

void VBOXGLTAG(glColor3i)( GLint red, GLint green, GLint blue )
{
	glim.Color3i( red, green, blue );
}

void VBOXGLTAG(glColor3iv)( const GLint * v );

void VBOXGLTAG(glColor3iv)( const GLint * v )
{
	glim.Color3iv( v );
}

void VBOXGLTAG(glColor3s)( GLshort red, GLshort green, GLshort blue );

void VBOXGLTAG(glColor3s)( GLshort red, GLshort green, GLshort blue )
{
	glim.Color3s( red, green, blue );
}

void VBOXGLTAG(glColor3sv)( const GLshort * v );

void VBOXGLTAG(glColor3sv)( const GLshort * v )
{
	glim.Color3sv( v );
}

void VBOXGLTAG(glColor3ub)( GLubyte red, GLubyte green, GLubyte blue );

void VBOXGLTAG(glColor3ub)( GLubyte red, GLubyte green, GLubyte blue )
{
	glim.Color3ub( red, green, blue );
}

void VBOXGLTAG(glColor3ubv)( const GLubyte * v );

void VBOXGLTAG(glColor3ubv)( const GLubyte * v )
{
	glim.Color3ubv( v );
}

void VBOXGLTAG(glColor3ui)( GLuint red, GLuint green, GLuint blue );

void VBOXGLTAG(glColor3ui)( GLuint red, GLuint green, GLuint blue )
{
	glim.Color3ui( red, green, blue );
}

void VBOXGLTAG(glColor3uiv)( const GLuint * v );

void VBOXGLTAG(glColor3uiv)( const GLuint * v )
{
	glim.Color3uiv( v );
}

void VBOXGLTAG(glColor3us)( GLushort red, GLushort green, GLushort blue );

void VBOXGLTAG(glColor3us)( GLushort red, GLushort green, GLushort blue )
{
	glim.Color3us( red, green, blue );
}

void VBOXGLTAG(glColor3usv)( const GLushort * v );

void VBOXGLTAG(glColor3usv)( const GLushort * v )
{
	glim.Color3usv( v );
}

void VBOXGLTAG(glColor4b)( GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha );

void VBOXGLTAG(glColor4b)( GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha )
{
	glim.Color4b( red, green, blue, alpha );
}

void VBOXGLTAG(glColor4bv)( const GLbyte * v );

void VBOXGLTAG(glColor4bv)( const GLbyte * v )
{
	glim.Color4bv( v );
}

void VBOXGLTAG(glColor4d)( GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha );

void VBOXGLTAG(glColor4d)( GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha )
{
	glim.Color4d( red, green, blue, alpha );
}

void VBOXGLTAG(glColor4dv)( const GLdouble * v );

void VBOXGLTAG(glColor4dv)( const GLdouble * v )
{
	glim.Color4dv( v );
}

void VBOXGLTAG(glColor4f)( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );

void VBOXGLTAG(glColor4f)( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha )
{
	glim.Color4f( red, green, blue, alpha );
}

void VBOXGLTAG(glColor4fv)( const GLfloat * v );

void VBOXGLTAG(glColor4fv)( const GLfloat * v )
{
	glim.Color4fv( v );
}

void VBOXGLTAG(glColor4i)( GLint red, GLint green, GLint blue, GLint alpha );

void VBOXGLTAG(glColor4i)( GLint red, GLint green, GLint blue, GLint alpha )
{
	glim.Color4i( red, green, blue, alpha );
}

void VBOXGLTAG(glColor4iv)( const GLint * v );

void VBOXGLTAG(glColor4iv)( const GLint * v )
{
	glim.Color4iv( v );
}

void VBOXGLTAG(glColor4s)( GLshort red, GLshort green, GLshort blue, GLshort alpha );

void VBOXGLTAG(glColor4s)( GLshort red, GLshort green, GLshort blue, GLshort alpha )
{
	glim.Color4s( red, green, blue, alpha );
}

void VBOXGLTAG(glColor4sv)( const GLshort * v );

void VBOXGLTAG(glColor4sv)( const GLshort * v )
{
	glim.Color4sv( v );
}

void VBOXGLTAG(glColor4ub)( GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha );

void VBOXGLTAG(glColor4ub)( GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha )
{
	glim.Color4ub( red, green, blue, alpha );
}

void VBOXGLTAG(glColor4ubv)( const GLubyte * v );

void VBOXGLTAG(glColor4ubv)( const GLubyte * v )
{
	glim.Color4ubv( v );
}

void VBOXGLTAG(glColor4ui)( GLuint red, GLuint green, GLuint blue, GLuint alpha );

void VBOXGLTAG(glColor4ui)( GLuint red, GLuint green, GLuint blue, GLuint alpha )
{
	glim.Color4ui( red, green, blue, alpha );
}

void VBOXGLTAG(glColor4uiv)( const GLuint * v );

void VBOXGLTAG(glColor4uiv)( const GLuint * v )
{
	glim.Color4uiv( v );
}

void VBOXGLTAG(glColor4us)( GLushort red, GLushort green, GLushort blue, GLushort alpha );

void VBOXGLTAG(glColor4us)( GLushort red, GLushort green, GLushort blue, GLushort alpha )
{
	glim.Color4us( red, green, blue, alpha );
}

void VBOXGLTAG(glColor4usv)( const GLushort * v );

void VBOXGLTAG(glColor4usv)( const GLushort * v )
{
	glim.Color4usv( v );
}

void VBOXGLTAG(glColorMask)( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );

void VBOXGLTAG(glColorMask)( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha )
{
	glim.ColorMask( red, green, blue, alpha );
}

void VBOXGLTAG(glColorMaterial)( GLenum face, GLenum mode );

void VBOXGLTAG(glColorMaterial)( GLenum face, GLenum mode )
{
	glim.ColorMaterial( face, mode );
}

void VBOXGLTAG(glColorPointer)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glColorPointer)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.ColorPointer( size, type, stride, pointer );
}

void VBOXGLTAG(glCombinerInputNV)( GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage );

void VBOXGLTAG(glCombinerInputNV)( GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage )
{
	glim.CombinerInputNV( stage, portion, variable, input, mapping, componentUsage );
}

void VBOXGLTAG(glCombinerOutputNV)( GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum );

void VBOXGLTAG(glCombinerOutputNV)( GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum )
{
	glim.CombinerOutputNV( stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum );
}

void VBOXGLTAG(glCombinerParameterfNV)( GLenum pname, GLfloat param );

void VBOXGLTAG(glCombinerParameterfNV)( GLenum pname, GLfloat param )
{
	glim.CombinerParameterfNV( pname, param );
}

void VBOXGLTAG(glCombinerParameterfvNV)( GLenum pname, const GLfloat * params );

void VBOXGLTAG(glCombinerParameterfvNV)( GLenum pname, const GLfloat * params )
{
	glim.CombinerParameterfvNV( pname, params );
}

void VBOXGLTAG(glCombinerParameteriNV)( GLenum pname, GLint param );

void VBOXGLTAG(glCombinerParameteriNV)( GLenum pname, GLint param )
{
	glim.CombinerParameteriNV( pname, param );
}

void VBOXGLTAG(glCombinerParameterivNV)( GLenum pname, const GLint * params );

void VBOXGLTAG(glCombinerParameterivNV)( GLenum pname, const GLint * params )
{
	glim.CombinerParameterivNV( pname, params );
}

void VBOXGLTAG(glCombinerStageParameterfvNV)( GLenum stage, GLenum pname, const GLfloat * params );

void VBOXGLTAG(glCombinerStageParameterfvNV)( GLenum stage, GLenum pname, const GLfloat * params )
{
	glim.CombinerStageParameterfvNV( stage, pname, params );
}

void VBOXGLTAG(glCompileShader)( GLuint shader );

void VBOXGLTAG(glCompileShader)( GLuint shader )
{
	glim.CompileShader( shader );
}

void VBOXGLTAG(glCompressedTexImage1DARB)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imagesize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexImage1DARB)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imagesize, const GLvoid * data )
{
	glim.CompressedTexImage1DARB( target, level, internalFormat, width, border, imagesize, data );
}

void VBOXGLTAG(glCompressedTexImage2DARB)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imagesize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexImage2DARB)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imagesize, const GLvoid * data )
{
	glim.CompressedTexImage2DARB( target, level, internalFormat, width, height, border, imagesize, data );
}

void VBOXGLTAG(glCompressedTexImage3DARB)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imagesize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexImage3DARB)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imagesize, const GLvoid * data )
{
	glim.CompressedTexImage3DARB( target, level, internalFormat, width, height, depth, border, imagesize, data );
}

void VBOXGLTAG(glCompressedTexSubImage1DARB)( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imagesize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexSubImage1DARB)( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imagesize, const GLvoid * data )
{
	glim.CompressedTexSubImage1DARB( target, level, xoffset, width, format, imagesize, data );
}

void VBOXGLTAG(glCompressedTexSubImage2DARB)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imagesize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexSubImage2DARB)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imagesize, const GLvoid * data )
{
	glim.CompressedTexSubImage2DARB( target, level, xoffset, yoffset, width, height, format, imagesize, data );
}

void VBOXGLTAG(glCompressedTexSubImage3DARB)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imagesize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexSubImage3DARB)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imagesize, const GLvoid * data )
{
	glim.CompressedTexSubImage3DARB( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imagesize, data );
}

void VBOXGLTAG(glCopyPixels)( GLint x, GLint y, GLsizei width, GLsizei height, GLenum type );

void VBOXGLTAG(glCopyPixels)( GLint x, GLint y, GLsizei width, GLsizei height, GLenum type )
{
	glim.CopyPixels( x, y, width, height, type );
}

void VBOXGLTAG(glCopyTexImage1D)( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border );

void VBOXGLTAG(glCopyTexImage1D)( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border )
{
	glim.CopyTexImage1D( target, level, internalFormat, x, y, width, border );
}

void VBOXGLTAG(glCopyTexImage2D)( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );

void VBOXGLTAG(glCopyTexImage2D)( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border )
{
	glim.CopyTexImage2D( target, level, internalFormat, x, y, width, height, border );
}

void VBOXGLTAG(glCopyTexSubImage1D)( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );

void VBOXGLTAG(glCopyTexSubImage1D)( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width )
{
	glim.CopyTexSubImage1D( target, level, xoffset, x, y, width );
}

void VBOXGLTAG(glCopyTexSubImage2D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );

void VBOXGLTAG(glCopyTexSubImage2D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	glim.CopyTexSubImage2D( target, level, xoffset, yoffset, x, y, width, height );
}

void VBOXGLTAG(glCopyTexSubImage3D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );

void VBOXGLTAG(glCopyTexSubImage3D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	glim.CopyTexSubImage3D( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}

GLuint VBOXGLTAG(glCreateProgram)( void );

GLuint VBOXGLTAG(glCreateProgram)( void )
{
	return  glim.CreateProgram(  );
}

GLuint VBOXGLTAG(glCreateShader)( GLenum type );

GLuint VBOXGLTAG(glCreateShader)( GLenum type )
{
	return  glim.CreateShader( type );
}

void VBOXGLTAG(glCullFace)( GLenum mode );

void VBOXGLTAG(glCullFace)( GLenum mode )
{
	glim.CullFace( mode );
}

void VBOXGLTAG(glDeleteBuffersARB)( GLsizei n, const GLuint * buffer );

void VBOXGLTAG(glDeleteBuffersARB)( GLsizei n, const GLuint * buffer )
{
	glim.DeleteBuffersARB( n, buffer );
}

void VBOXGLTAG(glDeleteFencesNV)( GLsizei n, const GLuint * fences );

void VBOXGLTAG(glDeleteFencesNV)( GLsizei n, const GLuint * fences )
{
	glim.DeleteFencesNV( n, fences );
}

void VBOXGLTAG(glDeleteFramebuffersEXT)( GLsizei n, const GLuint * framebuffers );

void VBOXGLTAG(glDeleteFramebuffersEXT)( GLsizei n, const GLuint * framebuffers )
{
	glim.DeleteFramebuffersEXT( n, framebuffers );
}

void VBOXGLTAG(glDeleteLists)( GLuint list, GLsizei range );

void VBOXGLTAG(glDeleteLists)( GLuint list, GLsizei range )
{
	glim.DeleteLists( list, range );
}

void VBOXGLTAG(glDeleteObjectARB)( VBoxGLhandleARB obj );

void VBOXGLTAG(glDeleteObjectARB)( VBoxGLhandleARB obj )
{
	glim.DeleteObjectARB( obj );
}

void VBOXGLTAG(glDeleteProgram)( GLuint program );

void VBOXGLTAG(glDeleteProgram)( GLuint program )
{
	glim.DeleteProgram( program );
}

void VBOXGLTAG(glDeleteProgramsARB)( GLsizei n, const GLuint * programs );

void VBOXGLTAG(glDeleteProgramsARB)( GLsizei n, const GLuint * programs )
{
	glim.DeleteProgramsARB( n, programs );
}

void VBOXGLTAG(glDeleteQueriesARB)( GLsizei n, const GLuint * ids );

void VBOXGLTAG(glDeleteQueriesARB)( GLsizei n, const GLuint * ids )
{
	glim.DeleteQueriesARB( n, ids );
}

void VBOXGLTAG(glDeleteRenderbuffersEXT)( GLsizei n, const GLuint * renderbuffers );

void VBOXGLTAG(glDeleteRenderbuffersEXT)( GLsizei n, const GLuint * renderbuffers )
{
	glim.DeleteRenderbuffersEXT( n, renderbuffers );
}

void VBOXGLTAG(glDeleteShader)( GLuint shader );

void VBOXGLTAG(glDeleteShader)( GLuint shader )
{
	glim.DeleteShader( shader );
}

void VBOXGLTAG(glDeleteTextures)( GLsizei n, const GLuint * textures );

void VBOXGLTAG(glDeleteTextures)( GLsizei n, const GLuint * textures )
{
	glim.DeleteTextures( n, textures );
}

void VBOXGLTAG(glDepthFunc)( GLenum func );

void VBOXGLTAG(glDepthFunc)( GLenum func )
{
	glim.DepthFunc( func );
}

void VBOXGLTAG(glDepthMask)( GLboolean flag );

void VBOXGLTAG(glDepthMask)( GLboolean flag )
{
	glim.DepthMask( flag );
}

void VBOXGLTAG(glDepthRange)( GLclampd zNear, GLclampd zFar );

void VBOXGLTAG(glDepthRange)( GLclampd zNear, GLclampd zFar )
{
	glim.DepthRange( zNear, zFar );
}

void VBOXGLTAG(glDetachShader)( GLuint program, GLuint shader );

void VBOXGLTAG(glDetachShader)( GLuint program, GLuint shader )
{
	glim.DetachShader( program, shader );
}

void VBOXGLTAG(glDisable)( GLenum cap );

void VBOXGLTAG(glDisable)( GLenum cap )
{
	glim.Disable( cap );
}

void VBOXGLTAG(glDisableClientState)( GLenum array );

void VBOXGLTAG(glDisableClientState)( GLenum array )
{
	glim.DisableClientState( array );
}

void VBOXGLTAG(glDisableVertexAttribArrayARB)( GLuint index );

void VBOXGLTAG(glDisableVertexAttribArrayARB)( GLuint index )
{
	glim.DisableVertexAttribArrayARB( index );
}

void VBOXGLTAG(glDrawArrays)( GLenum mode, GLint first, GLsizei count );

void VBOXGLTAG(glDrawArrays)( GLenum mode, GLint first, GLsizei count )
{
	glim.DrawArrays( mode, first, count );
}

void VBOXGLTAG(glDrawBuffer)( GLenum mode );

void VBOXGLTAG(glDrawBuffer)( GLenum mode )
{
	glim.DrawBuffer( mode );
}

void VBOXGLTAG(glDrawBuffers)( GLsizei n, const GLenum* bufs );

void VBOXGLTAG(glDrawBuffers)( GLsizei n, const GLenum* bufs )
{
	glim.DrawBuffers( n, bufs );
}

void VBOXGLTAG(glDrawElements)( GLenum mode, GLsizei count, GLenum type, const GLvoid * indices );

void VBOXGLTAG(glDrawElements)( GLenum mode, GLsizei count, GLenum type, const GLvoid * indices )
{
	glim.DrawElements( mode, count, type, indices );
}

void VBOXGLTAG(glDrawPixels)( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glDrawPixels)( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.DrawPixels( width, height, format, type, pixels );
}

void VBOXGLTAG(glDrawRangeElements)( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices );

void VBOXGLTAG(glDrawRangeElements)( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices )
{
	glim.DrawRangeElements( mode, start, end, count, type, indices );
}

void VBOXGLTAG(glEdgeFlag)( GLboolean flag );

void VBOXGLTAG(glEdgeFlag)( GLboolean flag )
{
	glim.EdgeFlag( flag );
}

void VBOXGLTAG(glEdgeFlagPointer)( GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glEdgeFlagPointer)( GLsizei stride, const GLvoid * pointer )
{
	glim.EdgeFlagPointer( stride, pointer );
}

void VBOXGLTAG(glEdgeFlagv)( const GLboolean * flag );

void VBOXGLTAG(glEdgeFlagv)( const GLboolean * flag )
{
	glim.EdgeFlagv( flag );
}

void VBOXGLTAG(glEnable)( GLenum cap );

void VBOXGLTAG(glEnable)( GLenum cap )
{
	glim.Enable( cap );
}

void VBOXGLTAG(glEnableClientState)( GLenum array );

void VBOXGLTAG(glEnableClientState)( GLenum array )
{
	glim.EnableClientState( array );
}

void VBOXGLTAG(glEnableVertexAttribArrayARB)( GLuint index );

void VBOXGLTAG(glEnableVertexAttribArrayARB)( GLuint index )
{
	glim.EnableVertexAttribArrayARB( index );
}

void VBOXGLTAG(glEnd)( void );

void VBOXGLTAG(glEnd)( void )
{
	glim.End(  );
}

void VBOXGLTAG(glEndList)( void );

void VBOXGLTAG(glEndList)( void )
{
	glim.EndList(  );
}

void VBOXGLTAG(glEndQueryARB)( GLenum target );

void VBOXGLTAG(glEndQueryARB)( GLenum target )
{
	glim.EndQueryARB( target );
}

void VBOXGLTAG(glEvalCoord1d)( GLdouble u );

void VBOXGLTAG(glEvalCoord1d)( GLdouble u )
{
	glim.EvalCoord1d( u );
}

void VBOXGLTAG(glEvalCoord1dv)( const GLdouble * u );

void VBOXGLTAG(glEvalCoord1dv)( const GLdouble * u )
{
	glim.EvalCoord1dv( u );
}

void VBOXGLTAG(glEvalCoord1f)( GLfloat u );

void VBOXGLTAG(glEvalCoord1f)( GLfloat u )
{
	glim.EvalCoord1f( u );
}

void VBOXGLTAG(glEvalCoord1fv)( const GLfloat * u );

void VBOXGLTAG(glEvalCoord1fv)( const GLfloat * u )
{
	glim.EvalCoord1fv( u );
}

void VBOXGLTAG(glEvalCoord2d)( GLdouble u, GLdouble v );

void VBOXGLTAG(glEvalCoord2d)( GLdouble u, GLdouble v )
{
	glim.EvalCoord2d( u, v );
}

void VBOXGLTAG(glEvalCoord2dv)( const GLdouble * u );

void VBOXGLTAG(glEvalCoord2dv)( const GLdouble * u )
{
	glim.EvalCoord2dv( u );
}

void VBOXGLTAG(glEvalCoord2f)( GLfloat u, GLfloat v );

void VBOXGLTAG(glEvalCoord2f)( GLfloat u, GLfloat v )
{
	glim.EvalCoord2f( u, v );
}

void VBOXGLTAG(glEvalCoord2fv)( const GLfloat * u );

void VBOXGLTAG(glEvalCoord2fv)( const GLfloat * u )
{
	glim.EvalCoord2fv( u );
}

void VBOXGLTAG(glEvalMesh1)( GLenum mode, GLint i1, GLint i2 );

void VBOXGLTAG(glEvalMesh1)( GLenum mode, GLint i1, GLint i2 )
{
	glim.EvalMesh1( mode, i1, i2 );
}

void VBOXGLTAG(glEvalMesh2)( GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2 );

void VBOXGLTAG(glEvalMesh2)( GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2 )
{
	glim.EvalMesh2( mode, i1, i2, j1, j2 );
}

void VBOXGLTAG(glEvalPoint1)( GLint i );

void VBOXGLTAG(glEvalPoint1)( GLint i )
{
	glim.EvalPoint1( i );
}

void VBOXGLTAG(glEvalPoint2)( GLint i, GLint j );

void VBOXGLTAG(glEvalPoint2)( GLint i, GLint j )
{
	glim.EvalPoint2( i, j );
}

void VBOXGLTAG(glExecuteProgramNV)( GLenum target, GLuint id, const GLfloat * params );

void VBOXGLTAG(glExecuteProgramNV)( GLenum target, GLuint id, const GLfloat * params )
{
	glim.ExecuteProgramNV( target, id, params );
}

void VBOXGLTAG(glFeedbackBuffer)( GLsizei size, GLenum type, GLfloat * buffer );

void VBOXGLTAG(glFeedbackBuffer)( GLsizei size, GLenum type, GLfloat * buffer )
{
	glim.FeedbackBuffer( size, type, buffer );
}

void VBOXGLTAG(glFinalCombinerInputNV)( GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage );

void VBOXGLTAG(glFinalCombinerInputNV)( GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage )
{
	glim.FinalCombinerInputNV( variable, input, mapping, componentUsage );
}

void VBOXGLTAG(glFinish)( void );

void VBOXGLTAG(glFinish)( void )
{
	glim.Finish(  );
}

void VBOXGLTAG(glFinishFenceNV)( GLuint fence );

void VBOXGLTAG(glFinishFenceNV)( GLuint fence )
{
	glim.FinishFenceNV( fence );
}

void VBOXGLTAG(glFlush)( void );

void VBOXGLTAG(glFlush)( void )
{
	glim.Flush(  );
}

void VBOXGLTAG(glFlushVertexArrayRangeNV)( void );

void VBOXGLTAG(glFlushVertexArrayRangeNV)( void )
{
	glim.FlushVertexArrayRangeNV(  );
}

void VBOXGLTAG(glFogCoordPointerEXT)( GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glFogCoordPointerEXT)( GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.FogCoordPointerEXT( type, stride, pointer );
}

void VBOXGLTAG(glFogCoorddEXT)( GLdouble coord );

void VBOXGLTAG(glFogCoorddEXT)( GLdouble coord )
{
	glim.FogCoorddEXT( coord );
}

void VBOXGLTAG(glFogCoorddvEXT)( const GLdouble * coord );

void VBOXGLTAG(glFogCoorddvEXT)( const GLdouble * coord )
{
	glim.FogCoorddvEXT( coord );
}

void VBOXGLTAG(glFogCoordfEXT)( GLfloat coord );

void VBOXGLTAG(glFogCoordfEXT)( GLfloat coord )
{
	glim.FogCoordfEXT( coord );
}

void VBOXGLTAG(glFogCoordfvEXT)( const GLfloat * coord );

void VBOXGLTAG(glFogCoordfvEXT)( const GLfloat * coord )
{
	glim.FogCoordfvEXT( coord );
}

void VBOXGLTAG(glFogf)( GLenum pname, GLfloat param );

void VBOXGLTAG(glFogf)( GLenum pname, GLfloat param )
{
	glim.Fogf( pname, param );
}

void VBOXGLTAG(glFogfv)( GLenum pname, const GLfloat * params );

void VBOXGLTAG(glFogfv)( GLenum pname, const GLfloat * params )
{
	glim.Fogfv( pname, params );
}

void VBOXGLTAG(glFogi)( GLenum pname, GLint param );

void VBOXGLTAG(glFogi)( GLenum pname, GLint param )
{
	glim.Fogi( pname, param );
}

void VBOXGLTAG(glFogiv)( GLenum pname, const GLint * params );

void VBOXGLTAG(glFogiv)( GLenum pname, const GLint * params )
{
	glim.Fogiv( pname, params );
}

void VBOXGLTAG(glFramebufferRenderbufferEXT)( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );

void VBOXGLTAG(glFramebufferRenderbufferEXT)( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer )
{
	glim.FramebufferRenderbufferEXT( target, attachment, renderbuffertarget, renderbuffer );
}

void VBOXGLTAG(glFramebufferTexture1DEXT)( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );

void VBOXGLTAG(glFramebufferTexture1DEXT)( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level )
{
	glim.FramebufferTexture1DEXT( target, attachment, textarget, texture, level );
}

void VBOXGLTAG(glFramebufferTexture2DEXT)( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );

void VBOXGLTAG(glFramebufferTexture2DEXT)( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level )
{
	glim.FramebufferTexture2DEXT( target, attachment, textarget, texture, level );
}

void VBOXGLTAG(glFramebufferTexture3DEXT)( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset );

void VBOXGLTAG(glFramebufferTexture3DEXT)( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset )
{
	glim.FramebufferTexture3DEXT( target, attachment, textarget, texture, level, zoffset );
}

void VBOXGLTAG(glFrontFace)( GLenum mode );

void VBOXGLTAG(glFrontFace)( GLenum mode )
{
	glim.FrontFace( mode );
}

void VBOXGLTAG(glFrustum)( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );

void VBOXGLTAG(glFrustum)( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	glim.Frustum( left, right, bottom, top, zNear, zFar );
}

void VBOXGLTAG(glGenBuffersARB)( GLsizei n, GLuint * buffer );

void VBOXGLTAG(glGenBuffersARB)( GLsizei n, GLuint * buffer )
{
	glim.GenBuffersARB( n, buffer );
}

void VBOXGLTAG(glGenFencesNV)( GLsizei n, GLuint * fences );

void VBOXGLTAG(glGenFencesNV)( GLsizei n, GLuint * fences )
{
	glim.GenFencesNV( n, fences );
}

void VBOXGLTAG(glGenFramebuffersEXT)( GLsizei n, GLuint * framebuffers );

void VBOXGLTAG(glGenFramebuffersEXT)( GLsizei n, GLuint * framebuffers )
{
	glim.GenFramebuffersEXT( n, framebuffers );
}

GLuint VBOXGLTAG(glGenLists)( GLsizei range );

GLuint VBOXGLTAG(glGenLists)( GLsizei range )
{
	return  glim.GenLists( range );
}

void VBOXGLTAG(glGenProgramsARB)( GLsizei n, GLuint * programs );

void VBOXGLTAG(glGenProgramsARB)( GLsizei n, GLuint * programs )
{
	glim.GenProgramsARB( n, programs );
}

void VBOXGLTAG(glGenProgramsNV)( GLsizei n, GLuint * ids );

void VBOXGLTAG(glGenProgramsNV)( GLsizei n, GLuint * ids )
{
	glim.GenProgramsNV( n, ids );
}

void VBOXGLTAG(glGenQueriesARB)( GLsizei n, GLuint * ids );

void VBOXGLTAG(glGenQueriesARB)( GLsizei n, GLuint * ids )
{
	glim.GenQueriesARB( n, ids );
}

void VBOXGLTAG(glGenRenderbuffersEXT)( GLsizei n, GLuint * renderbuffers );

void VBOXGLTAG(glGenRenderbuffersEXT)( GLsizei n, GLuint * renderbuffers )
{
	glim.GenRenderbuffersEXT( n, renderbuffers );
}

void VBOXGLTAG(glGenTextures)( GLsizei n, GLuint * textures );

void VBOXGLTAG(glGenTextures)( GLsizei n, GLuint * textures )
{
	glim.GenTextures( n, textures );
}

void VBOXGLTAG(glGenerateMipmapEXT)( GLenum target );

void VBOXGLTAG(glGenerateMipmapEXT)( GLenum target )
{
	glim.GenerateMipmapEXT( target );
}

void VBOXGLTAG(glGetActiveAttrib)( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, char * name );

void VBOXGLTAG(glGetActiveAttrib)( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, char * name )
{
	glim.GetActiveAttrib( program, index, bufSize, length, size, type, name );
}

void VBOXGLTAG(glGetActiveUniform)( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, char * name );

void VBOXGLTAG(glGetActiveUniform)( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, char * name )
{
	glim.GetActiveUniform( program, index, bufSize, length, size, type, name );
}

void VBOXGLTAG(glGetAttachedObjectsARB)( VBoxGLhandleARB containerObj, GLsizei maxCount, GLsizei * count, VBoxGLhandleARB * obj );

void VBOXGLTAG(glGetAttachedObjectsARB)( VBoxGLhandleARB containerObj, GLsizei maxCount, GLsizei * count, VBoxGLhandleARB * obj )
{
	glim.GetAttachedObjectsARB( containerObj, maxCount, count, obj );
}

void VBOXGLTAG(glGetAttachedShaders)( GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders );

void VBOXGLTAG(glGetAttachedShaders)( GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders )
{
	glim.GetAttachedShaders( program, maxCount, count, shaders );
}

GLint VBOXGLTAG(glGetAttribLocation)( GLuint program, const char * name );

GLint VBOXGLTAG(glGetAttribLocation)( GLuint program, const char * name )
{
	return  glim.GetAttribLocation( program, name );
}

void VBOXGLTAG(glGetBooleanv)( GLenum pname, GLboolean * params );

void VBOXGLTAG(glGetBooleanv)( GLenum pname, GLboolean * params )
{
	glim.GetBooleanv( pname, params );
}

void VBOXGLTAG(glGetBufferParameterivARB)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetBufferParameterivARB)( GLenum target, GLenum pname, GLint * params )
{
	glim.GetBufferParameterivARB( target, pname, params );
}

void VBOXGLTAG(glGetBufferPointervARB)( GLenum target, GLenum pname, GLvoid ** params );

void VBOXGLTAG(glGetBufferPointervARB)( GLenum target, GLenum pname, GLvoid ** params )
{
	glim.GetBufferPointervARB( target, pname, params );
}

void VBOXGLTAG(glGetBufferSubDataARB)( GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data );

void VBOXGLTAG(glGetBufferSubDataARB)( GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data )
{
	glim.GetBufferSubDataARB( target, offset, size, data );
}

void VBOXGLTAG(glGetChromiumParametervCR)( GLenum target, GLuint index, GLenum type, GLsizei count, GLvoid * values );

void VBOXGLTAG(glGetChromiumParametervCR)( GLenum target, GLuint index, GLenum type, GLsizei count, GLvoid * values )
{
	glim.GetChromiumParametervCR( target, index, type, count, values );
}

void VBOXGLTAG(glGetClipPlane)( GLenum plane, GLdouble * equation );

void VBOXGLTAG(glGetClipPlane)( GLenum plane, GLdouble * equation )
{
	glim.GetClipPlane( plane, equation );
}

void VBOXGLTAG(glGetCombinerInputParameterfvNV)( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetCombinerInputParameterfvNV)( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params )
{
	glim.GetCombinerInputParameterfvNV( stage, portion, variable, pname, params );
}

void VBOXGLTAG(glGetCombinerInputParameterivNV)( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params );

void VBOXGLTAG(glGetCombinerInputParameterivNV)( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params )
{
	glim.GetCombinerInputParameterivNV( stage, portion, variable, pname, params );
}

void VBOXGLTAG(glGetCombinerOutputParameterfvNV)( GLenum stage, GLenum portion, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetCombinerOutputParameterfvNV)( GLenum stage, GLenum portion, GLenum pname, GLfloat * params )
{
	glim.GetCombinerOutputParameterfvNV( stage, portion, pname, params );
}

void VBOXGLTAG(glGetCombinerOutputParameterivNV)( GLenum stage, GLenum portion, GLenum pname, GLint * params );

void VBOXGLTAG(glGetCombinerOutputParameterivNV)( GLenum stage, GLenum portion, GLenum pname, GLint * params )
{
	glim.GetCombinerOutputParameterivNV( stage, portion, pname, params );
}

void VBOXGLTAG(glGetCombinerStageParameterfvNV)( GLenum stage, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetCombinerStageParameterfvNV)( GLenum stage, GLenum pname, GLfloat * params )
{
	glim.GetCombinerStageParameterfvNV( stage, pname, params );
}

void VBOXGLTAG(glGetCompressedTexImageARB)( GLenum target, GLint level, GLvoid * img );

void VBOXGLTAG(glGetCompressedTexImageARB)( GLenum target, GLint level, GLvoid * img )
{
	glim.GetCompressedTexImageARB( target, level, img );
}

void VBOXGLTAG(glGetDoublev)( GLenum pname, GLdouble * params );

void VBOXGLTAG(glGetDoublev)( GLenum pname, GLdouble * params )
{
	glim.GetDoublev( pname, params );
}

GLenum VBOXGLTAG(glGetError)( void );

GLenum VBOXGLTAG(glGetError)( void )
{
	return  glim.GetError(  );
}

void VBOXGLTAG(glGetFenceivNV)( GLuint fence, GLenum pname, GLint * params );

void VBOXGLTAG(glGetFenceivNV)( GLuint fence, GLenum pname, GLint * params )
{
	glim.GetFenceivNV( fence, pname, params );
}

void VBOXGLTAG(glGetFinalCombinerInputParameterfvNV)( GLenum variable, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetFinalCombinerInputParameterfvNV)( GLenum variable, GLenum pname, GLfloat * params )
{
	glim.GetFinalCombinerInputParameterfvNV( variable, pname, params );
}

void VBOXGLTAG(glGetFinalCombinerInputParameterivNV)( GLenum variable, GLenum pname, GLint * params );

void VBOXGLTAG(glGetFinalCombinerInputParameterivNV)( GLenum variable, GLenum pname, GLint * params )
{
	glim.GetFinalCombinerInputParameterivNV( variable, pname, params );
}

void VBOXGLTAG(glGetFloatv)( GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetFloatv)( GLenum pname, GLfloat * params )
{
	glim.GetFloatv( pname, params );
}

void VBOXGLTAG(glGetFramebufferAttachmentParameterivEXT)( GLenum target, GLenum attachment, GLenum pname, GLint * params );

void VBOXGLTAG(glGetFramebufferAttachmentParameterivEXT)( GLenum target, GLenum attachment, GLenum pname, GLint * params )
{
	glim.GetFramebufferAttachmentParameterivEXT( target, attachment, pname, params );
}

VBoxGLhandleARB VBOXGLTAG(glGetHandleARB)( GLenum pname );

VBoxGLhandleARB VBOXGLTAG(glGetHandleARB)( GLenum pname )
{
	return  glim.GetHandleARB( pname );
}

void VBOXGLTAG(glGetInfoLogARB)( VBoxGLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog );

void VBOXGLTAG(glGetInfoLogARB)( VBoxGLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog )
{
	glim.GetInfoLogARB( obj, maxLength, length, infoLog );
}

void VBOXGLTAG(glGetIntegerv)( GLenum pname, GLint * params );

void VBOXGLTAG(glGetIntegerv)( GLenum pname, GLint * params )
{
	glim.GetIntegerv( pname, params );
}

void VBOXGLTAG(glGetLightfv)( GLenum light, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetLightfv)( GLenum light, GLenum pname, GLfloat * params )
{
	glim.GetLightfv( light, pname, params );
}

void VBOXGLTAG(glGetLightiv)( GLenum light, GLenum pname, GLint * params );

void VBOXGLTAG(glGetLightiv)( GLenum light, GLenum pname, GLint * params )
{
	glim.GetLightiv( light, pname, params );
}

void VBOXGLTAG(glGetMapdv)( GLenum target, GLenum query, GLdouble * v );

void VBOXGLTAG(glGetMapdv)( GLenum target, GLenum query, GLdouble * v )
{
	glim.GetMapdv( target, query, v );
}

void VBOXGLTAG(glGetMapfv)( GLenum target, GLenum query, GLfloat * v );

void VBOXGLTAG(glGetMapfv)( GLenum target, GLenum query, GLfloat * v )
{
	glim.GetMapfv( target, query, v );
}

void VBOXGLTAG(glGetMapiv)( GLenum target, GLenum query, GLint * v );

void VBOXGLTAG(glGetMapiv)( GLenum target, GLenum query, GLint * v )
{
	glim.GetMapiv( target, query, v );
}

void VBOXGLTAG(glGetMaterialfv)( GLenum face, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetMaterialfv)( GLenum face, GLenum pname, GLfloat * params )
{
	glim.GetMaterialfv( face, pname, params );
}

void VBOXGLTAG(glGetMaterialiv)( GLenum face, GLenum pname, GLint * params );

void VBOXGLTAG(glGetMaterialiv)( GLenum face, GLenum pname, GLint * params )
{
	glim.GetMaterialiv( face, pname, params );
}

void VBOXGLTAG(glGetObjectParameterfvARB)( VBoxGLhandleARB obj, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetObjectParameterfvARB)( VBoxGLhandleARB obj, GLenum pname, GLfloat * params )
{
	glim.GetObjectParameterfvARB( obj, pname, params );
}

void VBOXGLTAG(glGetObjectParameterivARB)( VBoxGLhandleARB obj, GLenum pname, GLint * params );

void VBOXGLTAG(glGetObjectParameterivARB)( VBoxGLhandleARB obj, GLenum pname, GLint * params )
{
	glim.GetObjectParameterivARB( obj, pname, params );
}

void VBOXGLTAG(glGetPixelMapfv)( GLenum map, GLfloat * values );

void VBOXGLTAG(glGetPixelMapfv)( GLenum map, GLfloat * values )
{
	glim.GetPixelMapfv( map, values );
}

void VBOXGLTAG(glGetPixelMapuiv)( GLenum map, GLuint * values );

void VBOXGLTAG(glGetPixelMapuiv)( GLenum map, GLuint * values )
{
	glim.GetPixelMapuiv( map, values );
}

void VBOXGLTAG(glGetPixelMapusv)( GLenum map, GLushort * values );

void VBOXGLTAG(glGetPixelMapusv)( GLenum map, GLushort * values )
{
	glim.GetPixelMapusv( map, values );
}

void VBOXGLTAG(glGetPointerv)( GLenum pname, GLvoid ** params );

void VBOXGLTAG(glGetPointerv)( GLenum pname, GLvoid ** params )
{
	glim.GetPointerv( pname, params );
}

void VBOXGLTAG(glGetPolygonStipple)( GLubyte * mask );

void VBOXGLTAG(glGetPolygonStipple)( GLubyte * mask )
{
	glim.GetPolygonStipple( mask );
}

void VBOXGLTAG(glGetProgramEnvParameterdvARB)( GLenum target, GLuint index, GLdouble * params );

void VBOXGLTAG(glGetProgramEnvParameterdvARB)( GLenum target, GLuint index, GLdouble * params )
{
	glim.GetProgramEnvParameterdvARB( target, index, params );
}

void VBOXGLTAG(glGetProgramEnvParameterfvARB)( GLenum target, GLuint index, GLfloat * params );

void VBOXGLTAG(glGetProgramEnvParameterfvARB)( GLenum target, GLuint index, GLfloat * params )
{
	glim.GetProgramEnvParameterfvARB( target, index, params );
}

void VBOXGLTAG(glGetProgramInfoLog)( GLuint program, GLsizei bufSize, GLsizei * length, char * infoLog );

void VBOXGLTAG(glGetProgramInfoLog)( GLuint program, GLsizei bufSize, GLsizei * length, char * infoLog )
{
	glim.GetProgramInfoLog( program, bufSize, length, infoLog );
}

void VBOXGLTAG(glGetProgramLocalParameterdvARB)( GLenum target, GLuint index, GLdouble * params );

void VBOXGLTAG(glGetProgramLocalParameterdvARB)( GLenum target, GLuint index, GLdouble * params )
{
	glim.GetProgramLocalParameterdvARB( target, index, params );
}

void VBOXGLTAG(glGetProgramLocalParameterfvARB)( GLenum target, GLuint index, GLfloat * params );

void VBOXGLTAG(glGetProgramLocalParameterfvARB)( GLenum target, GLuint index, GLfloat * params )
{
	glim.GetProgramLocalParameterfvARB( target, index, params );
}

void VBOXGLTAG(glGetProgramNamedParameterdvNV)( GLuint id, GLsizei len, const GLubyte * name, GLdouble * params );

void VBOXGLTAG(glGetProgramNamedParameterdvNV)( GLuint id, GLsizei len, const GLubyte * name, GLdouble * params )
{
	glim.GetProgramNamedParameterdvNV( id, len, name, params );
}

void VBOXGLTAG(glGetProgramNamedParameterfvNV)( GLuint id, GLsizei len, const GLubyte * name, GLfloat * params );

void VBOXGLTAG(glGetProgramNamedParameterfvNV)( GLuint id, GLsizei len, const GLubyte * name, GLfloat * params )
{
	glim.GetProgramNamedParameterfvNV( id, len, name, params );
}

void VBOXGLTAG(glGetProgramParameterdvNV)( GLenum target, GLuint index, GLenum pname, GLdouble * params );

void VBOXGLTAG(glGetProgramParameterdvNV)( GLenum target, GLuint index, GLenum pname, GLdouble * params )
{
	glim.GetProgramParameterdvNV( target, index, pname, params );
}

void VBOXGLTAG(glGetProgramParameterfvNV)( GLenum target, GLuint index, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetProgramParameterfvNV)( GLenum target, GLuint index, GLenum pname, GLfloat * params )
{
	glim.GetProgramParameterfvNV( target, index, pname, params );
}

void VBOXGLTAG(glGetProgramStringARB)( GLenum target, GLenum pname, GLvoid * string );

void VBOXGLTAG(glGetProgramStringARB)( GLenum target, GLenum pname, GLvoid * string )
{
	glim.GetProgramStringARB( target, pname, string );
}

void VBOXGLTAG(glGetProgramStringNV)( GLuint id, GLenum pname, GLubyte * program );

void VBOXGLTAG(glGetProgramStringNV)( GLuint id, GLenum pname, GLubyte * program )
{
	glim.GetProgramStringNV( id, pname, program );
}

void VBOXGLTAG(glGetProgramiv)( GLuint program, GLenum pname, GLint * params );

void VBOXGLTAG(glGetProgramiv)( GLuint program, GLenum pname, GLint * params )
{
	glim.GetProgramiv( program, pname, params );
}

void VBOXGLTAG(glGetProgramivARB)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetProgramivARB)( GLenum target, GLenum pname, GLint * params )
{
	glim.GetProgramivARB( target, pname, params );
}

void VBOXGLTAG(glGetProgramivNV)( GLuint id, GLenum pname, GLint * params );

void VBOXGLTAG(glGetProgramivNV)( GLuint id, GLenum pname, GLint * params )
{
	glim.GetProgramivNV( id, pname, params );
}

void VBOXGLTAG(glGetQueryObjectivARB)( GLuint id, GLenum pname, GLint * params );

void VBOXGLTAG(glGetQueryObjectivARB)( GLuint id, GLenum pname, GLint * params )
{
	glim.GetQueryObjectivARB( id, pname, params );
}

void VBOXGLTAG(glGetQueryObjectuivARB)( GLuint id, GLenum pname, GLuint * params );

void VBOXGLTAG(glGetQueryObjectuivARB)( GLuint id, GLenum pname, GLuint * params )
{
	glim.GetQueryObjectuivARB( id, pname, params );
}

void VBOXGLTAG(glGetQueryivARB)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetQueryivARB)( GLenum target, GLenum pname, GLint * params )
{
	glim.GetQueryivARB( target, pname, params );
}

void VBOXGLTAG(glGetRenderbufferParameterivEXT)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetRenderbufferParameterivEXT)( GLenum target, GLenum pname, GLint * params )
{
	glim.GetRenderbufferParameterivEXT( target, pname, params );
}

void VBOXGLTAG(glGetShaderInfoLog)( GLuint shader, GLsizei bufSize, GLsizei * length, char * infoLog );

void VBOXGLTAG(glGetShaderInfoLog)( GLuint shader, GLsizei bufSize, GLsizei * length, char * infoLog )
{
	glim.GetShaderInfoLog( shader, bufSize, length, infoLog );
}

void VBOXGLTAG(glGetShaderSource)( GLuint shader, GLsizei bufSize, GLsizei * length, char * source );

void VBOXGLTAG(glGetShaderSource)( GLuint shader, GLsizei bufSize, GLsizei * length, char * source )
{
	glim.GetShaderSource( shader, bufSize, length, source );
}

void VBOXGLTAG(glGetShaderiv)( GLuint shader, GLenum pname, GLint * params );

void VBOXGLTAG(glGetShaderiv)( GLuint shader, GLenum pname, GLint * params )
{
	glim.GetShaderiv( shader, pname, params );
}

const GLubyte * VBOXGLTAG(glGetString)( GLenum name );

const GLubyte * VBOXGLTAG(glGetString)( GLenum name )
{
	return  glim.GetString( name );
}

void VBOXGLTAG(glGetTexEnvfv)( GLenum target, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetTexEnvfv)( GLenum target, GLenum pname, GLfloat * params )
{
	glim.GetTexEnvfv( target, pname, params );
}

void VBOXGLTAG(glGetTexEnviv)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetTexEnviv)( GLenum target, GLenum pname, GLint * params )
{
	glim.GetTexEnviv( target, pname, params );
}

void VBOXGLTAG(glGetTexGendv)( GLenum coord, GLenum pname, GLdouble * params );

void VBOXGLTAG(glGetTexGendv)( GLenum coord, GLenum pname, GLdouble * params )
{
	glim.GetTexGendv( coord, pname, params );
}

void VBOXGLTAG(glGetTexGenfv)( GLenum coord, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetTexGenfv)( GLenum coord, GLenum pname, GLfloat * params )
{
	glim.GetTexGenfv( coord, pname, params );
}

void VBOXGLTAG(glGetTexGeniv)( GLenum coord, GLenum pname, GLint * params );

void VBOXGLTAG(glGetTexGeniv)( GLenum coord, GLenum pname, GLint * params )
{
	glim.GetTexGeniv( coord, pname, params );
}

void VBOXGLTAG(glGetTexImage)( GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels );

void VBOXGLTAG(glGetTexImage)( GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels )
{
	glim.GetTexImage( target, level, format, type, pixels );
}

void VBOXGLTAG(glGetTexLevelParameterfv)( GLenum target, GLint level, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetTexLevelParameterfv)( GLenum target, GLint level, GLenum pname, GLfloat * params )
{
	glim.GetTexLevelParameterfv( target, level, pname, params );
}

void VBOXGLTAG(glGetTexLevelParameteriv)( GLenum target, GLint level, GLenum pname, GLint * params );

void VBOXGLTAG(glGetTexLevelParameteriv)( GLenum target, GLint level, GLenum pname, GLint * params )
{
	glim.GetTexLevelParameteriv( target, level, pname, params );
}

void VBOXGLTAG(glGetTexParameterfv)( GLenum target, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetTexParameterfv)( GLenum target, GLenum pname, GLfloat * params )
{
	glim.GetTexParameterfv( target, pname, params );
}

void VBOXGLTAG(glGetTexParameteriv)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetTexParameteriv)( GLenum target, GLenum pname, GLint * params )
{
	glim.GetTexParameteriv( target, pname, params );
}

void VBOXGLTAG(glGetTrackMatrixivNV)( GLenum target, GLuint address, GLenum pname, GLint * params );

void VBOXGLTAG(glGetTrackMatrixivNV)( GLenum target, GLuint address, GLenum pname, GLint * params )
{
	glim.GetTrackMatrixivNV( target, address, pname, params );
}

GLint VBOXGLTAG(glGetUniformLocation)( GLuint program, const char * name );

GLint VBOXGLTAG(glGetUniformLocation)( GLuint program, const char * name )
{
	return  glim.GetUniformLocation( program, name );
}

void VBOXGLTAG(glGetUniformfv)( GLuint program, GLint location, GLfloat * params );

void VBOXGLTAG(glGetUniformfv)( GLuint program, GLint location, GLfloat * params )
{
	glim.GetUniformfv( program, location, params );
}

void VBOXGLTAG(glGetUniformiv)( GLuint program, GLint location, GLint * params );

void VBOXGLTAG(glGetUniformiv)( GLuint program, GLint location, GLint * params )
{
	glim.GetUniformiv( program, location, params );
}

void VBOXGLTAG(glGetVertexAttribPointervARB)( GLuint index, GLenum pname, GLvoid ** pointer );

void VBOXGLTAG(glGetVertexAttribPointervARB)( GLuint index, GLenum pname, GLvoid ** pointer )
{
	glim.GetVertexAttribPointervARB( index, pname, pointer );
}

void VBOXGLTAG(glGetVertexAttribPointervNV)( GLuint index, GLenum pname, GLvoid ** pointer );

void VBOXGLTAG(glGetVertexAttribPointervNV)( GLuint index, GLenum pname, GLvoid ** pointer )
{
	glim.GetVertexAttribPointervNV( index, pname, pointer );
}

void VBOXGLTAG(glGetVertexAttribdvARB)( GLuint index, GLenum pname, GLdouble * params );

void VBOXGLTAG(glGetVertexAttribdvARB)( GLuint index, GLenum pname, GLdouble * params )
{
	glim.GetVertexAttribdvARB( index, pname, params );
}

void VBOXGLTAG(glGetVertexAttribdvNV)( GLuint index, GLenum pname, GLdouble * params );

void VBOXGLTAG(glGetVertexAttribdvNV)( GLuint index, GLenum pname, GLdouble * params )
{
	glim.GetVertexAttribdvNV( index, pname, params );
}

void VBOXGLTAG(glGetVertexAttribfvARB)( GLuint index, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetVertexAttribfvARB)( GLuint index, GLenum pname, GLfloat * params )
{
	glim.GetVertexAttribfvARB( index, pname, params );
}

void VBOXGLTAG(glGetVertexAttribfvNV)( GLuint index, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetVertexAttribfvNV)( GLuint index, GLenum pname, GLfloat * params )
{
	glim.GetVertexAttribfvNV( index, pname, params );
}

void VBOXGLTAG(glGetVertexAttribivARB)( GLuint index, GLenum pname, GLint * params );

void VBOXGLTAG(glGetVertexAttribivARB)( GLuint index, GLenum pname, GLint * params )
{
	glim.GetVertexAttribivARB( index, pname, params );
}

void VBOXGLTAG(glGetVertexAttribivNV)( GLuint index, GLenum pname, GLint * params );

void VBOXGLTAG(glGetVertexAttribivNV)( GLuint index, GLenum pname, GLint * params )
{
	glim.GetVertexAttribivNV( index, pname, params );
}

void VBOXGLTAG(glHint)( GLenum target, GLenum mode );

void VBOXGLTAG(glHint)( GLenum target, GLenum mode )
{
	glim.Hint( target, mode );
}

void VBOXGLTAG(glIndexMask)( GLuint mask );

void VBOXGLTAG(glIndexMask)( GLuint mask )
{
	glim.IndexMask( mask );
}

void VBOXGLTAG(glIndexPointer)( GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glIndexPointer)( GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.IndexPointer( type, stride, pointer );
}

void VBOXGLTAG(glIndexd)( GLdouble c );

void VBOXGLTAG(glIndexd)( GLdouble c )
{
	glim.Indexd( c );
}

void VBOXGLTAG(glIndexdv)( const GLdouble * c );

void VBOXGLTAG(glIndexdv)( const GLdouble * c )
{
	glim.Indexdv( c );
}

void VBOXGLTAG(glIndexf)( GLfloat c );

void VBOXGLTAG(glIndexf)( GLfloat c )
{
	glim.Indexf( c );
}

void VBOXGLTAG(glIndexfv)( const GLfloat * c );

void VBOXGLTAG(glIndexfv)( const GLfloat * c )
{
	glim.Indexfv( c );
}

void VBOXGLTAG(glIndexi)( GLint c );

void VBOXGLTAG(glIndexi)( GLint c )
{
	glim.Indexi( c );
}

void VBOXGLTAG(glIndexiv)( const GLint * c );

void VBOXGLTAG(glIndexiv)( const GLint * c )
{
	glim.Indexiv( c );
}

void VBOXGLTAG(glIndexs)( GLshort c );

void VBOXGLTAG(glIndexs)( GLshort c )
{
	glim.Indexs( c );
}

void VBOXGLTAG(glIndexsv)( const GLshort * c );

void VBOXGLTAG(glIndexsv)( const GLshort * c )
{
	glim.Indexsv( c );
}

void VBOXGLTAG(glIndexub)( GLubyte c );

void VBOXGLTAG(glIndexub)( GLubyte c )
{
	glim.Indexub( c );
}

void VBOXGLTAG(glIndexubv)( const GLubyte * c );

void VBOXGLTAG(glIndexubv)( const GLubyte * c )
{
	glim.Indexubv( c );
}

void VBOXGLTAG(glInitNames)( void );

void VBOXGLTAG(glInitNames)( void )
{
	glim.InitNames(  );
}

void VBOXGLTAG(glInterleavedArrays)( GLenum format, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glInterleavedArrays)( GLenum format, GLsizei stride, const GLvoid * pointer )
{
	glim.InterleavedArrays( format, stride, pointer );
}

GLboolean VBOXGLTAG(glIsBufferARB)( GLuint buffer );

GLboolean VBOXGLTAG(glIsBufferARB)( GLuint buffer )
{
	return  glim.IsBufferARB( buffer );
}

GLboolean VBOXGLTAG(glIsEnabled)( GLenum cap );

GLboolean VBOXGLTAG(glIsEnabled)( GLenum cap )
{
	return  glim.IsEnabled( cap );
}

GLboolean VBOXGLTAG(glIsFenceNV)( GLuint fence );

GLboolean VBOXGLTAG(glIsFenceNV)( GLuint fence )
{
	return  glim.IsFenceNV( fence );
}

GLboolean VBOXGLTAG(glIsFramebufferEXT)( GLuint framebuffer );

GLboolean VBOXGLTAG(glIsFramebufferEXT)( GLuint framebuffer )
{
	return  glim.IsFramebufferEXT( framebuffer );
}

GLboolean VBOXGLTAG(glIsList)( GLuint list );

GLboolean VBOXGLTAG(glIsList)( GLuint list )
{
	return  glim.IsList( list );
}

GLboolean VBOXGLTAG(glIsProgram)( GLuint program );

GLboolean VBOXGLTAG(glIsProgram)( GLuint program )
{
	return  glim.IsProgram( program );
}

GLboolean VBOXGLTAG(glIsProgramARB)( GLuint program );

GLboolean VBOXGLTAG(glIsProgramARB)( GLuint program )
{
	return  glim.IsProgramARB( program );
}

GLboolean VBOXGLTAG(glIsQueryARB)( GLuint id );

GLboolean VBOXGLTAG(glIsQueryARB)( GLuint id )
{
	return  glim.IsQueryARB( id );
}

GLboolean VBOXGLTAG(glIsRenderbufferEXT)( GLuint renderbuffer );

GLboolean VBOXGLTAG(glIsRenderbufferEXT)( GLuint renderbuffer )
{
	return  glim.IsRenderbufferEXT( renderbuffer );
}

GLboolean VBOXGLTAG(glIsShader)( GLuint shader );

GLboolean VBOXGLTAG(glIsShader)( GLuint shader )
{
	return  glim.IsShader( shader );
}

GLboolean VBOXGLTAG(glIsTexture)( GLuint texture );

GLboolean VBOXGLTAG(glIsTexture)( GLuint texture )
{
	return  glim.IsTexture( texture );
}

void VBOXGLTAG(glLightModelf)( GLenum pname, GLfloat param );

void VBOXGLTAG(glLightModelf)( GLenum pname, GLfloat param )
{
	glim.LightModelf( pname, param );
}

void VBOXGLTAG(glLightModelfv)( GLenum pname, const GLfloat * params );

void VBOXGLTAG(glLightModelfv)( GLenum pname, const GLfloat * params )
{
	glim.LightModelfv( pname, params );
}

void VBOXGLTAG(glLightModeli)( GLenum pname, GLint param );

void VBOXGLTAG(glLightModeli)( GLenum pname, GLint param )
{
	glim.LightModeli( pname, param );
}

void VBOXGLTAG(glLightModeliv)( GLenum pname, const GLint * params );

void VBOXGLTAG(glLightModeliv)( GLenum pname, const GLint * params )
{
	glim.LightModeliv( pname, params );
}

void VBOXGLTAG(glLightf)( GLenum light, GLenum pname, GLfloat param );

void VBOXGLTAG(glLightf)( GLenum light, GLenum pname, GLfloat param )
{
	glim.Lightf( light, pname, param );
}

void VBOXGLTAG(glLightfv)( GLenum light, GLenum pname, const GLfloat * params );

void VBOXGLTAG(glLightfv)( GLenum light, GLenum pname, const GLfloat * params )
{
	glim.Lightfv( light, pname, params );
}

void VBOXGLTAG(glLighti)( GLenum light, GLenum pname, GLint param );

void VBOXGLTAG(glLighti)( GLenum light, GLenum pname, GLint param )
{
	glim.Lighti( light, pname, param );
}

void VBOXGLTAG(glLightiv)( GLenum light, GLenum pname, const GLint * params );

void VBOXGLTAG(glLightiv)( GLenum light, GLenum pname, const GLint * params )
{
	glim.Lightiv( light, pname, params );
}

void VBOXGLTAG(glLineStipple)( GLint factor, GLushort pattern );

void VBOXGLTAG(glLineStipple)( GLint factor, GLushort pattern )
{
	glim.LineStipple( factor, pattern );
}

void VBOXGLTAG(glLineWidth)( GLfloat width );

void VBOXGLTAG(glLineWidth)( GLfloat width )
{
	glim.LineWidth( width );
}

void VBOXGLTAG(glLinkProgram)( GLuint program );

void VBOXGLTAG(glLinkProgram)( GLuint program )
{
	glim.LinkProgram( program );
}

void VBOXGLTAG(glListBase)( GLuint base );

void VBOXGLTAG(glListBase)( GLuint base )
{
	glim.ListBase( base );
}

void VBOXGLTAG(glLoadIdentity)( void );

void VBOXGLTAG(glLoadIdentity)( void )
{
	glim.LoadIdentity(  );
}

void VBOXGLTAG(glLoadMatrixd)( const GLdouble * m );

void VBOXGLTAG(glLoadMatrixd)( const GLdouble * m )
{
	glim.LoadMatrixd( m );
}

void VBOXGLTAG(glLoadMatrixf)( const GLfloat * m );

void VBOXGLTAG(glLoadMatrixf)( const GLfloat * m )
{
	glim.LoadMatrixf( m );
}

void VBOXGLTAG(glLoadName)( GLuint name );

void VBOXGLTAG(glLoadName)( GLuint name )
{
	glim.LoadName( name );
}

void VBOXGLTAG(glLoadProgramNV)( GLenum target, GLuint id, GLsizei len, const GLubyte * program );

void VBOXGLTAG(glLoadProgramNV)( GLenum target, GLuint id, GLsizei len, const GLubyte * program )
{
	glim.LoadProgramNV( target, id, len, program );
}

void VBOXGLTAG(glLoadTransposeMatrixdARB)( const GLdouble * m );

void VBOXGLTAG(glLoadTransposeMatrixdARB)( const GLdouble * m )
{
	glim.LoadTransposeMatrixdARB( m );
}

void VBOXGLTAG(glLoadTransposeMatrixfARB)( const GLfloat * m );

void VBOXGLTAG(glLoadTransposeMatrixfARB)( const GLfloat * m )
{
	glim.LoadTransposeMatrixfARB( m );
}

void VBOXGLTAG(glLockArraysEXT)( GLint first, GLint count );

void VBOXGLTAG(glLockArraysEXT)( GLint first, GLint count )
{
	glim.LockArraysEXT( first, count );
}

void VBOXGLTAG(glLogicOp)( GLenum opcode );

void VBOXGLTAG(glLogicOp)( GLenum opcode )
{
	glim.LogicOp( opcode );
}

void VBOXGLTAG(glMap1d)( GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points );

void VBOXGLTAG(glMap1d)( GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points )
{
	glim.Map1d( target, u1, u2, stride, order, points );
}

void VBOXGLTAG(glMap1f)( GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points );

void VBOXGLTAG(glMap1f)( GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points )
{
	glim.Map1f( target, u1, u2, stride, order, points );
}

void VBOXGLTAG(glMap2d)( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points );

void VBOXGLTAG(glMap2d)( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points )
{
	glim.Map2d( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points );
}

void VBOXGLTAG(glMap2f)( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points );

void VBOXGLTAG(glMap2f)( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points )
{
	glim.Map2f( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points );
}

void * VBOXGLTAG(glMapBufferARB)( GLenum target, GLenum access );

void * VBOXGLTAG(glMapBufferARB)( GLenum target, GLenum access )
{
	return  glim.MapBufferARB( target, access );
}

void VBOXGLTAG(glMapGrid1d)( GLint un, GLdouble u1, GLdouble u2 );

void VBOXGLTAG(glMapGrid1d)( GLint un, GLdouble u1, GLdouble u2 )
{
	glim.MapGrid1d( un, u1, u2 );
}

void VBOXGLTAG(glMapGrid1f)( GLint un, GLfloat u1, GLfloat u2 );

void VBOXGLTAG(glMapGrid1f)( GLint un, GLfloat u1, GLfloat u2 )
{
	glim.MapGrid1f( un, u1, u2 );
}

void VBOXGLTAG(glMapGrid2d)( GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2 );

void VBOXGLTAG(glMapGrid2d)( GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2 )
{
	glim.MapGrid2d( un, u1, u2, vn, v1, v2 );
}

void VBOXGLTAG(glMapGrid2f)( GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2 );

void VBOXGLTAG(glMapGrid2f)( GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2 )
{
	glim.MapGrid2f( un, u1, u2, vn, v1, v2 );
}

void VBOXGLTAG(glMaterialf)( GLenum face, GLenum pname, GLfloat param );

void VBOXGLTAG(glMaterialf)( GLenum face, GLenum pname, GLfloat param )
{
	glim.Materialf( face, pname, param );
}

void VBOXGLTAG(glMaterialfv)( GLenum face, GLenum pname, const GLfloat * params );

void VBOXGLTAG(glMaterialfv)( GLenum face, GLenum pname, const GLfloat * params )
{
	glim.Materialfv( face, pname, params );
}

void VBOXGLTAG(glMateriali)( GLenum face, GLenum pname, GLint param );

void VBOXGLTAG(glMateriali)( GLenum face, GLenum pname, GLint param )
{
	glim.Materiali( face, pname, param );
}

void VBOXGLTAG(glMaterialiv)( GLenum face, GLenum pname, const GLint * params );

void VBOXGLTAG(glMaterialiv)( GLenum face, GLenum pname, const GLint * params )
{
	glim.Materialiv( face, pname, params );
}

void VBOXGLTAG(glMatrixMode)( GLenum mode );

void VBOXGLTAG(glMatrixMode)( GLenum mode )
{
	glim.MatrixMode( mode );
}

void VBOXGLTAG(glMultMatrixd)( const GLdouble * m );

void VBOXGLTAG(glMultMatrixd)( const GLdouble * m )
{
	glim.MultMatrixd( m );
}

void VBOXGLTAG(glMultMatrixf)( const GLfloat * m );

void VBOXGLTAG(glMultMatrixf)( const GLfloat * m )
{
	glim.MultMatrixf( m );
}

void VBOXGLTAG(glMultTransposeMatrixdARB)( const GLdouble * m );

void VBOXGLTAG(glMultTransposeMatrixdARB)( const GLdouble * m )
{
	glim.MultTransposeMatrixdARB( m );
}

void VBOXGLTAG(glMultTransposeMatrixfARB)( const GLfloat * m );

void VBOXGLTAG(glMultTransposeMatrixfARB)( const GLfloat * m )
{
	glim.MultTransposeMatrixfARB( m );
}

void VBOXGLTAG(glMultiDrawArraysEXT)( GLenum mode, GLint * first, GLsizei * count, GLsizei primcount );

void VBOXGLTAG(glMultiDrawArraysEXT)( GLenum mode, GLint * first, GLsizei * count, GLsizei primcount )
{
	glim.MultiDrawArraysEXT( mode, first, count, primcount );
}

void VBOXGLTAG(glMultiDrawElementsEXT)( GLenum mode, const GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount );

void VBOXGLTAG(glMultiDrawElementsEXT)( GLenum mode, const GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount )
{
	glim.MultiDrawElementsEXT( mode, count, type, indices, primcount );
}

void VBOXGLTAG(glMultiTexCoord1dARB)( GLenum texture, GLdouble s );

void VBOXGLTAG(glMultiTexCoord1dARB)( GLenum texture, GLdouble s )
{
	glim.MultiTexCoord1dARB( texture, s );
}

void VBOXGLTAG(glMultiTexCoord1dvARB)( GLenum texture, const GLdouble * t );

void VBOXGLTAG(glMultiTexCoord1dvARB)( GLenum texture, const GLdouble * t )
{
	glim.MultiTexCoord1dvARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord1fARB)( GLenum texture, GLfloat s );

void VBOXGLTAG(glMultiTexCoord1fARB)( GLenum texture, GLfloat s )
{
	glim.MultiTexCoord1fARB( texture, s );
}

void VBOXGLTAG(glMultiTexCoord1fvARB)( GLenum texture, const GLfloat * t );

void VBOXGLTAG(glMultiTexCoord1fvARB)( GLenum texture, const GLfloat * t )
{
	glim.MultiTexCoord1fvARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord1iARB)( GLenum texture, GLint s );

void VBOXGLTAG(glMultiTexCoord1iARB)( GLenum texture, GLint s )
{
	glim.MultiTexCoord1iARB( texture, s );
}

void VBOXGLTAG(glMultiTexCoord1ivARB)( GLenum texture, const GLint * t );

void VBOXGLTAG(glMultiTexCoord1ivARB)( GLenum texture, const GLint * t )
{
	glim.MultiTexCoord1ivARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord1sARB)( GLenum texture, GLshort s );

void VBOXGLTAG(glMultiTexCoord1sARB)( GLenum texture, GLshort s )
{
	glim.MultiTexCoord1sARB( texture, s );
}

void VBOXGLTAG(glMultiTexCoord1svARB)( GLenum texture, const GLshort * t );

void VBOXGLTAG(glMultiTexCoord1svARB)( GLenum texture, const GLshort * t )
{
	glim.MultiTexCoord1svARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord2dARB)( GLenum texture, GLdouble s, GLdouble t );

void VBOXGLTAG(glMultiTexCoord2dARB)( GLenum texture, GLdouble s, GLdouble t )
{
	glim.MultiTexCoord2dARB( texture, s, t );
}

void VBOXGLTAG(glMultiTexCoord2dvARB)( GLenum texture, const GLdouble * t );

void VBOXGLTAG(glMultiTexCoord2dvARB)( GLenum texture, const GLdouble * t )
{
	glim.MultiTexCoord2dvARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord2fARB)( GLenum texture, GLfloat s, GLfloat t );

void VBOXGLTAG(glMultiTexCoord2fARB)( GLenum texture, GLfloat s, GLfloat t )
{
	glim.MultiTexCoord2fARB( texture, s, t );
}

void VBOXGLTAG(glMultiTexCoord2fvARB)( GLenum texture, const GLfloat * t );

void VBOXGLTAG(glMultiTexCoord2fvARB)( GLenum texture, const GLfloat * t )
{
	glim.MultiTexCoord2fvARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord2iARB)( GLenum texture, GLint s, GLint t );

void VBOXGLTAG(glMultiTexCoord2iARB)( GLenum texture, GLint s, GLint t )
{
	glim.MultiTexCoord2iARB( texture, s, t );
}

void VBOXGLTAG(glMultiTexCoord2ivARB)( GLenum texture, const GLint * t );

void VBOXGLTAG(glMultiTexCoord2ivARB)( GLenum texture, const GLint * t )
{
	glim.MultiTexCoord2ivARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord2sARB)( GLenum texture, GLshort s, GLshort t );

void VBOXGLTAG(glMultiTexCoord2sARB)( GLenum texture, GLshort s, GLshort t )
{
	glim.MultiTexCoord2sARB( texture, s, t );
}

void VBOXGLTAG(glMultiTexCoord2svARB)( GLenum texture, const GLshort * t );

void VBOXGLTAG(glMultiTexCoord2svARB)( GLenum texture, const GLshort * t )
{
	glim.MultiTexCoord2svARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord3dARB)( GLenum texture, GLdouble s, GLdouble t, GLdouble r );

void VBOXGLTAG(glMultiTexCoord3dARB)( GLenum texture, GLdouble s, GLdouble t, GLdouble r )
{
	glim.MultiTexCoord3dARB( texture, s, t, r );
}

void VBOXGLTAG(glMultiTexCoord3dvARB)( GLenum texture, const GLdouble * t );

void VBOXGLTAG(glMultiTexCoord3dvARB)( GLenum texture, const GLdouble * t )
{
	glim.MultiTexCoord3dvARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord3fARB)( GLenum texture, GLfloat s, GLfloat t, GLfloat r );

void VBOXGLTAG(glMultiTexCoord3fARB)( GLenum texture, GLfloat s, GLfloat t, GLfloat r )
{
	glim.MultiTexCoord3fARB( texture, s, t, r );
}

void VBOXGLTAG(glMultiTexCoord3fvARB)( GLenum texture, const GLfloat * t );

void VBOXGLTAG(glMultiTexCoord3fvARB)( GLenum texture, const GLfloat * t )
{
	glim.MultiTexCoord3fvARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord3iARB)( GLenum texture, GLint s, GLint t, GLint r );

void VBOXGLTAG(glMultiTexCoord3iARB)( GLenum texture, GLint s, GLint t, GLint r )
{
	glim.MultiTexCoord3iARB( texture, s, t, r );
}

void VBOXGLTAG(glMultiTexCoord3ivARB)( GLenum texture, const GLint * t );

void VBOXGLTAG(glMultiTexCoord3ivARB)( GLenum texture, const GLint * t )
{
	glim.MultiTexCoord3ivARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord3sARB)( GLenum texture, GLshort s, GLshort t, GLshort r );

void VBOXGLTAG(glMultiTexCoord3sARB)( GLenum texture, GLshort s, GLshort t, GLshort r )
{
	glim.MultiTexCoord3sARB( texture, s, t, r );
}

void VBOXGLTAG(glMultiTexCoord3svARB)( GLenum texture, const GLshort * t );

void VBOXGLTAG(glMultiTexCoord3svARB)( GLenum texture, const GLshort * t )
{
	glim.MultiTexCoord3svARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord4dARB)( GLenum texture, GLdouble s, GLdouble t, GLdouble r, GLdouble q );

void VBOXGLTAG(glMultiTexCoord4dARB)( GLenum texture, GLdouble s, GLdouble t, GLdouble r, GLdouble q )
{
	glim.MultiTexCoord4dARB( texture, s, t, r, q );
}

void VBOXGLTAG(glMultiTexCoord4dvARB)( GLenum texture, const GLdouble * t );

void VBOXGLTAG(glMultiTexCoord4dvARB)( GLenum texture, const GLdouble * t )
{
	glim.MultiTexCoord4dvARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord4fARB)( GLenum texture, GLfloat s, GLfloat t, GLfloat r, GLfloat q );

void VBOXGLTAG(glMultiTexCoord4fARB)( GLenum texture, GLfloat s, GLfloat t, GLfloat r, GLfloat q )
{
	glim.MultiTexCoord4fARB( texture, s, t, r, q );
}

void VBOXGLTAG(glMultiTexCoord4fvARB)( GLenum texture, const GLfloat * t );

void VBOXGLTAG(glMultiTexCoord4fvARB)( GLenum texture, const GLfloat * t )
{
	glim.MultiTexCoord4fvARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord4iARB)( GLenum texture, GLint s, GLint t, GLint r, GLint q );

void VBOXGLTAG(glMultiTexCoord4iARB)( GLenum texture, GLint s, GLint t, GLint r, GLint q )
{
	glim.MultiTexCoord4iARB( texture, s, t, r, q );
}

void VBOXGLTAG(glMultiTexCoord4ivARB)( GLenum texture, const GLint * t );

void VBOXGLTAG(glMultiTexCoord4ivARB)( GLenum texture, const GLint * t )
{
	glim.MultiTexCoord4ivARB( texture, t );
}

void VBOXGLTAG(glMultiTexCoord4sARB)( GLenum texture, GLshort s, GLshort t, GLshort r, GLshort q );

void VBOXGLTAG(glMultiTexCoord4sARB)( GLenum texture, GLshort s, GLshort t, GLshort r, GLshort q )
{
	glim.MultiTexCoord4sARB( texture, s, t, r, q );
}

void VBOXGLTAG(glMultiTexCoord4svARB)( GLenum texture, const GLshort * t );

void VBOXGLTAG(glMultiTexCoord4svARB)( GLenum texture, const GLshort * t )
{
	glim.MultiTexCoord4svARB( texture, t );
}

void VBOXGLTAG(glNewList)( GLuint list, GLenum mode );

void VBOXGLTAG(glNewList)( GLuint list, GLenum mode )
{
	glim.NewList( list, mode );
}

void VBOXGLTAG(glNormal3b)( GLbyte nx, GLbyte ny, GLbyte nz );

void VBOXGLTAG(glNormal3b)( GLbyte nx, GLbyte ny, GLbyte nz )
{
	glim.Normal3b( nx, ny, nz );
}

void VBOXGLTAG(glNormal3bv)( const GLbyte * v );

void VBOXGLTAG(glNormal3bv)( const GLbyte * v )
{
	glim.Normal3bv( v );
}

void VBOXGLTAG(glNormal3d)( GLdouble nx, GLdouble ny, GLdouble nz );

void VBOXGLTAG(glNormal3d)( GLdouble nx, GLdouble ny, GLdouble nz )
{
	glim.Normal3d( nx, ny, nz );
}

void VBOXGLTAG(glNormal3dv)( const GLdouble * v );

void VBOXGLTAG(glNormal3dv)( const GLdouble * v )
{
	glim.Normal3dv( v );
}

void VBOXGLTAG(glNormal3f)( GLfloat nx, GLfloat ny, GLfloat nz );

void VBOXGLTAG(glNormal3f)( GLfloat nx, GLfloat ny, GLfloat nz )
{
	glim.Normal3f( nx, ny, nz );
}

void VBOXGLTAG(glNormal3fv)( const GLfloat * v );

void VBOXGLTAG(glNormal3fv)( const GLfloat * v )
{
	glim.Normal3fv( v );
}

void VBOXGLTAG(glNormal3i)( GLint nx, GLint ny, GLint nz );

void VBOXGLTAG(glNormal3i)( GLint nx, GLint ny, GLint nz )
{
	glim.Normal3i( nx, ny, nz );
}

void VBOXGLTAG(glNormal3iv)( const GLint * v );

void VBOXGLTAG(glNormal3iv)( const GLint * v )
{
	glim.Normal3iv( v );
}

void VBOXGLTAG(glNormal3s)( GLshort nx, GLshort ny, GLshort nz );

void VBOXGLTAG(glNormal3s)( GLshort nx, GLshort ny, GLshort nz )
{
	glim.Normal3s( nx, ny, nz );
}

void VBOXGLTAG(glNormal3sv)( const GLshort * v );

void VBOXGLTAG(glNormal3sv)( const GLshort * v )
{
	glim.Normal3sv( v );
}

void VBOXGLTAG(glNormalPointer)( GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glNormalPointer)( GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.NormalPointer( type, stride, pointer );
}

void VBOXGLTAG(glOrtho)( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );

void VBOXGLTAG(glOrtho)( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	glim.Ortho( left, right, bottom, top, zNear, zFar );
}

void VBOXGLTAG(glPassThrough)( GLfloat token );

void VBOXGLTAG(glPassThrough)( GLfloat token )
{
	glim.PassThrough( token );
}

void VBOXGLTAG(glPixelMapfv)( GLenum map, GLsizei mapsize, const GLfloat * values );

void VBOXGLTAG(glPixelMapfv)( GLenum map, GLsizei mapsize, const GLfloat * values )
{
	glim.PixelMapfv( map, mapsize, values );
}

void VBOXGLTAG(glPixelMapuiv)( GLenum map, GLsizei mapsize, const GLuint * values );

void VBOXGLTAG(glPixelMapuiv)( GLenum map, GLsizei mapsize, const GLuint * values )
{
	glim.PixelMapuiv( map, mapsize, values );
}

void VBOXGLTAG(glPixelMapusv)( GLenum map, GLsizei mapsize, const GLushort * values );

void VBOXGLTAG(glPixelMapusv)( GLenum map, GLsizei mapsize, const GLushort * values )
{
	glim.PixelMapusv( map, mapsize, values );
}

void VBOXGLTAG(glPixelStoref)( GLenum pname, GLfloat param );

void VBOXGLTAG(glPixelStoref)( GLenum pname, GLfloat param )
{
	glim.PixelStoref( pname, param );
}

void VBOXGLTAG(glPixelStorei)( GLenum pname, GLint param );

void VBOXGLTAG(glPixelStorei)( GLenum pname, GLint param )
{
	glim.PixelStorei( pname, param );
}

void VBOXGLTAG(glPixelTransferf)( GLenum pname, GLfloat param );

void VBOXGLTAG(glPixelTransferf)( GLenum pname, GLfloat param )
{
	glim.PixelTransferf( pname, param );
}

void VBOXGLTAG(glPixelTransferi)( GLenum pname, GLint param );

void VBOXGLTAG(glPixelTransferi)( GLenum pname, GLint param )
{
	glim.PixelTransferi( pname, param );
}

void VBOXGLTAG(glPixelZoom)( GLfloat xfactor, GLfloat yfactor );

void VBOXGLTAG(glPixelZoom)( GLfloat xfactor, GLfloat yfactor )
{
	glim.PixelZoom( xfactor, yfactor );
}

void VBOXGLTAG(glPointParameterfARB)( GLenum pname, GLfloat param );

void VBOXGLTAG(glPointParameterfARB)( GLenum pname, GLfloat param )
{
	glim.PointParameterfARB( pname, param );
}

void VBOXGLTAG(glPointParameterfvARB)( GLenum pname, const GLfloat * params );

void VBOXGLTAG(glPointParameterfvARB)( GLenum pname, const GLfloat * params )
{
	glim.PointParameterfvARB( pname, params );
}

void VBOXGLTAG(glPointParameteri)( GLenum pname, GLint param );

void VBOXGLTAG(glPointParameteri)( GLenum pname, GLint param )
{
	glim.PointParameteri( pname, param );
}

void VBOXGLTAG(glPointParameteriv)( GLenum pname, const GLint * param );

void VBOXGLTAG(glPointParameteriv)( GLenum pname, const GLint * param )
{
	glim.PointParameteriv( pname, param );
}

void VBOXGLTAG(glPointSize)( GLfloat size );

void VBOXGLTAG(glPointSize)( GLfloat size )
{
	glim.PointSize( size );
}

void VBOXGLTAG(glPolygonMode)( GLenum face, GLenum mode );

void VBOXGLTAG(glPolygonMode)( GLenum face, GLenum mode )
{
	glim.PolygonMode( face, mode );
}

void VBOXGLTAG(glPolygonOffset)( GLfloat factor, GLfloat units );

void VBOXGLTAG(glPolygonOffset)( GLfloat factor, GLfloat units )
{
	glim.PolygonOffset( factor, units );
}

void VBOXGLTAG(glPolygonStipple)( const GLubyte * mask );

void VBOXGLTAG(glPolygonStipple)( const GLubyte * mask )
{
	glim.PolygonStipple( mask );
}

void VBOXGLTAG(glPopAttrib)( void );

void VBOXGLTAG(glPopAttrib)( void )
{
	glim.PopAttrib(  );
}

void VBOXGLTAG(glPopClientAttrib)( void );

void VBOXGLTAG(glPopClientAttrib)( void )
{
	glim.PopClientAttrib(  );
}

void VBOXGLTAG(glPopMatrix)( void );

void VBOXGLTAG(glPopMatrix)( void )
{
	glim.PopMatrix(  );
}

void VBOXGLTAG(glPopName)( void );

void VBOXGLTAG(glPopName)( void )
{
	glim.PopName(  );
}

void VBOXGLTAG(glPrioritizeTextures)( GLsizei n, const GLuint * textures, const GLclampf * priorities );

void VBOXGLTAG(glPrioritizeTextures)( GLsizei n, const GLuint * textures, const GLclampf * priorities )
{
	glim.PrioritizeTextures( n, textures, priorities );
}

void VBOXGLTAG(glProgramEnvParameter4dARB)( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glProgramEnvParameter4dARB)( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.ProgramEnvParameter4dARB( target, index, x, y, z, w );
}

void VBOXGLTAG(glProgramEnvParameter4dvARB)( GLenum target, GLuint index, const GLdouble * params );

void VBOXGLTAG(glProgramEnvParameter4dvARB)( GLenum target, GLuint index, const GLdouble * params )
{
	glim.ProgramEnvParameter4dvARB( target, index, params );
}

void VBOXGLTAG(glProgramEnvParameter4fARB)( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glProgramEnvParameter4fARB)( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.ProgramEnvParameter4fARB( target, index, x, y, z, w );
}

void VBOXGLTAG(glProgramEnvParameter4fvARB)( GLenum target, GLuint index, const GLfloat * params );

void VBOXGLTAG(glProgramEnvParameter4fvARB)( GLenum target, GLuint index, const GLfloat * params )
{
	glim.ProgramEnvParameter4fvARB( target, index, params );
}

void VBOXGLTAG(glProgramLocalParameter4dARB)( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glProgramLocalParameter4dARB)( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.ProgramLocalParameter4dARB( target, index, x, y, z, w );
}

void VBOXGLTAG(glProgramLocalParameter4dvARB)( GLenum target, GLuint index, const GLdouble * params );

void VBOXGLTAG(glProgramLocalParameter4dvARB)( GLenum target, GLuint index, const GLdouble * params )
{
	glim.ProgramLocalParameter4dvARB( target, index, params );
}

void VBOXGLTAG(glProgramLocalParameter4fARB)( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glProgramLocalParameter4fARB)( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.ProgramLocalParameter4fARB( target, index, x, y, z, w );
}

void VBOXGLTAG(glProgramLocalParameter4fvARB)( GLenum target, GLuint index, const GLfloat * params );

void VBOXGLTAG(glProgramLocalParameter4fvARB)( GLenum target, GLuint index, const GLfloat * params )
{
	glim.ProgramLocalParameter4fvARB( target, index, params );
}

void VBOXGLTAG(glProgramNamedParameter4dNV)( GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glProgramNamedParameter4dNV)( GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.ProgramNamedParameter4dNV( id, len, name, x, y, z, w );
}

void VBOXGLTAG(glProgramNamedParameter4dvNV)( GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v );

void VBOXGLTAG(glProgramNamedParameter4dvNV)( GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v )
{
	glim.ProgramNamedParameter4dvNV( id, len, name, v );
}

void VBOXGLTAG(glProgramNamedParameter4fNV)( GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glProgramNamedParameter4fNV)( GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.ProgramNamedParameter4fNV( id, len, name, x, y, z, w );
}

void VBOXGLTAG(glProgramNamedParameter4fvNV)( GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v );

void VBOXGLTAG(glProgramNamedParameter4fvNV)( GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v )
{
	glim.ProgramNamedParameter4fvNV( id, len, name, v );
}

void VBOXGLTAG(glProgramParameter4dNV)( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glProgramParameter4dNV)( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.ProgramParameter4dNV( target, index, x, y, z, w );
}

void VBOXGLTAG(glProgramParameter4dvNV)( GLenum target, GLuint index, const GLdouble * params );

void VBOXGLTAG(glProgramParameter4dvNV)( GLenum target, GLuint index, const GLdouble * params )
{
	glim.ProgramParameter4dvNV( target, index, params );
}

void VBOXGLTAG(glProgramParameter4fNV)( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glProgramParameter4fNV)( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.ProgramParameter4fNV( target, index, x, y, z, w );
}

void VBOXGLTAG(glProgramParameter4fvNV)( GLenum target, GLuint index, const GLfloat * params );

void VBOXGLTAG(glProgramParameter4fvNV)( GLenum target, GLuint index, const GLfloat * params )
{
	glim.ProgramParameter4fvNV( target, index, params );
}

void VBOXGLTAG(glProgramParameters4dvNV)( GLenum target, GLuint index, GLuint num, const GLdouble * params );

void VBOXGLTAG(glProgramParameters4dvNV)( GLenum target, GLuint index, GLuint num, const GLdouble * params )
{
	glim.ProgramParameters4dvNV( target, index, num, params );
}

void VBOXGLTAG(glProgramParameters4fvNV)( GLenum target, GLuint index, GLuint num, const GLfloat * params );

void VBOXGLTAG(glProgramParameters4fvNV)( GLenum target, GLuint index, GLuint num, const GLfloat * params )
{
	glim.ProgramParameters4fvNV( target, index, num, params );
}

void VBOXGLTAG(glProgramStringARB)( GLenum target, GLenum format, GLsizei len, const GLvoid * string );

void VBOXGLTAG(glProgramStringARB)( GLenum target, GLenum format, GLsizei len, const GLvoid * string )
{
	glim.ProgramStringARB( target, format, len, string );
}

void VBOXGLTAG(glPushAttrib)( GLbitfield mask );

void VBOXGLTAG(glPushAttrib)( GLbitfield mask )
{
	glim.PushAttrib( mask );
}

void VBOXGLTAG(glPushClientAttrib)( GLbitfield mask );

void VBOXGLTAG(glPushClientAttrib)( GLbitfield mask )
{
	glim.PushClientAttrib( mask );
}

void VBOXGLTAG(glPushMatrix)( void );

void VBOXGLTAG(glPushMatrix)( void )
{
	glim.PushMatrix(  );
}

void VBOXGLTAG(glPushName)( GLuint name );

void VBOXGLTAG(glPushName)( GLuint name )
{
	glim.PushName( name );
}

void VBOXGLTAG(glRasterPos2d)( GLdouble x, GLdouble y );

void VBOXGLTAG(glRasterPos2d)( GLdouble x, GLdouble y )
{
	glim.RasterPos2d( x, y );
}

void VBOXGLTAG(glRasterPos2dv)( const GLdouble * v );

void VBOXGLTAG(glRasterPos2dv)( const GLdouble * v )
{
	glim.RasterPos2dv( v );
}

void VBOXGLTAG(glRasterPos2f)( GLfloat x, GLfloat y );

void VBOXGLTAG(glRasterPos2f)( GLfloat x, GLfloat y )
{
	glim.RasterPos2f( x, y );
}

void VBOXGLTAG(glRasterPos2fv)( const GLfloat * v );

void VBOXGLTAG(glRasterPos2fv)( const GLfloat * v )
{
	glim.RasterPos2fv( v );
}

void VBOXGLTAG(glRasterPos2i)( GLint x, GLint y );

void VBOXGLTAG(glRasterPos2i)( GLint x, GLint y )
{
	glim.RasterPos2i( x, y );
}

void VBOXGLTAG(glRasterPos2iv)( const GLint * v );

void VBOXGLTAG(glRasterPos2iv)( const GLint * v )
{
	glim.RasterPos2iv( v );
}

void VBOXGLTAG(glRasterPos2s)( GLshort x, GLshort y );

void VBOXGLTAG(glRasterPos2s)( GLshort x, GLshort y )
{
	glim.RasterPos2s( x, y );
}

void VBOXGLTAG(glRasterPos2sv)( const GLshort * v );

void VBOXGLTAG(glRasterPos2sv)( const GLshort * v )
{
	glim.RasterPos2sv( v );
}

void VBOXGLTAG(glRasterPos3d)( GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glRasterPos3d)( GLdouble x, GLdouble y, GLdouble z )
{
	glim.RasterPos3d( x, y, z );
}

void VBOXGLTAG(glRasterPos3dv)( const GLdouble * v );

void VBOXGLTAG(glRasterPos3dv)( const GLdouble * v )
{
	glim.RasterPos3dv( v );
}

void VBOXGLTAG(glRasterPos3f)( GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glRasterPos3f)( GLfloat x, GLfloat y, GLfloat z )
{
	glim.RasterPos3f( x, y, z );
}

void VBOXGLTAG(glRasterPos3fv)( const GLfloat * v );

void VBOXGLTAG(glRasterPos3fv)( const GLfloat * v )
{
	glim.RasterPos3fv( v );
}

void VBOXGLTAG(glRasterPos3i)( GLint x, GLint y, GLint z );

void VBOXGLTAG(glRasterPos3i)( GLint x, GLint y, GLint z )
{
	glim.RasterPos3i( x, y, z );
}

void VBOXGLTAG(glRasterPos3iv)( const GLint * v );

void VBOXGLTAG(glRasterPos3iv)( const GLint * v )
{
	glim.RasterPos3iv( v );
}

void VBOXGLTAG(glRasterPos3s)( GLshort x, GLshort y, GLshort z );

void VBOXGLTAG(glRasterPos3s)( GLshort x, GLshort y, GLshort z )
{
	glim.RasterPos3s( x, y, z );
}

void VBOXGLTAG(glRasterPos3sv)( const GLshort * v );

void VBOXGLTAG(glRasterPos3sv)( const GLshort * v )
{
	glim.RasterPos3sv( v );
}

void VBOXGLTAG(glRasterPos4d)( GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glRasterPos4d)( GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.RasterPos4d( x, y, z, w );
}

void VBOXGLTAG(glRasterPos4dv)( const GLdouble * v );

void VBOXGLTAG(glRasterPos4dv)( const GLdouble * v )
{
	glim.RasterPos4dv( v );
}

void VBOXGLTAG(glRasterPos4f)( GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glRasterPos4f)( GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.RasterPos4f( x, y, z, w );
}

void VBOXGLTAG(glRasterPos4fv)( const GLfloat * v );

void VBOXGLTAG(glRasterPos4fv)( const GLfloat * v )
{
	glim.RasterPos4fv( v );
}

void VBOXGLTAG(glRasterPos4i)( GLint x, GLint y, GLint z, GLint w );

void VBOXGLTAG(glRasterPos4i)( GLint x, GLint y, GLint z, GLint w )
{
	glim.RasterPos4i( x, y, z, w );
}

void VBOXGLTAG(glRasterPos4iv)( const GLint * v );

void VBOXGLTAG(glRasterPos4iv)( const GLint * v )
{
	glim.RasterPos4iv( v );
}

void VBOXGLTAG(glRasterPos4s)( GLshort x, GLshort y, GLshort z, GLshort w );

void VBOXGLTAG(glRasterPos4s)( GLshort x, GLshort y, GLshort z, GLshort w )
{
	glim.RasterPos4s( x, y, z, w );
}

void VBOXGLTAG(glRasterPos4sv)( const GLshort * v );

void VBOXGLTAG(glRasterPos4sv)( const GLshort * v )
{
	glim.RasterPos4sv( v );
}

void VBOXGLTAG(glReadBuffer)( GLenum mode );

void VBOXGLTAG(glReadBuffer)( GLenum mode )
{
	glim.ReadBuffer( mode );
}

void VBOXGLTAG(glReadPixels)( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels );

void VBOXGLTAG(glReadPixels)( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels )
{
	glim.ReadPixels( x, y, width, height, format, type, pixels );
}

void VBOXGLTAG(glRectd)( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 );

void VBOXGLTAG(glRectd)( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 )
{
	glim.Rectd( x1, y1, x2, y2 );
}

void VBOXGLTAG(glRectdv)( const GLdouble * v1, const GLdouble * v2 );

void VBOXGLTAG(glRectdv)( const GLdouble * v1, const GLdouble * v2 )
{
	glim.Rectdv( v1, v2 );
}

void VBOXGLTAG(glRectf)( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 );

void VBOXGLTAG(glRectf)( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 )
{
	glim.Rectf( x1, y1, x2, y2 );
}

void VBOXGLTAG(glRectfv)( const GLfloat * v1, const GLfloat * v2 );

void VBOXGLTAG(glRectfv)( const GLfloat * v1, const GLfloat * v2 )
{
	glim.Rectfv( v1, v2 );
}

void VBOXGLTAG(glRecti)( GLint x1, GLint y1, GLint x2, GLint y2 );

void VBOXGLTAG(glRecti)( GLint x1, GLint y1, GLint x2, GLint y2 )
{
	glim.Recti( x1, y1, x2, y2 );
}

void VBOXGLTAG(glRectiv)( const GLint * v1, const GLint * v2 );

void VBOXGLTAG(glRectiv)( const GLint * v1, const GLint * v2 )
{
	glim.Rectiv( v1, v2 );
}

void VBOXGLTAG(glRects)( GLshort x1, GLshort y1, GLshort x2, GLshort y2 );

void VBOXGLTAG(glRects)( GLshort x1, GLshort y1, GLshort x2, GLshort y2 )
{
	glim.Rects( x1, y1, x2, y2 );
}

void VBOXGLTAG(glRectsv)( const GLshort * v1, const GLshort * v2 );

void VBOXGLTAG(glRectsv)( const GLshort * v1, const GLshort * v2 )
{
	glim.Rectsv( v1, v2 );
}

GLint VBOXGLTAG(glRenderMode)( GLenum mode );

GLint VBOXGLTAG(glRenderMode)( GLenum mode )
{
	return  glim.RenderMode( mode );
}

void VBOXGLTAG(glRenderbufferStorageEXT)( GLenum target, GLenum internalformat, GLsizei width, GLsizei height );

void VBOXGLTAG(glRenderbufferStorageEXT)( GLenum target, GLenum internalformat, GLsizei width, GLsizei height )
{
	glim.RenderbufferStorageEXT( target, internalformat, width, height );
}

void VBOXGLTAG(glRequestResidentProgramsNV)( GLsizei n, const GLuint * ids );

void VBOXGLTAG(glRequestResidentProgramsNV)( GLsizei n, const GLuint * ids )
{
	glim.RequestResidentProgramsNV( n, ids );
}

void VBOXGLTAG(glRotated)( GLdouble angle, GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glRotated)( GLdouble angle, GLdouble x, GLdouble y, GLdouble z )
{
	glim.Rotated( angle, x, y, z );
}

void VBOXGLTAG(glRotatef)( GLfloat angle, GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glRotatef)( GLfloat angle, GLfloat x, GLfloat y, GLfloat z )
{
	glim.Rotatef( angle, x, y, z );
}

void VBOXGLTAG(glSampleCoverageARB)( GLclampf value, GLboolean invert );

void VBOXGLTAG(glSampleCoverageARB)( GLclampf value, GLboolean invert )
{
	glim.SampleCoverageARB( value, invert );
}

void VBOXGLTAG(glScaled)( GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glScaled)( GLdouble x, GLdouble y, GLdouble z )
{
	glim.Scaled( x, y, z );
}

void VBOXGLTAG(glScalef)( GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glScalef)( GLfloat x, GLfloat y, GLfloat z )
{
	glim.Scalef( x, y, z );
}

void VBOXGLTAG(glScissor)( GLint x, GLint y, GLsizei width, GLsizei height );

void VBOXGLTAG(glScissor)( GLint x, GLint y, GLsizei width, GLsizei height )
{
	glim.Scissor( x, y, width, height );
}

void VBOXGLTAG(glSecondaryColor3bEXT)( GLbyte red, GLbyte green, GLbyte blue );

void VBOXGLTAG(glSecondaryColor3bEXT)( GLbyte red, GLbyte green, GLbyte blue )
{
	glim.SecondaryColor3bEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3bvEXT)( const GLbyte * v );

void VBOXGLTAG(glSecondaryColor3bvEXT)( const GLbyte * v )
{
	glim.SecondaryColor3bvEXT( v );
}

void VBOXGLTAG(glSecondaryColor3dEXT)( GLdouble red, GLdouble green, GLdouble blue );

void VBOXGLTAG(glSecondaryColor3dEXT)( GLdouble red, GLdouble green, GLdouble blue )
{
	glim.SecondaryColor3dEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3dvEXT)( const GLdouble * v );

void VBOXGLTAG(glSecondaryColor3dvEXT)( const GLdouble * v )
{
	glim.SecondaryColor3dvEXT( v );
}

void VBOXGLTAG(glSecondaryColor3fEXT)( GLfloat red, GLfloat green, GLfloat blue );

void VBOXGLTAG(glSecondaryColor3fEXT)( GLfloat red, GLfloat green, GLfloat blue )
{
	glim.SecondaryColor3fEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3fvEXT)( const GLfloat * v );

void VBOXGLTAG(glSecondaryColor3fvEXT)( const GLfloat * v )
{
	glim.SecondaryColor3fvEXT( v );
}

void VBOXGLTAG(glSecondaryColor3iEXT)( GLint red, GLint green, GLint blue );

void VBOXGLTAG(glSecondaryColor3iEXT)( GLint red, GLint green, GLint blue )
{
	glim.SecondaryColor3iEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3ivEXT)( const GLint * v );

void VBOXGLTAG(glSecondaryColor3ivEXT)( const GLint * v )
{
	glim.SecondaryColor3ivEXT( v );
}

void VBOXGLTAG(glSecondaryColor3sEXT)( GLshort red, GLshort green, GLshort blue );

void VBOXGLTAG(glSecondaryColor3sEXT)( GLshort red, GLshort green, GLshort blue )
{
	glim.SecondaryColor3sEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3svEXT)( const GLshort * v );

void VBOXGLTAG(glSecondaryColor3svEXT)( const GLshort * v )
{
	glim.SecondaryColor3svEXT( v );
}

void VBOXGLTAG(glSecondaryColor3ubEXT)( GLubyte red, GLubyte green, GLubyte blue );

void VBOXGLTAG(glSecondaryColor3ubEXT)( GLubyte red, GLubyte green, GLubyte blue )
{
	glim.SecondaryColor3ubEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3ubvEXT)( const GLubyte * v );

void VBOXGLTAG(glSecondaryColor3ubvEXT)( const GLubyte * v )
{
	glim.SecondaryColor3ubvEXT( v );
}

void VBOXGLTAG(glSecondaryColor3uiEXT)( GLuint red, GLuint green, GLuint blue );

void VBOXGLTAG(glSecondaryColor3uiEXT)( GLuint red, GLuint green, GLuint blue )
{
	glim.SecondaryColor3uiEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3uivEXT)( const GLuint * v );

void VBOXGLTAG(glSecondaryColor3uivEXT)( const GLuint * v )
{
	glim.SecondaryColor3uivEXT( v );
}

void VBOXGLTAG(glSecondaryColor3usEXT)( GLushort red, GLushort green, GLushort blue );

void VBOXGLTAG(glSecondaryColor3usEXT)( GLushort red, GLushort green, GLushort blue )
{
	glim.SecondaryColor3usEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3usvEXT)( const GLushort * v );

void VBOXGLTAG(glSecondaryColor3usvEXT)( const GLushort * v )
{
	glim.SecondaryColor3usvEXT( v );
}

void VBOXGLTAG(glSecondaryColorPointerEXT)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glSecondaryColorPointerEXT)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.SecondaryColorPointerEXT( size, type, stride, pointer );
}

void VBOXGLTAG(glSelectBuffer)( GLsizei size, GLuint * buffer );

void VBOXGLTAG(glSelectBuffer)( GLsizei size, GLuint * buffer )
{
	glim.SelectBuffer( size, buffer );
}

void VBOXGLTAG(glSemaphoreCreateCR)( GLuint name, GLuint count );

void VBOXGLTAG(glSemaphoreCreateCR)( GLuint name, GLuint count )
{
	glim.SemaphoreCreateCR( name, count );
}

void VBOXGLTAG(glSemaphoreDestroyCR)( GLuint name );

void VBOXGLTAG(glSemaphoreDestroyCR)( GLuint name )
{
	glim.SemaphoreDestroyCR( name );
}

void VBOXGLTAG(glSemaphorePCR)( GLuint name );

void VBOXGLTAG(glSemaphorePCR)( GLuint name )
{
	glim.SemaphorePCR( name );
}

void VBOXGLTAG(glSemaphoreVCR)( GLuint name );

void VBOXGLTAG(glSemaphoreVCR)( GLuint name )
{
	glim.SemaphoreVCR( name );
}

void VBOXGLTAG(glSetFenceNV)( GLuint fence, GLenum condition );

void VBOXGLTAG(glSetFenceNV)( GLuint fence, GLenum condition )
{
	glim.SetFenceNV( fence, condition );
}

void VBOXGLTAG(glShadeModel)( GLenum mode );

void VBOXGLTAG(glShadeModel)( GLenum mode )
{
	glim.ShadeModel( mode );
}

void VBOXGLTAG(glShaderSource)( GLuint shader, GLsizei count, const char ** string, const GLint * length );

void VBOXGLTAG(glShaderSource)( GLuint shader, GLsizei count, const char ** string, const GLint * length )
{
	glim.ShaderSource( shader, count, string, length );
}

void VBOXGLTAG(glStencilFunc)( GLenum func, GLint ref, GLuint mask );

void VBOXGLTAG(glStencilFunc)( GLenum func, GLint ref, GLuint mask )
{
	glim.StencilFunc( func, ref, mask );
}

void VBOXGLTAG(glStencilFuncSeparate)( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask );

void VBOXGLTAG(glStencilFuncSeparate)( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask )
{
	glim.StencilFuncSeparate( frontfunc, backfunc, ref, mask );
}

void VBOXGLTAG(glStencilMask)( GLuint mask );

void VBOXGLTAG(glStencilMask)( GLuint mask )
{
	glim.StencilMask( mask );
}

void VBOXGLTAG(glStencilMaskSeparate)( GLenum face, GLuint mask );

void VBOXGLTAG(glStencilMaskSeparate)( GLenum face, GLuint mask )
{
	glim.StencilMaskSeparate( face, mask );
}

void VBOXGLTAG(glStencilOp)( GLenum fail, GLenum zfail, GLenum zpass );

void VBOXGLTAG(glStencilOp)( GLenum fail, GLenum zfail, GLenum zpass )
{
	glim.StencilOp( fail, zfail, zpass );
}

void VBOXGLTAG(glStencilOpSeparate)( GLenum face, GLenum fail, GLenum zfail, GLenum zpass );

void VBOXGLTAG(glStencilOpSeparate)( GLenum face, GLenum fail, GLenum zfail, GLenum zpass )
{
	glim.StencilOpSeparate( face, fail, zfail, zpass );
}

void VBOXGLTAG(glStringMarkerGREMEDY)( GLsizei len, const GLvoid* string );

void VBOXGLTAG(glStringMarkerGREMEDY)( GLsizei len, const GLvoid* string )
{
	glim.StringMarkerGREMEDY( len, string );
}

GLboolean VBOXGLTAG(glTestFenceNV)( GLuint fence );

GLboolean VBOXGLTAG(glTestFenceNV)( GLuint fence )
{
	return  glim.TestFenceNV( fence );
}

void VBOXGLTAG(glTexCoord1d)( GLdouble s );

void VBOXGLTAG(glTexCoord1d)( GLdouble s )
{
	glim.TexCoord1d( s );
}

void VBOXGLTAG(glTexCoord1dv)( const GLdouble * v );

void VBOXGLTAG(glTexCoord1dv)( const GLdouble * v )
{
	glim.TexCoord1dv( v );
}

void VBOXGLTAG(glTexCoord1f)( GLfloat s );

void VBOXGLTAG(glTexCoord1f)( GLfloat s )
{
	glim.TexCoord1f( s );
}

void VBOXGLTAG(glTexCoord1fv)( const GLfloat * v );

void VBOXGLTAG(glTexCoord1fv)( const GLfloat * v )
{
	glim.TexCoord1fv( v );
}

void VBOXGLTAG(glTexCoord1i)( GLint s );

void VBOXGLTAG(glTexCoord1i)( GLint s )
{
	glim.TexCoord1i( s );
}

void VBOXGLTAG(glTexCoord1iv)( const GLint * v );

void VBOXGLTAG(glTexCoord1iv)( const GLint * v )
{
	glim.TexCoord1iv( v );
}

void VBOXGLTAG(glTexCoord1s)( GLshort s );

void VBOXGLTAG(glTexCoord1s)( GLshort s )
{
	glim.TexCoord1s( s );
}

void VBOXGLTAG(glTexCoord1sv)( const GLshort * v );

void VBOXGLTAG(glTexCoord1sv)( const GLshort * v )
{
	glim.TexCoord1sv( v );
}

void VBOXGLTAG(glTexCoord2d)( GLdouble s, GLdouble t );

void VBOXGLTAG(glTexCoord2d)( GLdouble s, GLdouble t )
{
	glim.TexCoord2d( s, t );
}

void VBOXGLTAG(glTexCoord2dv)( const GLdouble * v );

void VBOXGLTAG(glTexCoord2dv)( const GLdouble * v )
{
	glim.TexCoord2dv( v );
}

void VBOXGLTAG(glTexCoord2f)( GLfloat s, GLfloat t );

void VBOXGLTAG(glTexCoord2f)( GLfloat s, GLfloat t )
{
	glim.TexCoord2f( s, t );
}

void VBOXGLTAG(glTexCoord2fv)( const GLfloat * v );

void VBOXGLTAG(glTexCoord2fv)( const GLfloat * v )
{
	glim.TexCoord2fv( v );
}

void VBOXGLTAG(glTexCoord2i)( GLint s, GLint t );

void VBOXGLTAG(glTexCoord2i)( GLint s, GLint t )
{
	glim.TexCoord2i( s, t );
}

void VBOXGLTAG(glTexCoord2iv)( const GLint * v );

void VBOXGLTAG(glTexCoord2iv)( const GLint * v )
{
	glim.TexCoord2iv( v );
}

void VBOXGLTAG(glTexCoord2s)( GLshort s, GLshort t );

void VBOXGLTAG(glTexCoord2s)( GLshort s, GLshort t )
{
	glim.TexCoord2s( s, t );
}

void VBOXGLTAG(glTexCoord2sv)( const GLshort * v );

void VBOXGLTAG(glTexCoord2sv)( const GLshort * v )
{
	glim.TexCoord2sv( v );
}

void VBOXGLTAG(glTexCoord3d)( GLdouble s, GLdouble t, GLdouble r );

void VBOXGLTAG(glTexCoord3d)( GLdouble s, GLdouble t, GLdouble r )
{
	glim.TexCoord3d( s, t, r );
}

void VBOXGLTAG(glTexCoord3dv)( const GLdouble * v );

void VBOXGLTAG(glTexCoord3dv)( const GLdouble * v )
{
	glim.TexCoord3dv( v );
}

void VBOXGLTAG(glTexCoord3f)( GLfloat s, GLfloat t, GLfloat r );

void VBOXGLTAG(glTexCoord3f)( GLfloat s, GLfloat t, GLfloat r )
{
	glim.TexCoord3f( s, t, r );
}

void VBOXGLTAG(glTexCoord3fv)( const GLfloat * v );

void VBOXGLTAG(glTexCoord3fv)( const GLfloat * v )
{
	glim.TexCoord3fv( v );
}

void VBOXGLTAG(glTexCoord3i)( GLint s, GLint t, GLint r );

void VBOXGLTAG(glTexCoord3i)( GLint s, GLint t, GLint r )
{
	glim.TexCoord3i( s, t, r );
}

void VBOXGLTAG(glTexCoord3iv)( const GLint * v );

void VBOXGLTAG(glTexCoord3iv)( const GLint * v )
{
	glim.TexCoord3iv( v );
}

void VBOXGLTAG(glTexCoord3s)( GLshort s, GLshort t, GLshort r );

void VBOXGLTAG(glTexCoord3s)( GLshort s, GLshort t, GLshort r )
{
	glim.TexCoord3s( s, t, r );
}

void VBOXGLTAG(glTexCoord3sv)( const GLshort * v );

void VBOXGLTAG(glTexCoord3sv)( const GLshort * v )
{
	glim.TexCoord3sv( v );
}

void VBOXGLTAG(glTexCoord4d)( GLdouble s, GLdouble t, GLdouble r, GLdouble q );

void VBOXGLTAG(glTexCoord4d)( GLdouble s, GLdouble t, GLdouble r, GLdouble q )
{
	glim.TexCoord4d( s, t, r, q );
}

void VBOXGLTAG(glTexCoord4dv)( const GLdouble * v );

void VBOXGLTAG(glTexCoord4dv)( const GLdouble * v )
{
	glim.TexCoord4dv( v );
}

void VBOXGLTAG(glTexCoord4f)( GLfloat s, GLfloat t, GLfloat r, GLfloat q );

void VBOXGLTAG(glTexCoord4f)( GLfloat s, GLfloat t, GLfloat r, GLfloat q )
{
	glim.TexCoord4f( s, t, r, q );
}

void VBOXGLTAG(glTexCoord4fv)( const GLfloat * v );

void VBOXGLTAG(glTexCoord4fv)( const GLfloat * v )
{
	glim.TexCoord4fv( v );
}

void VBOXGLTAG(glTexCoord4i)( GLint s, GLint t, GLint r, GLint q );

void VBOXGLTAG(glTexCoord4i)( GLint s, GLint t, GLint r, GLint q )
{
	glim.TexCoord4i( s, t, r, q );
}

void VBOXGLTAG(glTexCoord4iv)( const GLint * v );

void VBOXGLTAG(glTexCoord4iv)( const GLint * v )
{
	glim.TexCoord4iv( v );
}

void VBOXGLTAG(glTexCoord4s)( GLshort s, GLshort t, GLshort r, GLshort q );

void VBOXGLTAG(glTexCoord4s)( GLshort s, GLshort t, GLshort r, GLshort q )
{
	glim.TexCoord4s( s, t, r, q );
}

void VBOXGLTAG(glTexCoord4sv)( const GLshort * v );

void VBOXGLTAG(glTexCoord4sv)( const GLshort * v )
{
	glim.TexCoord4sv( v );
}

void VBOXGLTAG(glTexCoordPointer)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glTexCoordPointer)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.TexCoordPointer( size, type, stride, pointer );
}

void VBOXGLTAG(glTexEnvf)( GLenum target, GLenum pname, GLfloat param );

void VBOXGLTAG(glTexEnvf)( GLenum target, GLenum pname, GLfloat param )
{
	glim.TexEnvf( target, pname, param );
}

void VBOXGLTAG(glTexEnvfv)( GLenum target, GLenum pname, const GLfloat * params );

void VBOXGLTAG(glTexEnvfv)( GLenum target, GLenum pname, const GLfloat * params )
{
	glim.TexEnvfv( target, pname, params );
}

void VBOXGLTAG(glTexEnvi)( GLenum target, GLenum pname, GLint param );

void VBOXGLTAG(glTexEnvi)( GLenum target, GLenum pname, GLint param )
{
	glim.TexEnvi( target, pname, param );
}

void VBOXGLTAG(glTexEnviv)( GLenum target, GLenum pname, const GLint * params );

void VBOXGLTAG(glTexEnviv)( GLenum target, GLenum pname, const GLint * params )
{
	glim.TexEnviv( target, pname, params );
}

void VBOXGLTAG(glTexGend)( GLenum coord, GLenum pname, GLdouble param );

void VBOXGLTAG(glTexGend)( GLenum coord, GLenum pname, GLdouble param )
{
	glim.TexGend( coord, pname, param );
}

void VBOXGLTAG(glTexGendv)( GLenum coord, GLenum pname, const GLdouble * params );

void VBOXGLTAG(glTexGendv)( GLenum coord, GLenum pname, const GLdouble * params )
{
	glim.TexGendv( coord, pname, params );
}

void VBOXGLTAG(glTexGenf)( GLenum coord, GLenum pname, GLfloat param );

void VBOXGLTAG(glTexGenf)( GLenum coord, GLenum pname, GLfloat param )
{
	glim.TexGenf( coord, pname, param );
}

void VBOXGLTAG(glTexGenfv)( GLenum coord, GLenum pname, const GLfloat * params );

void VBOXGLTAG(glTexGenfv)( GLenum coord, GLenum pname, const GLfloat * params )
{
	glim.TexGenfv( coord, pname, params );
}

void VBOXGLTAG(glTexGeni)( GLenum coord, GLenum pname, GLint param );

void VBOXGLTAG(glTexGeni)( GLenum coord, GLenum pname, GLint param )
{
	glim.TexGeni( coord, pname, param );
}

void VBOXGLTAG(glTexGeniv)( GLenum coord, GLenum pname, const GLint * params );

void VBOXGLTAG(glTexGeniv)( GLenum coord, GLenum pname, const GLint * params )
{
	glim.TexGeniv( coord, pname, params );
}

void VBOXGLTAG(glTexImage1D)( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexImage1D)( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexImage1D( target, level, internalFormat, width, border, format, type, pixels );
}

void VBOXGLTAG(glTexImage2D)( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexImage2D)( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexImage2D( target, level, internalFormat, width, height, border, format, type, pixels );
}

void VBOXGLTAG(glTexImage3D)( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexImage3D)( GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexImage3D( target, level, internalFormat, width, height, depth, border, format, type, pixels );
}

void VBOXGLTAG(glTexImage3DEXT)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexImage3DEXT)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexImage3DEXT( target, level, internalFormat, width, height, depth, border, format, type, pixels );
}

void VBOXGLTAG(glTexParameterf)( GLenum target, GLenum pname, GLfloat param );

void VBOXGLTAG(glTexParameterf)( GLenum target, GLenum pname, GLfloat param )
{
	glim.TexParameterf( target, pname, param );
}

void VBOXGLTAG(glTexParameterfv)( GLenum target, GLenum pname, const GLfloat * params );

void VBOXGLTAG(glTexParameterfv)( GLenum target, GLenum pname, const GLfloat * params )
{
	glim.TexParameterfv( target, pname, params );
}

void VBOXGLTAG(glTexParameteri)( GLenum target, GLenum pname, GLint param );

void VBOXGLTAG(glTexParameteri)( GLenum target, GLenum pname, GLint param )
{
	glim.TexParameteri( target, pname, param );
}

void VBOXGLTAG(glTexParameteriv)( GLenum target, GLenum pname, const GLint * params );

void VBOXGLTAG(glTexParameteriv)( GLenum target, GLenum pname, const GLint * params )
{
	glim.TexParameteriv( target, pname, params );
}

void VBOXGLTAG(glTexSubImage1D)( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexSubImage1D)( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexSubImage1D( target, level, xoffset, width, format, type, pixels );
}

void VBOXGLTAG(glTexSubImage2D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexSubImage2D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexSubImage2D( target, level, xoffset, yoffset, width, height, format, type, pixels );
}

void VBOXGLTAG(glTexSubImage3D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexSubImage3D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexSubImage3D( target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}

void VBOXGLTAG(glTrackMatrixNV)( GLenum target, GLuint address, GLenum matrix, GLenum transform );

void VBOXGLTAG(glTrackMatrixNV)( GLenum target, GLuint address, GLenum matrix, GLenum transform )
{
	glim.TrackMatrixNV( target, address, matrix, transform );
}

void VBOXGLTAG(glTranslated)( GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glTranslated)( GLdouble x, GLdouble y, GLdouble z )
{
	glim.Translated( x, y, z );
}

void VBOXGLTAG(glTranslatef)( GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glTranslatef)( GLfloat x, GLfloat y, GLfloat z )
{
	glim.Translatef( x, y, z );
}

void VBOXGLTAG(glUniform1f)( GLint location, GLfloat v0 );

void VBOXGLTAG(glUniform1f)( GLint location, GLfloat v0 )
{
	glim.Uniform1f( location, v0 );
}

void VBOXGLTAG(glUniform1fv)( GLint location, GLsizei count, const GLfloat * value );

void VBOXGLTAG(glUniform1fv)( GLint location, GLsizei count, const GLfloat * value )
{
	glim.Uniform1fv( location, count, value );
}

void VBOXGLTAG(glUniform1i)( GLint location, GLint v0 );

void VBOXGLTAG(glUniform1i)( GLint location, GLint v0 )
{
	glim.Uniform1i( location, v0 );
}

void VBOXGLTAG(glUniform1iv)( GLint location, GLsizei count, const GLint * value );

void VBOXGLTAG(glUniform1iv)( GLint location, GLsizei count, const GLint * value )
{
	glim.Uniform1iv( location, count, value );
}

void VBOXGLTAG(glUniform2f)( GLint location, GLfloat v0, GLfloat v1 );

void VBOXGLTAG(glUniform2f)( GLint location, GLfloat v0, GLfloat v1 )
{
	glim.Uniform2f( location, v0, v1 );
}

void VBOXGLTAG(glUniform2fv)( GLint location, GLsizei count, const GLfloat * value );

void VBOXGLTAG(glUniform2fv)( GLint location, GLsizei count, const GLfloat * value )
{
	glim.Uniform2fv( location, count, value );
}

void VBOXGLTAG(glUniform2i)( GLint location, GLint v0, GLint v1 );

void VBOXGLTAG(glUniform2i)( GLint location, GLint v0, GLint v1 )
{
	glim.Uniform2i( location, v0, v1 );
}

void VBOXGLTAG(glUniform2iv)( GLint location, GLsizei count, const GLint * value );

void VBOXGLTAG(glUniform2iv)( GLint location, GLsizei count, const GLint * value )
{
	glim.Uniform2iv( location, count, value );
}

void VBOXGLTAG(glUniform3f)( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );

void VBOXGLTAG(glUniform3f)( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 )
{
	glim.Uniform3f( location, v0, v1, v2 );
}

void VBOXGLTAG(glUniform3fv)( GLint location, GLsizei count, const GLfloat * value );

void VBOXGLTAG(glUniform3fv)( GLint location, GLsizei count, const GLfloat * value )
{
	glim.Uniform3fv( location, count, value );
}

void VBOXGLTAG(glUniform3i)( GLint location, GLint v0, GLint v1, GLint v2 );

void VBOXGLTAG(glUniform3i)( GLint location, GLint v0, GLint v1, GLint v2 )
{
	glim.Uniform3i( location, v0, v1, v2 );
}

void VBOXGLTAG(glUniform3iv)( GLint location, GLsizei count, const GLint * value );

void VBOXGLTAG(glUniform3iv)( GLint location, GLsizei count, const GLint * value )
{
	glim.Uniform3iv( location, count, value );
}

void VBOXGLTAG(glUniform4f)( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );

void VBOXGLTAG(glUniform4f)( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 )
{
	glim.Uniform4f( location, v0, v1, v2, v3 );
}

void VBOXGLTAG(glUniform4fv)( GLint location, GLsizei count, const GLfloat * value );

void VBOXGLTAG(glUniform4fv)( GLint location, GLsizei count, const GLfloat * value )
{
	glim.Uniform4fv( location, count, value );
}

void VBOXGLTAG(glUniform4i)( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );

void VBOXGLTAG(glUniform4i)( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 )
{
	glim.Uniform4i( location, v0, v1, v2, v3 );
}

void VBOXGLTAG(glUniform4iv)( GLint location, GLsizei count, const GLint * value );

void VBOXGLTAG(glUniform4iv)( GLint location, GLsizei count, const GLint * value )
{
	glim.Uniform4iv( location, count, value );
}

void VBOXGLTAG(glUniformMatrix2fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix2fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix2fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix2x3fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix2x3fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix2x3fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix2x4fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix2x4fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix2x4fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix3fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix3fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix3fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix3x2fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix3x2fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix3x2fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix3x4fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix3x4fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix3x4fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix4fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix4fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix4fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix4x2fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix4x2fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix4x2fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix4x3fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix4x3fv)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix4x3fv( location, count, transpose, value );
}

void VBOXGLTAG(glUnlockArraysEXT)( void );

void VBOXGLTAG(glUnlockArraysEXT)( void )
{
	glim.UnlockArraysEXT(  );
}

GLboolean VBOXGLTAG(glUnmapBufferARB)( GLenum target );

GLboolean VBOXGLTAG(glUnmapBufferARB)( GLenum target )
{
	return  glim.UnmapBufferARB( target );
}

void VBOXGLTAG(glUseProgram)( GLuint program );

void VBOXGLTAG(glUseProgram)( GLuint program )
{
	glim.UseProgram( program );
}

void VBOXGLTAG(glVBoxAttachThread)( void );

void VBOXGLTAG(glVBoxAttachThread)( void )
{
	glim.VBoxAttachThread(  );
}

void VBOXGLTAG(glVBoxConChromiumParameteriCR)( GLint con, GLenum target, GLint value );

void VBOXGLTAG(glVBoxConChromiumParameteriCR)( GLint con, GLenum target, GLint value )
{
	glim.VBoxConChromiumParameteriCR( con, target, value );
}

void VBOXGLTAG(glVBoxConChromiumParametervCR)( GLint con, GLenum target, GLenum type, GLsizei count, const GLvoid * values );

void VBOXGLTAG(glVBoxConChromiumParametervCR)( GLint con, GLenum target, GLenum type, GLsizei count, const GLvoid * values )
{
	glim.VBoxConChromiumParametervCR( con, target, type, count, values );
}

GLint VBOXGLTAG(glVBoxConCreate)( struct VBOXUHGSMI * pHgsmi );

GLint VBOXGLTAG(glVBoxConCreate)( struct VBOXUHGSMI * pHgsmi )
{
	return  glim.VBoxConCreate( pHgsmi );
}

void VBOXGLTAG(glVBoxConDestroy)( GLint con );

void VBOXGLTAG(glVBoxConDestroy)( GLint con )
{
	glim.VBoxConDestroy( con );
}

void VBOXGLTAG(glVBoxConFlush)( GLint con );

void VBOXGLTAG(glVBoxConFlush)( GLint con )
{
	glim.VBoxConFlush( con );
}

GLint VBOXGLTAG(glVBoxCreateContext)( GLint con, const char * dpyName, GLint visual, GLint shareCtx );

GLint VBOXGLTAG(glVBoxCreateContext)( GLint con, const char * dpyName, GLint visual, GLint shareCtx )
{
	return  glim.VBoxCreateContext( con, dpyName, visual, shareCtx );
}

void VBOXGLTAG(glVBoxDetachThread)( void );

void VBOXGLTAG(glVBoxDetachThread)( void )
{
	glim.VBoxDetachThread(  );
}

GLuint VBOXGLTAG(glVBoxPackGetInjectID)( GLint con );

GLuint VBOXGLTAG(glVBoxPackGetInjectID)( GLint con )
{
	return  glim.VBoxPackGetInjectID( con );
}

void VBOXGLTAG(glVBoxPackSetInjectID)( GLuint id );

void VBOXGLTAG(glVBoxPackSetInjectID)( GLuint id )
{
	glim.VBoxPackSetInjectID( id );
}

GLint VBOXGLTAG(glVBoxPackSetInjectThread)( struct VBOXUHGSMI * pHgsmi );

GLint VBOXGLTAG(glVBoxPackSetInjectThread)( struct VBOXUHGSMI * pHgsmi )
{
	return  glim.VBoxPackSetInjectThread( pHgsmi );
}

void VBOXGLTAG(glVBoxPresentComposition)( GLint win, const struct VBOXVR_SCR_COMPOSITOR * pCompositor, const struct VBOXVR_SCR_COMPOSITOR_ENTRY * pChangedEntry );

void VBOXGLTAG(glVBoxPresentComposition)( GLint win, const struct VBOXVR_SCR_COMPOSITOR * pCompositor, const struct VBOXVR_SCR_COMPOSITOR_ENTRY * pChangedEntry )
{
	glim.VBoxPresentComposition( win, pCompositor, pChangedEntry );
}

GLint VBOXGLTAG(glVBoxWindowCreate)( GLint con, const char * dpyName, GLint visBits );

GLint VBOXGLTAG(glVBoxWindowCreate)( GLint con, const char * dpyName, GLint visBits )
{
	return  glim.VBoxWindowCreate( con, dpyName, visBits );
}

void VBOXGLTAG(glVBoxWindowDestroy)( GLint con, GLint window );

void VBOXGLTAG(glVBoxWindowDestroy)( GLint con, GLint window )
{
	glim.VBoxWindowDestroy( con, window );
}

void VBOXGLTAG(glValidateProgram)( GLuint program );

void VBOXGLTAG(glValidateProgram)( GLuint program )
{
	glim.ValidateProgram( program );
}

void VBOXGLTAG(glVertex2d)( GLdouble x, GLdouble y );

void VBOXGLTAG(glVertex2d)( GLdouble x, GLdouble y )
{
	glim.Vertex2d( x, y );
}

void VBOXGLTAG(glVertex2dv)( const GLdouble * v );

void VBOXGLTAG(glVertex2dv)( const GLdouble * v )
{
	glim.Vertex2dv( v );
}

void VBOXGLTAG(glVertex2f)( GLfloat x, GLfloat y );

void VBOXGLTAG(glVertex2f)( GLfloat x, GLfloat y )
{
	glim.Vertex2f( x, y );
}

void VBOXGLTAG(glVertex2fv)( const GLfloat * v );

void VBOXGLTAG(glVertex2fv)( const GLfloat * v )
{
	glim.Vertex2fv( v );
}

void VBOXGLTAG(glVertex2i)( GLint x, GLint y );

void VBOXGLTAG(glVertex2i)( GLint x, GLint y )
{
	glim.Vertex2i( x, y );
}

void VBOXGLTAG(glVertex2iv)( const GLint * v );

void VBOXGLTAG(glVertex2iv)( const GLint * v )
{
	glim.Vertex2iv( v );
}

void VBOXGLTAG(glVertex2s)( GLshort x, GLshort y );

void VBOXGLTAG(glVertex2s)( GLshort x, GLshort y )
{
	glim.Vertex2s( x, y );
}

void VBOXGLTAG(glVertex2sv)( const GLshort * v );

void VBOXGLTAG(glVertex2sv)( const GLshort * v )
{
	glim.Vertex2sv( v );
}

void VBOXGLTAG(glVertex3d)( GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glVertex3d)( GLdouble x, GLdouble y, GLdouble z )
{
	glim.Vertex3d( x, y, z );
}

void VBOXGLTAG(glVertex3dv)( const GLdouble * v );

void VBOXGLTAG(glVertex3dv)( const GLdouble * v )
{
	glim.Vertex3dv( v );
}

void VBOXGLTAG(glVertex3f)( GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glVertex3f)( GLfloat x, GLfloat y, GLfloat z )
{
	glim.Vertex3f( x, y, z );
}

void VBOXGLTAG(glVertex3fv)( const GLfloat * v );

void VBOXGLTAG(glVertex3fv)( const GLfloat * v )
{
	glim.Vertex3fv( v );
}

void VBOXGLTAG(glVertex3i)( GLint x, GLint y, GLint z );

void VBOXGLTAG(glVertex3i)( GLint x, GLint y, GLint z )
{
	glim.Vertex3i( x, y, z );
}

void VBOXGLTAG(glVertex3iv)( const GLint * v );

void VBOXGLTAG(glVertex3iv)( const GLint * v )
{
	glim.Vertex3iv( v );
}

void VBOXGLTAG(glVertex3s)( GLshort x, GLshort y, GLshort z );

void VBOXGLTAG(glVertex3s)( GLshort x, GLshort y, GLshort z )
{
	glim.Vertex3s( x, y, z );
}

void VBOXGLTAG(glVertex3sv)( const GLshort * v );

void VBOXGLTAG(glVertex3sv)( const GLshort * v )
{
	glim.Vertex3sv( v );
}

void VBOXGLTAG(glVertex4d)( GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glVertex4d)( GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.Vertex4d( x, y, z, w );
}

void VBOXGLTAG(glVertex4dv)( const GLdouble * v );

void VBOXGLTAG(glVertex4dv)( const GLdouble * v )
{
	glim.Vertex4dv( v );
}

void VBOXGLTAG(glVertex4f)( GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glVertex4f)( GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.Vertex4f( x, y, z, w );
}

void VBOXGLTAG(glVertex4fv)( const GLfloat * v );

void VBOXGLTAG(glVertex4fv)( const GLfloat * v )
{
	glim.Vertex4fv( v );
}

void VBOXGLTAG(glVertex4i)( GLint x, GLint y, GLint z, GLint w );

void VBOXGLTAG(glVertex4i)( GLint x, GLint y, GLint z, GLint w )
{
	glim.Vertex4i( x, y, z, w );
}

void VBOXGLTAG(glVertex4iv)( const GLint * v );

void VBOXGLTAG(glVertex4iv)( const GLint * v )
{
	glim.Vertex4iv( v );
}

void VBOXGLTAG(glVertex4s)( GLshort x, GLshort y, GLshort z, GLshort w );

void VBOXGLTAG(glVertex4s)( GLshort x, GLshort y, GLshort z, GLshort w )
{
	glim.Vertex4s( x, y, z, w );
}

void VBOXGLTAG(glVertex4sv)( const GLshort * v );

void VBOXGLTAG(glVertex4sv)( const GLshort * v )
{
	glim.Vertex4sv( v );
}

void VBOXGLTAG(glVertexArrayRangeNV)( GLsizei length, const GLvoid * pointer );

void VBOXGLTAG(glVertexArrayRangeNV)( GLsizei length, const GLvoid * pointer )
{
	glim.VertexArrayRangeNV( length, pointer );
}

void VBOXGLTAG(glVertexAttrib1dARB)( GLuint index, GLdouble x );

void VBOXGLTAG(glVertexAttrib1dARB)( GLuint index, GLdouble x )
{
	glim.VertexAttrib1dARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1dvARB)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib1dvARB)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib1dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib1fARB)( GLuint index, GLfloat x );

void VBOXGLTAG(glVertexAttrib1fARB)( GLuint index, GLfloat x )
{
	glim.VertexAttrib1fARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1fvARB)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib1fvARB)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib1fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib1sARB)( GLuint index, GLshort x );

void VBOXGLTAG(glVertexAttrib1sARB)( GLuint index, GLshort x )
{
	glim.VertexAttrib1sARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1svARB)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib1svARB)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib1svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2dARB)( GLuint index, GLdouble x, GLdouble y );

void VBOXGLTAG(glVertexAttrib2dARB)( GLuint index, GLdouble x, GLdouble y )
{
	glim.VertexAttrib2dARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2dvARB)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib2dvARB)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib2dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2fARB)( GLuint index, GLfloat x, GLfloat y );

void VBOXGLTAG(glVertexAttrib2fARB)( GLuint index, GLfloat x, GLfloat y )
{
	glim.VertexAttrib2fARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2fvARB)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib2fvARB)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib2fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2sARB)( GLuint index, GLshort x, GLshort y );

void VBOXGLTAG(glVertexAttrib2sARB)( GLuint index, GLshort x, GLshort y )
{
	glim.VertexAttrib2sARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2svARB)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib2svARB)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib2svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3dARB)( GLuint index, GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glVertexAttrib3dARB)( GLuint index, GLdouble x, GLdouble y, GLdouble z )
{
	glim.VertexAttrib3dARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3dvARB)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib3dvARB)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib3dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3fARB)( GLuint index, GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glVertexAttrib3fARB)( GLuint index, GLfloat x, GLfloat y, GLfloat z )
{
	glim.VertexAttrib3fARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3fvARB)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib3fvARB)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib3fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3sARB)( GLuint index, GLshort x, GLshort y, GLshort z );

void VBOXGLTAG(glVertexAttrib3sARB)( GLuint index, GLshort x, GLshort y, GLshort z )
{
	glim.VertexAttrib3sARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3svARB)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib3svARB)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib3svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4NbvARB)( GLuint index, const GLbyte * v );

void VBOXGLTAG(glVertexAttrib4NbvARB)( GLuint index, const GLbyte * v )
{
	glim.VertexAttrib4NbvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4NivARB)( GLuint index, const GLint * v );

void VBOXGLTAG(glVertexAttrib4NivARB)( GLuint index, const GLint * v )
{
	glim.VertexAttrib4NivARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4NsvARB)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib4NsvARB)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib4NsvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4NubARB)( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );

void VBOXGLTAG(glVertexAttrib4NubARB)( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
{
	glim.VertexAttrib4NubARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4NubvARB)( GLuint index, const GLubyte * v );

void VBOXGLTAG(glVertexAttrib4NubvARB)( GLuint index, const GLubyte * v )
{
	glim.VertexAttrib4NubvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4NuivARB)( GLuint index, const GLuint * v );

void VBOXGLTAG(glVertexAttrib4NuivARB)( GLuint index, const GLuint * v )
{
	glim.VertexAttrib4NuivARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4NusvARB)( GLuint index, const GLushort * v );

void VBOXGLTAG(glVertexAttrib4NusvARB)( GLuint index, const GLushort * v )
{
	glim.VertexAttrib4NusvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4bvARB)( GLuint index, const GLbyte * v );

void VBOXGLTAG(glVertexAttrib4bvARB)( GLuint index, const GLbyte * v )
{
	glim.VertexAttrib4bvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4dARB)( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glVertexAttrib4dARB)( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.VertexAttrib4dARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4dvARB)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib4dvARB)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib4dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4fARB)( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glVertexAttrib4fARB)( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.VertexAttrib4fARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4fvARB)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib4fvARB)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib4fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4ivARB)( GLuint index, const GLint * v );

void VBOXGLTAG(glVertexAttrib4ivARB)( GLuint index, const GLint * v )
{
	glim.VertexAttrib4ivARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4sARB)( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );

void VBOXGLTAG(glVertexAttrib4sARB)( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w )
{
	glim.VertexAttrib4sARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4svARB)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib4svARB)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib4svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4ubvARB)( GLuint index, const GLubyte * v );

void VBOXGLTAG(glVertexAttrib4ubvARB)( GLuint index, const GLubyte * v )
{
	glim.VertexAttrib4ubvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4uivARB)( GLuint index, const GLuint * v );

void VBOXGLTAG(glVertexAttrib4uivARB)( GLuint index, const GLuint * v )
{
	glim.VertexAttrib4uivARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4usvARB)( GLuint index, const GLushort * v );

void VBOXGLTAG(glVertexAttrib4usvARB)( GLuint index, const GLushort * v )
{
	glim.VertexAttrib4usvARB( index, v );
}

void VBOXGLTAG(glVertexAttribPointerARB)( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glVertexAttribPointerARB)( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer )
{
	glim.VertexAttribPointerARB( index, size, type, normalized, stride, pointer );
}

void VBOXGLTAG(glVertexAttribPointerNV)( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glVertexAttribPointerNV)( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.VertexAttribPointerNV( index, size, type, stride, pointer );
}

void VBOXGLTAG(glVertexAttribs1dvNV)( GLuint index, GLsizei n, const GLdouble * v );

void VBOXGLTAG(glVertexAttribs1dvNV)( GLuint index, GLsizei n, const GLdouble * v )
{
	glim.VertexAttribs1dvNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs1fvNV)( GLuint index, GLsizei n, const GLfloat * v );

void VBOXGLTAG(glVertexAttribs1fvNV)( GLuint index, GLsizei n, const GLfloat * v )
{
	glim.VertexAttribs1fvNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs1svNV)( GLuint index, GLsizei n, const GLshort * v );

void VBOXGLTAG(glVertexAttribs1svNV)( GLuint index, GLsizei n, const GLshort * v )
{
	glim.VertexAttribs1svNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs2dvNV)( GLuint index, GLsizei n, const GLdouble * v );

void VBOXGLTAG(glVertexAttribs2dvNV)( GLuint index, GLsizei n, const GLdouble * v )
{
	glim.VertexAttribs2dvNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs2fvNV)( GLuint index, GLsizei n, const GLfloat * v );

void VBOXGLTAG(glVertexAttribs2fvNV)( GLuint index, GLsizei n, const GLfloat * v )
{
	glim.VertexAttribs2fvNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs2svNV)( GLuint index, GLsizei n, const GLshort * v );

void VBOXGLTAG(glVertexAttribs2svNV)( GLuint index, GLsizei n, const GLshort * v )
{
	glim.VertexAttribs2svNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs3dvNV)( GLuint index, GLsizei n, const GLdouble * v );

void VBOXGLTAG(glVertexAttribs3dvNV)( GLuint index, GLsizei n, const GLdouble * v )
{
	glim.VertexAttribs3dvNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs3fvNV)( GLuint index, GLsizei n, const GLfloat * v );

void VBOXGLTAG(glVertexAttribs3fvNV)( GLuint index, GLsizei n, const GLfloat * v )
{
	glim.VertexAttribs3fvNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs3svNV)( GLuint index, GLsizei n, const GLshort * v );

void VBOXGLTAG(glVertexAttribs3svNV)( GLuint index, GLsizei n, const GLshort * v )
{
	glim.VertexAttribs3svNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs4dvNV)( GLuint index, GLsizei n, const GLdouble * v );

void VBOXGLTAG(glVertexAttribs4dvNV)( GLuint index, GLsizei n, const GLdouble * v )
{
	glim.VertexAttribs4dvNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs4fvNV)( GLuint index, GLsizei n, const GLfloat * v );

void VBOXGLTAG(glVertexAttribs4fvNV)( GLuint index, GLsizei n, const GLfloat * v )
{
	glim.VertexAttribs4fvNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs4svNV)( GLuint index, GLsizei n, const GLshort * v );

void VBOXGLTAG(glVertexAttribs4svNV)( GLuint index, GLsizei n, const GLshort * v )
{
	glim.VertexAttribs4svNV( index, n, v );
}

void VBOXGLTAG(glVertexAttribs4ubvNV)( GLuint index, GLsizei n, const GLubyte * v );

void VBOXGLTAG(glVertexAttribs4ubvNV)( GLuint index, GLsizei n, const GLubyte * v )
{
	glim.VertexAttribs4ubvNV( index, n, v );
}

void VBOXGLTAG(glVertexPointer)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glVertexPointer)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.VertexPointer( size, type, stride, pointer );
}

void VBOXGLTAG(glViewport)( GLint x, GLint y, GLsizei width, GLsizei height );

void VBOXGLTAG(glViewport)( GLint x, GLint y, GLsizei width, GLsizei height )
{
	glim.Viewport( x, y, width, height );
}

void VBOXGLTAG(glWindowPos2dARB)( GLdouble x, GLdouble y );

void VBOXGLTAG(glWindowPos2dARB)( GLdouble x, GLdouble y )
{
	glim.WindowPos2dARB( x, y );
}

void VBOXGLTAG(glWindowPos2dvARB)( const GLdouble * v );

void VBOXGLTAG(glWindowPos2dvARB)( const GLdouble * v )
{
	glim.WindowPos2dvARB( v );
}

void VBOXGLTAG(glWindowPos2fARB)( GLfloat x, GLfloat y );

void VBOXGLTAG(glWindowPos2fARB)( GLfloat x, GLfloat y )
{
	glim.WindowPos2fARB( x, y );
}

void VBOXGLTAG(glWindowPos2fvARB)( const GLfloat * v );

void VBOXGLTAG(glWindowPos2fvARB)( const GLfloat * v )
{
	glim.WindowPos2fvARB( v );
}

void VBOXGLTAG(glWindowPos2iARB)( GLint x, GLint y );

void VBOXGLTAG(glWindowPos2iARB)( GLint x, GLint y )
{
	glim.WindowPos2iARB( x, y );
}

void VBOXGLTAG(glWindowPos2ivARB)( const GLint * v );

void VBOXGLTAG(glWindowPos2ivARB)( const GLint * v )
{
	glim.WindowPos2ivARB( v );
}

void VBOXGLTAG(glWindowPos2sARB)( GLshort x, GLshort y );

void VBOXGLTAG(glWindowPos2sARB)( GLshort x, GLshort y )
{
	glim.WindowPos2sARB( x, y );
}

void VBOXGLTAG(glWindowPos2svARB)( const GLshort * v );

void VBOXGLTAG(glWindowPos2svARB)( const GLshort * v )
{
	glim.WindowPos2svARB( v );
}

void VBOXGLTAG(glWindowPos3dARB)( GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glWindowPos3dARB)( GLdouble x, GLdouble y, GLdouble z )
{
	glim.WindowPos3dARB( x, y, z );
}

void VBOXGLTAG(glWindowPos3dvARB)( const GLdouble * v );

void VBOXGLTAG(glWindowPos3dvARB)( const GLdouble * v )
{
	glim.WindowPos3dvARB( v );
}

void VBOXGLTAG(glWindowPos3fARB)( GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glWindowPos3fARB)( GLfloat x, GLfloat y, GLfloat z )
{
	glim.WindowPos3fARB( x, y, z );
}

void VBOXGLTAG(glWindowPos3fvARB)( const GLfloat * v );

void VBOXGLTAG(glWindowPos3fvARB)( const GLfloat * v )
{
	glim.WindowPos3fvARB( v );
}

void VBOXGLTAG(glWindowPos3iARB)( GLint x, GLint y, GLint z );

void VBOXGLTAG(glWindowPos3iARB)( GLint x, GLint y, GLint z )
{
	glim.WindowPos3iARB( x, y, z );
}

void VBOXGLTAG(glWindowPos3ivARB)( const GLint * v );

void VBOXGLTAG(glWindowPos3ivARB)( const GLint * v )
{
	glim.WindowPos3ivARB( v );
}

void VBOXGLTAG(glWindowPos3sARB)( GLshort x, GLshort y, GLshort z );

void VBOXGLTAG(glWindowPos3sARB)( GLshort x, GLshort y, GLshort z )
{
	glim.WindowPos3sARB( x, y, z );
}

void VBOXGLTAG(glWindowPos3svARB)( const GLshort * v );

void VBOXGLTAG(glWindowPos3svARB)( const GLshort * v )
{
	glim.WindowPos3svARB( v );
}

void VBOXGLTAG(glZPixCR)( GLsizei width, GLsizei height, GLenum format, GLenum type, GLenum ztype, GLint zparm, GLint length, const GLvoid * pixels );

void VBOXGLTAG(glZPixCR)( GLsizei width, GLsizei height, GLenum format, GLenum type, GLenum ztype, GLint zparm, GLint length, const GLvoid * pixels )
{
	glim.ZPixCR( width, height, format, type, ztype, zparm, length, pixels );
}

/*
* Aliases
*/
void VBOXGLTAG(glActiveTexture)( GLenum texture );

void VBOXGLTAG(glActiveTexture)( GLenum texture )
{
	glim.ActiveTextureARB( texture );
}

GLboolean VBOXGLTAG(glAreTexturesResidentEXT)( GLsizei n, const GLuint * textures, GLboolean * residences );

GLboolean VBOXGLTAG(glAreTexturesResidentEXT)( GLsizei n, const GLuint * textures, GLboolean * residences )
{
	return  glim.AreTexturesResident( n, textures, residences );
}

void VBOXGLTAG(glAttachObjectARB)( VBoxGLhandleARB containerObj, VBoxGLhandleARB obj );

void VBOXGLTAG(glAttachObjectARB)( VBoxGLhandleARB containerObj, VBoxGLhandleARB obj )
{
	glim.AttachShader( containerObj, obj );
}

void VBOXGLTAG(glBindAttribLocationARB)( VBoxGLhandleARB programObj, GLuint index, const GLcharARB * name );

void VBOXGLTAG(glBindAttribLocationARB)( VBoxGLhandleARB programObj, GLuint index, const GLcharARB * name )
{
	glim.BindAttribLocation( programObj, index, name );
}

void VBOXGLTAG(glBindBuffer)( GLenum target, GLuint buffer );

void VBOXGLTAG(glBindBuffer)( GLenum target, GLuint buffer )
{
	glim.BindBufferARB( target, buffer );
}

void VBOXGLTAG(glBindTextureEXT)( GLenum target, GLuint texture );

void VBOXGLTAG(glBindTextureEXT)( GLenum target, GLuint texture )
{
	glim.BindTexture( target, texture );
}

void VBOXGLTAG(glBlendColor)( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );

void VBOXGLTAG(glBlendColor)( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha )
{
	glim.BlendColorEXT( red, green, blue, alpha );
}

void VBOXGLTAG(glBlendEquation)( GLenum mode );

void VBOXGLTAG(glBlendEquation)( GLenum mode )
{
	glim.BlendEquationEXT( mode );
}

void VBOXGLTAG(glBlendEquationSeparateEXT)( GLenum modeRGB, GLenum modeAlpha );

void VBOXGLTAG(glBlendEquationSeparateEXT)( GLenum modeRGB, GLenum modeAlpha )
{
	glim.BlendEquationSeparate( modeRGB, modeAlpha );
}

void VBOXGLTAG(glBlendFuncSeparate)( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorA, GLenum dfactorA );

void VBOXGLTAG(glBlendFuncSeparate)( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorA, GLenum dfactorA )
{
	glim.BlendFuncSeparateEXT( sfactorRGB, dfactorRGB, sfactorA, dfactorA );
}

void VBOXGLTAG(glBufferData)( GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage );

void VBOXGLTAG(glBufferData)( GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage )
{
	glim.BufferDataARB( target, size, data, usage );
}

void VBOXGLTAG(glBufferSubData)( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data );

void VBOXGLTAG(glBufferSubData)( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data )
{
	glim.BufferSubDataARB( target, offset, size, data );
}

void VBOXGLTAG(glClientActiveTexture)( GLenum texture );

void VBOXGLTAG(glClientActiveTexture)( GLenum texture )
{
	glim.ClientActiveTextureARB( texture );
}

void VBOXGLTAG(glCompileShaderARB)( VBoxGLhandleARB shaderObj );

void VBOXGLTAG(glCompileShaderARB)( VBoxGLhandleARB shaderObj )
{
	glim.CompileShader( shaderObj );
}

void VBOXGLTAG(glCompressedTexImage1D)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexImage1D)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data )
{
	glim.CompressedTexImage1DARB( target, level, internalFormat, width, border, imageSize, data );
}

void VBOXGLTAG(glCompressedTexImage2D)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexImage2D)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data )
{
	glim.CompressedTexImage2DARB( target, level, internalFormat, width, height, border, imageSize, data );
}

void VBOXGLTAG(glCompressedTexImage3D)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexImage3D)( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data )
{
	glim.CompressedTexImage3DARB( target, level, internalFormat, width, height, depth, border, imageSize, data );
}

void VBOXGLTAG(glCompressedTexSubImage1D)( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexSubImage1D)( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data )
{
	glim.CompressedTexSubImage1DARB( target, level, xoffset, width, format, imageSize, data );
}

void VBOXGLTAG(glCompressedTexSubImage2D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexSubImage2D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data )
{
	glim.CompressedTexSubImage2DARB( target, level, xoffset, yoffset, width, height, format, imageSize, data );
}

void VBOXGLTAG(glCompressedTexSubImage3D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data );

void VBOXGLTAG(glCompressedTexSubImage3D)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data )
{
	glim.CompressedTexSubImage3DARB( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data );
}

void VBOXGLTAG(glCopyTexImage1DEXT)( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border );

void VBOXGLTAG(glCopyTexImage1DEXT)( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border )
{
	glim.CopyTexImage1D( target, level, internalFormat, x, y, width, border );
}

void VBOXGLTAG(glCopyTexImage2DEXT)( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );

void VBOXGLTAG(glCopyTexImage2DEXT)( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border )
{
	glim.CopyTexImage2D( target, level, internalFormat, x, y, width, height, border );
}

void VBOXGLTAG(glCopyTexSubImage1DEXT)( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );

void VBOXGLTAG(glCopyTexSubImage1DEXT)( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width )
{
	glim.CopyTexSubImage1D( target, level, xoffset, x, y, width );
}

void VBOXGLTAG(glCopyTexSubImage2DEXT)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );

void VBOXGLTAG(glCopyTexSubImage2DEXT)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	glim.CopyTexSubImage2D( target, level, xoffset, yoffset, x, y, width, height );
}

void VBOXGLTAG(glCopyTexSubImage3DEXT)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );

void VBOXGLTAG(glCopyTexSubImage3DEXT)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	glim.CopyTexSubImage3D( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}

VBoxGLhandleARB VBOXGLTAG(glCreateProgramObjectARB)( void );

VBoxGLhandleARB VBOXGLTAG(glCreateProgramObjectARB)( void )
{
	return  glim.CreateProgram(  );
}

VBoxGLhandleARB VBOXGLTAG(glCreateShaderObjectARB)( GLenum shaderType );

VBoxGLhandleARB VBOXGLTAG(glCreateShaderObjectARB)( GLenum shaderType )
{
	return  glim.CreateShader( shaderType );
}

void VBOXGLTAG(glDeleteBuffers)( GLsizei n, const GLuint * buffer );

void VBOXGLTAG(glDeleteBuffers)( GLsizei n, const GLuint * buffer )
{
	glim.DeleteBuffersARB( n, buffer );
}

void VBOXGLTAG(glDeleteProgramsNV)( GLsizei n, const GLuint * ids );

void VBOXGLTAG(glDeleteProgramsNV)( GLsizei n, const GLuint * ids )
{
	glim.DeleteProgramsARB( n, ids );
}

void VBOXGLTAG(glDeleteTexturesEXT)( GLsizei n, const GLuint * textures );

void VBOXGLTAG(glDeleteTexturesEXT)( GLsizei n, const GLuint * textures )
{
	glim.DeleteTextures( n, textures );
}

void VBOXGLTAG(glDetachObjectARB)( VBoxGLhandleARB containerObj, VBoxGLhandleARB attachedObj );

void VBOXGLTAG(glDetachObjectARB)( VBoxGLhandleARB containerObj, VBoxGLhandleARB attachedObj )
{
	glim.DetachShader( containerObj, attachedObj );
}

void VBOXGLTAG(glDisableVertexAttribArray)( GLuint index );

void VBOXGLTAG(glDisableVertexAttribArray)( GLuint index )
{
	glim.DisableVertexAttribArrayARB( index );
}

void VBOXGLTAG(glDrawRangeElementsEXT)( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices );

void VBOXGLTAG(glDrawRangeElementsEXT)( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices )
{
	glim.DrawRangeElements( mode, start, end, count, type, indices );
}

void VBOXGLTAG(glEnableVertexAttribArray)( GLuint index );

void VBOXGLTAG(glEnableVertexAttribArray)( GLuint index )
{
	glim.EnableVertexAttribArrayARB( index );
}

void VBOXGLTAG(glFogCoordPointer)( GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glFogCoordPointer)( GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.FogCoordPointerEXT( type, stride, pointer );
}

void VBOXGLTAG(glFogCoordd)( GLdouble coord );

void VBOXGLTAG(glFogCoordd)( GLdouble coord )
{
	glim.FogCoorddEXT( coord );
}

void VBOXGLTAG(glFogCoorddv)( const GLdouble * coord );

void VBOXGLTAG(glFogCoorddv)( const GLdouble * coord )
{
	glim.FogCoorddvEXT( coord );
}

void VBOXGLTAG(glFogCoordf)( GLfloat coord );

void VBOXGLTAG(glFogCoordf)( GLfloat coord )
{
	glim.FogCoordfEXT( coord );
}

void VBOXGLTAG(glFogCoordfv)( const GLfloat * coord );

void VBOXGLTAG(glFogCoordfv)( const GLfloat * coord )
{
	glim.FogCoordfvEXT( coord );
}

void VBOXGLTAG(glGenBuffers)( GLsizei n, GLuint * buffer );

void VBOXGLTAG(glGenBuffers)( GLsizei n, GLuint * buffer )
{
	glim.GenBuffersARB( n, buffer );
}

void VBOXGLTAG(glGenTexturesEXT)( GLsizei n, GLuint * textures );

void VBOXGLTAG(glGenTexturesEXT)( GLsizei n, GLuint * textures )
{
	glim.GenTextures( n, textures );
}

void VBOXGLTAG(glGetActiveAttribARB)( VBoxGLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name );

void VBOXGLTAG(glGetActiveAttribARB)( VBoxGLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name )
{
	glim.GetActiveAttrib( programObj, index, maxLength, length, size, type, name );
}

void VBOXGLTAG(glGetActiveUniformARB)( VBoxGLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name );

void VBOXGLTAG(glGetActiveUniformARB)( VBoxGLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name )
{
	glim.GetActiveUniform( programObj, index, maxLength, length, size, type, name );
}

GLint VBOXGLTAG(glGetAttribLocationARB)( VBoxGLhandleARB programObj, const GLcharARB * name );

GLint VBOXGLTAG(glGetAttribLocationARB)( VBoxGLhandleARB programObj, const GLcharARB * name )
{
	return  glim.GetAttribLocation( programObj, name );
}

void VBOXGLTAG(glGetBufferParameteriv)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetBufferParameteriv)( GLenum target, GLenum pname, GLint * params )
{
	glim.GetBufferParameterivARB( target, pname, params );
}

void VBOXGLTAG(glGetBufferPointerv)( GLenum target, GLenum pname, GLvoid ** params );

void VBOXGLTAG(glGetBufferPointerv)( GLenum target, GLenum pname, GLvoid ** params )
{
	glim.GetBufferPointervARB( target, pname, params );
}

void VBOXGLTAG(glGetBufferSubData)( GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data );

void VBOXGLTAG(glGetBufferSubData)( GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data )
{
	glim.GetBufferSubDataARB( target, offset, size, data );
}

void VBOXGLTAG(glGetCompressedTexImage)( GLenum target, GLint level, GLvoid * img );

void VBOXGLTAG(glGetCompressedTexImage)( GLenum target, GLint level, GLvoid * img )
{
	glim.GetCompressedTexImageARB( target, level, img );
}

void VBOXGLTAG(glGetShaderSourceARB)( VBoxGLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source );

void VBOXGLTAG(glGetShaderSourceARB)( VBoxGLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source )
{
	glim.GetShaderSource( obj, maxLength, length, source );
}

GLint VBOXGLTAG(glGetUniformLocationARB)( VBoxGLhandleARB programObj, const GLcharARB * name );

GLint VBOXGLTAG(glGetUniformLocationARB)( VBoxGLhandleARB programObj, const GLcharARB * name )
{
	return  glim.GetUniformLocation( programObj, name );
}

void VBOXGLTAG(glGetUniformfvARB)( VBoxGLhandleARB programObj, GLint location, GLfloat * params );

void VBOXGLTAG(glGetUniformfvARB)( VBoxGLhandleARB programObj, GLint location, GLfloat * params )
{
	glim.GetUniformfv( programObj, location, params );
}

void VBOXGLTAG(glGetUniformivARB)( VBoxGLhandleARB programObj, GLint location, GLint * params );

void VBOXGLTAG(glGetUniformivARB)( VBoxGLhandleARB programObj, GLint location, GLint * params )
{
	glim.GetUniformiv( programObj, location, params );
}

void VBOXGLTAG(glGetVertexAttribPointerv)( GLuint index, GLenum pname, GLvoid ** pointer );

void VBOXGLTAG(glGetVertexAttribPointerv)( GLuint index, GLenum pname, GLvoid ** pointer )
{
	glim.GetVertexAttribPointervARB( index, pname, pointer );
}

void VBOXGLTAG(glGetVertexAttribdv)( GLuint index, GLenum pname, GLdouble * params );

void VBOXGLTAG(glGetVertexAttribdv)( GLuint index, GLenum pname, GLdouble * params )
{
	glim.GetVertexAttribdvARB( index, pname, params );
}

void VBOXGLTAG(glGetVertexAttribfv)( GLuint index, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetVertexAttribfv)( GLuint index, GLenum pname, GLfloat * params )
{
	glim.GetVertexAttribfvARB( index, pname, params );
}

void VBOXGLTAG(glGetVertexAttribiv)( GLuint index, GLenum pname, GLint * params );

void VBOXGLTAG(glGetVertexAttribiv)( GLuint index, GLenum pname, GLint * params )
{
	glim.GetVertexAttribivARB( index, pname, params );
}

GLboolean VBOXGLTAG(glIsBuffer)( GLuint buffer );

GLboolean VBOXGLTAG(glIsBuffer)( GLuint buffer )
{
	return  glim.IsBufferARB( buffer );
}

GLboolean VBOXGLTAG(glIsProgramNV)( GLuint id );

GLboolean VBOXGLTAG(glIsProgramNV)( GLuint id )
{
	return  glim.IsProgramARB( id );
}

GLboolean VBOXGLTAG(glIsTextureEXT)( GLuint texture );

GLboolean VBOXGLTAG(glIsTextureEXT)( GLuint texture )
{
	return  glim.IsTexture( texture );
}

void VBOXGLTAG(glLinkProgramARB)( VBoxGLhandleARB programObj );

void VBOXGLTAG(glLinkProgramARB)( VBoxGLhandleARB programObj )
{
	glim.LinkProgram( programObj );
}

void VBOXGLTAG(glLoadTransposeMatrixd)( const GLdouble * m );

void VBOXGLTAG(glLoadTransposeMatrixd)( const GLdouble * m )
{
	glim.LoadTransposeMatrixdARB( m );
}

void VBOXGLTAG(glLoadTransposeMatrixf)( const GLfloat * m );

void VBOXGLTAG(glLoadTransposeMatrixf)( const GLfloat * m )
{
	glim.LoadTransposeMatrixfARB( m );
}

void * VBOXGLTAG(glMapBuffer)( GLenum target, GLenum access );

void * VBOXGLTAG(glMapBuffer)( GLenum target, GLenum access )
{
	return  glim.MapBufferARB( target, access );
}

void VBOXGLTAG(glMultTransposeMatrixd)( const GLdouble * m );

void VBOXGLTAG(glMultTransposeMatrixd)( const GLdouble * m )
{
	glim.MultTransposeMatrixdARB( m );
}

void VBOXGLTAG(glMultTransposeMatrixf)( const GLfloat * m );

void VBOXGLTAG(glMultTransposeMatrixf)( const GLfloat * m )
{
	glim.MultTransposeMatrixfARB( m );
}

void VBOXGLTAG(glMultiDrawArrays)( GLenum mode, GLint * first, GLsizei * count, GLsizei primcount );

void VBOXGLTAG(glMultiDrawArrays)( GLenum mode, GLint * first, GLsizei * count, GLsizei primcount )
{
	glim.MultiDrawArraysEXT( mode, first, count, primcount );
}

void VBOXGLTAG(glMultiDrawElements)( GLenum mode, const GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount );

void VBOXGLTAG(glMultiDrawElements)( GLenum mode, const GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount )
{
	glim.MultiDrawElementsEXT( mode, count, type, indices, primcount );
}

void VBOXGLTAG(glMultiTexCoord1d)( GLenum texture, GLdouble s );

void VBOXGLTAG(glMultiTexCoord1d)( GLenum texture, GLdouble s )
{
	glim.MultiTexCoord1dARB( texture, s );
}

void VBOXGLTAG(glMultiTexCoord1dv)( GLenum texture, const GLdouble * v );

void VBOXGLTAG(glMultiTexCoord1dv)( GLenum texture, const GLdouble * v )
{
	glim.MultiTexCoord1dvARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord1f)( GLenum texture, GLfloat s );

void VBOXGLTAG(glMultiTexCoord1f)( GLenum texture, GLfloat s )
{
	glim.MultiTexCoord1fARB( texture, s );
}

void VBOXGLTAG(glMultiTexCoord1fv)( GLenum texture, const GLfloat * v );

void VBOXGLTAG(glMultiTexCoord1fv)( GLenum texture, const GLfloat * v )
{
	glim.MultiTexCoord1fvARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord1i)( GLenum texture, GLint s );

void VBOXGLTAG(glMultiTexCoord1i)( GLenum texture, GLint s )
{
	glim.MultiTexCoord1iARB( texture, s );
}

void VBOXGLTAG(glMultiTexCoord1iv)( GLenum texture, const GLint * v );

void VBOXGLTAG(glMultiTexCoord1iv)( GLenum texture, const GLint * v )
{
	glim.MultiTexCoord1ivARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord1s)( GLenum texture, GLshort s );

void VBOXGLTAG(glMultiTexCoord1s)( GLenum texture, GLshort s )
{
	glim.MultiTexCoord1sARB( texture, s );
}

void VBOXGLTAG(glMultiTexCoord1sv)( GLenum texture, const GLshort * v );

void VBOXGLTAG(glMultiTexCoord1sv)( GLenum texture, const GLshort * v )
{
	glim.MultiTexCoord1svARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord2d)( GLenum texture, GLdouble s, GLdouble t );

void VBOXGLTAG(glMultiTexCoord2d)( GLenum texture, GLdouble s, GLdouble t )
{
	glim.MultiTexCoord2dARB( texture, s, t );
}

void VBOXGLTAG(glMultiTexCoord2dv)( GLenum texture, const GLdouble * v );

void VBOXGLTAG(glMultiTexCoord2dv)( GLenum texture, const GLdouble * v )
{
	glim.MultiTexCoord2dvARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord2f)( GLenum texture, GLfloat s, GLfloat t );

void VBOXGLTAG(glMultiTexCoord2f)( GLenum texture, GLfloat s, GLfloat t )
{
	glim.MultiTexCoord2fARB( texture, s, t );
}

void VBOXGLTAG(glMultiTexCoord2fv)( GLenum texture, const GLfloat * v );

void VBOXGLTAG(glMultiTexCoord2fv)( GLenum texture, const GLfloat * v )
{
	glim.MultiTexCoord2fvARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord2i)( GLenum texture, GLint s, GLint t );

void VBOXGLTAG(glMultiTexCoord2i)( GLenum texture, GLint s, GLint t )
{
	glim.MultiTexCoord2iARB( texture, s, t );
}

void VBOXGLTAG(glMultiTexCoord2iv)( GLenum texture, const GLint * v );

void VBOXGLTAG(glMultiTexCoord2iv)( GLenum texture, const GLint * v )
{
	glim.MultiTexCoord2ivARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord2s)( GLenum texture, GLshort s, GLshort t );

void VBOXGLTAG(glMultiTexCoord2s)( GLenum texture, GLshort s, GLshort t )
{
	glim.MultiTexCoord2sARB( texture, s, t );
}

void VBOXGLTAG(glMultiTexCoord2sv)( GLenum texture, const GLshort * v );

void VBOXGLTAG(glMultiTexCoord2sv)( GLenum texture, const GLshort * v )
{
	glim.MultiTexCoord2svARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord3d)( GLenum texture, GLdouble s, GLdouble t, GLdouble r );

void VBOXGLTAG(glMultiTexCoord3d)( GLenum texture, GLdouble s, GLdouble t, GLdouble r )
{
	glim.MultiTexCoord3dARB( texture, s, t, r );
}

void VBOXGLTAG(glMultiTexCoord3dv)( GLenum texture, const GLdouble * v );

void VBOXGLTAG(glMultiTexCoord3dv)( GLenum texture, const GLdouble * v )
{
	glim.MultiTexCoord3dvARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord3f)( GLenum texture, GLfloat s, GLfloat t, GLfloat r );

void VBOXGLTAG(glMultiTexCoord3f)( GLenum texture, GLfloat s, GLfloat t, GLfloat r )
{
	glim.MultiTexCoord3fARB( texture, s, t, r );
}

void VBOXGLTAG(glMultiTexCoord3fv)( GLenum texture, const GLfloat * v );

void VBOXGLTAG(glMultiTexCoord3fv)( GLenum texture, const GLfloat * v )
{
	glim.MultiTexCoord3fvARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord3i)( GLenum texture, GLint s, GLint t, GLint r );

void VBOXGLTAG(glMultiTexCoord3i)( GLenum texture, GLint s, GLint t, GLint r )
{
	glim.MultiTexCoord3iARB( texture, s, t, r );
}

void VBOXGLTAG(glMultiTexCoord3iv)( GLenum texture, const GLint * v );

void VBOXGLTAG(glMultiTexCoord3iv)( GLenum texture, const GLint * v )
{
	glim.MultiTexCoord3ivARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord3s)( GLenum texture, GLshort s, GLshort t, GLshort r );

void VBOXGLTAG(glMultiTexCoord3s)( GLenum texture, GLshort s, GLshort t, GLshort r )
{
	glim.MultiTexCoord3sARB( texture, s, t, r );
}

void VBOXGLTAG(glMultiTexCoord3sv)( GLenum texture, const GLshort * v );

void VBOXGLTAG(glMultiTexCoord3sv)( GLenum texture, const GLshort * v )
{
	glim.MultiTexCoord3svARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord4d)( GLenum texture, GLdouble s, GLdouble t, GLdouble r, GLdouble q );

void VBOXGLTAG(glMultiTexCoord4d)( GLenum texture, GLdouble s, GLdouble t, GLdouble r, GLdouble q )
{
	glim.MultiTexCoord4dARB( texture, s, t, r, q );
}

void VBOXGLTAG(glMultiTexCoord4dv)( GLenum texture, const GLdouble * v );

void VBOXGLTAG(glMultiTexCoord4dv)( GLenum texture, const GLdouble * v )
{
	glim.MultiTexCoord4dvARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord4f)( GLenum texture, GLfloat s, GLfloat t, GLfloat r, GLfloat q );

void VBOXGLTAG(glMultiTexCoord4f)( GLenum texture, GLfloat s, GLfloat t, GLfloat r, GLfloat q )
{
	glim.MultiTexCoord4fARB( texture, s, t, r, q );
}

void VBOXGLTAG(glMultiTexCoord4fv)( GLenum texture, const GLfloat * v );

void VBOXGLTAG(glMultiTexCoord4fv)( GLenum texture, const GLfloat * v )
{
	glim.MultiTexCoord4fvARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord4i)( GLenum texture, GLint s, GLint t, GLint r, GLint q );

void VBOXGLTAG(glMultiTexCoord4i)( GLenum texture, GLint s, GLint t, GLint r, GLint q )
{
	glim.MultiTexCoord4iARB( texture, s, t, r, q );
}

void VBOXGLTAG(glMultiTexCoord4iv)( GLenum texture, const GLint * v );

void VBOXGLTAG(glMultiTexCoord4iv)( GLenum texture, const GLint * v )
{
	glim.MultiTexCoord4ivARB( texture, v );
}

void VBOXGLTAG(glMultiTexCoord4s)( GLenum texture, GLshort s, GLshort t, GLshort r, GLshort q );

void VBOXGLTAG(glMultiTexCoord4s)( GLenum texture, GLshort s, GLshort t, GLshort r, GLshort q )
{
	glim.MultiTexCoord4sARB( texture, s, t, r, q );
}

void VBOXGLTAG(glMultiTexCoord4sv)( GLenum texture, const GLshort * v );

void VBOXGLTAG(glMultiTexCoord4sv)( GLenum texture, const GLshort * v )
{
	glim.MultiTexCoord4svARB( texture, v );
}

void VBOXGLTAG(glPointParameterf)( GLenum pname, GLfloat param );

void VBOXGLTAG(glPointParameterf)( GLenum pname, GLfloat param )
{
	glim.PointParameterfARB( pname, param );
}

void VBOXGLTAG(glPointParameterfEXT)( GLenum pname, GLfloat param );

void VBOXGLTAG(glPointParameterfEXT)( GLenum pname, GLfloat param )
{
	glim.PointParameterfARB( pname, param );
}

void VBOXGLTAG(glPointParameterfv)( GLenum pname, const GLfloat * params );

void VBOXGLTAG(glPointParameterfv)( GLenum pname, const GLfloat * params )
{
	glim.PointParameterfvARB( pname, params );
}

void VBOXGLTAG(glPointParameterfvEXT)( GLenum pname, const GLfloat * params );

void VBOXGLTAG(glPointParameterfvEXT)( GLenum pname, const GLfloat * params )
{
	glim.PointParameterfvARB( pname, params );
}

void VBOXGLTAG(glPointParameteriNV)( GLenum pname, GLint params );

void VBOXGLTAG(glPointParameteriNV)( GLenum pname, GLint params )
{
	glim.PointParameteri( pname, params );
}

void VBOXGLTAG(glPointParameterivNV)( GLenum pname, const GLint * params );

void VBOXGLTAG(glPointParameterivNV)( GLenum pname, const GLint * params )
{
	glim.PointParameteriv( pname, params );
}

void VBOXGLTAG(glPrioritizeTexturesEXT)( GLsizei n, const GLuint * textures, const GLclampf * priorities );

void VBOXGLTAG(glPrioritizeTexturesEXT)( GLsizei n, const GLuint * textures, const GLclampf * priorities )
{
	glim.PrioritizeTextures( n, textures, priorities );
}

void VBOXGLTAG(glSampleCoverage)( GLclampf value, GLboolean invert );

void VBOXGLTAG(glSampleCoverage)( GLclampf value, GLboolean invert )
{
	glim.SampleCoverageARB( value, invert );
}

void VBOXGLTAG(glSecondaryColor3b)( GLbyte red, GLbyte green, GLbyte blue );

void VBOXGLTAG(glSecondaryColor3b)( GLbyte red, GLbyte green, GLbyte blue )
{
	glim.SecondaryColor3bEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3bv)( const GLbyte * v );

void VBOXGLTAG(glSecondaryColor3bv)( const GLbyte * v )
{
	glim.SecondaryColor3bvEXT( v );
}

void VBOXGLTAG(glSecondaryColor3d)( GLdouble red, GLdouble green, GLdouble blue );

void VBOXGLTAG(glSecondaryColor3d)( GLdouble red, GLdouble green, GLdouble blue )
{
	glim.SecondaryColor3dEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3dv)( const GLdouble * v );

void VBOXGLTAG(glSecondaryColor3dv)( const GLdouble * v )
{
	glim.SecondaryColor3dvEXT( v );
}

void VBOXGLTAG(glSecondaryColor3f)( GLfloat red, GLfloat green, GLfloat blue );

void VBOXGLTAG(glSecondaryColor3f)( GLfloat red, GLfloat green, GLfloat blue )
{
	glim.SecondaryColor3fEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3fv)( const GLfloat * v );

void VBOXGLTAG(glSecondaryColor3fv)( const GLfloat * v )
{
	glim.SecondaryColor3fvEXT( v );
}

void VBOXGLTAG(glSecondaryColor3i)( GLint red, GLint green, GLint blue );

void VBOXGLTAG(glSecondaryColor3i)( GLint red, GLint green, GLint blue )
{
	glim.SecondaryColor3iEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3iv)( const GLint * v );

void VBOXGLTAG(glSecondaryColor3iv)( const GLint * v )
{
	glim.SecondaryColor3ivEXT( v );
}

void VBOXGLTAG(glSecondaryColor3s)( GLshort red, GLshort green, GLshort blue );

void VBOXGLTAG(glSecondaryColor3s)( GLshort red, GLshort green, GLshort blue )
{
	glim.SecondaryColor3sEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3sv)( const GLshort * v );

void VBOXGLTAG(glSecondaryColor3sv)( const GLshort * v )
{
	glim.SecondaryColor3svEXT( v );
}

void VBOXGLTAG(glSecondaryColor3ub)( GLubyte red, GLubyte green, GLubyte blue );

void VBOXGLTAG(glSecondaryColor3ub)( GLubyte red, GLubyte green, GLubyte blue )
{
	glim.SecondaryColor3ubEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3ubv)( const GLubyte * v );

void VBOXGLTAG(glSecondaryColor3ubv)( const GLubyte * v )
{
	glim.SecondaryColor3ubvEXT( v );
}

void VBOXGLTAG(glSecondaryColor3ui)( GLuint red, GLuint green, GLuint blue );

void VBOXGLTAG(glSecondaryColor3ui)( GLuint red, GLuint green, GLuint blue )
{
	glim.SecondaryColor3uiEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3uiv)( const GLuint * v );

void VBOXGLTAG(glSecondaryColor3uiv)( const GLuint * v )
{
	glim.SecondaryColor3uivEXT( v );
}

void VBOXGLTAG(glSecondaryColor3us)( GLushort red, GLushort green, GLushort blue );

void VBOXGLTAG(glSecondaryColor3us)( GLushort red, GLushort green, GLushort blue )
{
	glim.SecondaryColor3usEXT( red, green, blue );
}

void VBOXGLTAG(glSecondaryColor3usv)( const GLushort * v );

void VBOXGLTAG(glSecondaryColor3usv)( const GLushort * v )
{
	glim.SecondaryColor3usvEXT( v );
}

void VBOXGLTAG(glSecondaryColorPointer)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glSecondaryColorPointer)( GLint size, GLenum type, GLsizei stride, const GLvoid * pointer )
{
	glim.SecondaryColorPointerEXT( size, type, stride, pointer );
}

void VBOXGLTAG(glShaderSourceARB)( VBoxGLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length );

void VBOXGLTAG(glShaderSourceARB)( VBoxGLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length )
{
	glim.ShaderSource( shaderObj, count, string, length );
}

void VBOXGLTAG(glTexSubImage1DEXT)( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexSubImage1DEXT)( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexSubImage1D( target, level, xoffset, width, format, type, pixels );
}

void VBOXGLTAG(glTexSubImage2DEXT)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexSubImage2DEXT)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexSubImage2D( target, level, xoffset, yoffset, width, height, format, type, pixels );
}

void VBOXGLTAG(glTexSubImage3DEXT)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels );

void VBOXGLTAG(glTexSubImage3DEXT)( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels )
{
	glim.TexSubImage3D( target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}

void VBOXGLTAG(glUniform1fARB)( GLint location, GLfloat v0 );

void VBOXGLTAG(glUniform1fARB)( GLint location, GLfloat v0 )
{
	glim.Uniform1f( location, v0 );
}

void VBOXGLTAG(glUniform1fvARB)( GLint location, GLsizei count, const GLfloat * value );

void VBOXGLTAG(glUniform1fvARB)( GLint location, GLsizei count, const GLfloat * value )
{
	glim.Uniform1fv( location, count, value );
}

void VBOXGLTAG(glUniform1iARB)( GLint location, GLint v0 );

void VBOXGLTAG(glUniform1iARB)( GLint location, GLint v0 )
{
	glim.Uniform1i( location, v0 );
}

void VBOXGLTAG(glUniform1ivARB)( GLint location, GLsizei count, const GLint * value );

void VBOXGLTAG(glUniform1ivARB)( GLint location, GLsizei count, const GLint * value )
{
	glim.Uniform1iv( location, count, value );
}

void VBOXGLTAG(glUniform2fARB)( GLint location, GLfloat v0, GLfloat v1 );

void VBOXGLTAG(glUniform2fARB)( GLint location, GLfloat v0, GLfloat v1 )
{
	glim.Uniform2f( location, v0, v1 );
}

void VBOXGLTAG(glUniform2fvARB)( GLint location, GLsizei count, const GLfloat * value );

void VBOXGLTAG(glUniform2fvARB)( GLint location, GLsizei count, const GLfloat * value )
{
	glim.Uniform2fv( location, count, value );
}

void VBOXGLTAG(glUniform2iARB)( GLint location, GLint v0, GLint v1 );

void VBOXGLTAG(glUniform2iARB)( GLint location, GLint v0, GLint v1 )
{
	glim.Uniform2i( location, v0, v1 );
}

void VBOXGLTAG(glUniform2ivARB)( GLint location, GLsizei count, const GLint * value );

void VBOXGLTAG(glUniform2ivARB)( GLint location, GLsizei count, const GLint * value )
{
	glim.Uniform2iv( location, count, value );
}

void VBOXGLTAG(glUniform3fARB)( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );

void VBOXGLTAG(glUniform3fARB)( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 )
{
	glim.Uniform3f( location, v0, v1, v2 );
}

void VBOXGLTAG(glUniform3fvARB)( GLint location, GLsizei count, const GLfloat * value );

void VBOXGLTAG(glUniform3fvARB)( GLint location, GLsizei count, const GLfloat * value )
{
	glim.Uniform3fv( location, count, value );
}

void VBOXGLTAG(glUniform3iARB)( GLint location, GLint v0, GLint v1, GLint v2 );

void VBOXGLTAG(glUniform3iARB)( GLint location, GLint v0, GLint v1, GLint v2 )
{
	glim.Uniform3i( location, v0, v1, v2 );
}

void VBOXGLTAG(glUniform3ivARB)( GLint location, GLsizei count, const GLint * value );

void VBOXGLTAG(glUniform3ivARB)( GLint location, GLsizei count, const GLint * value )
{
	glim.Uniform3iv( location, count, value );
}

void VBOXGLTAG(glUniform4fARB)( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );

void VBOXGLTAG(glUniform4fARB)( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 )
{
	glim.Uniform4f( location, v0, v1, v2, v3 );
}

void VBOXGLTAG(glUniform4fvARB)( GLint location, GLsizei count, const GLfloat * value );

void VBOXGLTAG(glUniform4fvARB)( GLint location, GLsizei count, const GLfloat * value )
{
	glim.Uniform4fv( location, count, value );
}

void VBOXGLTAG(glUniform4iARB)( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );

void VBOXGLTAG(glUniform4iARB)( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 )
{
	glim.Uniform4i( location, v0, v1, v2, v3 );
}

void VBOXGLTAG(glUniform4ivARB)( GLint location, GLsizei count, const GLint * value );

void VBOXGLTAG(glUniform4ivARB)( GLint location, GLsizei count, const GLint * value )
{
	glim.Uniform4iv( location, count, value );
}

void VBOXGLTAG(glUniformMatrix2fvARB)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix2fvARB)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix2fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix3fvARB)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix3fvARB)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix3fv( location, count, transpose, value );
}

void VBOXGLTAG(glUniformMatrix4fvARB)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value );

void VBOXGLTAG(glUniformMatrix4fvARB)( GLint location, GLsizei count, GLboolean transpose, const GLfloat * value )
{
	glim.UniformMatrix4fv( location, count, transpose, value );
}

GLboolean VBOXGLTAG(glUnmapBuffer)( GLenum target );

GLboolean VBOXGLTAG(glUnmapBuffer)( GLenum target )
{
	return  glim.UnmapBufferARB( target );
}

void VBOXGLTAG(glUseProgramObjectARB)( VBoxGLhandleARB programObj );

void VBOXGLTAG(glUseProgramObjectARB)( VBoxGLhandleARB programObj )
{
	glim.UseProgram( programObj );
}

void VBOXGLTAG(glValidateProgramARB)( VBoxGLhandleARB programObj );

void VBOXGLTAG(glValidateProgramARB)( VBoxGLhandleARB programObj )
{
	glim.ValidateProgram( programObj );
}

void VBOXGLTAG(glVertexAttrib1d)( GLuint index, GLdouble x );

void VBOXGLTAG(glVertexAttrib1d)( GLuint index, GLdouble x )
{
	glim.VertexAttrib1dARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1dNV)( GLuint index, GLdouble x );

void VBOXGLTAG(glVertexAttrib1dNV)( GLuint index, GLdouble x )
{
	glim.VertexAttrib1dARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1dv)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib1dv)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib1dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib1dvNV)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib1dvNV)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib1dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib1f)( GLuint index, GLfloat x );

void VBOXGLTAG(glVertexAttrib1f)( GLuint index, GLfloat x )
{
	glim.VertexAttrib1fARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1fNV)( GLuint index, GLfloat x );

void VBOXGLTAG(glVertexAttrib1fNV)( GLuint index, GLfloat x )
{
	glim.VertexAttrib1fARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1fv)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib1fv)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib1fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib1fvNV)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib1fvNV)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib1fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib1s)( GLuint index, GLshort x );

void VBOXGLTAG(glVertexAttrib1s)( GLuint index, GLshort x )
{
	glim.VertexAttrib1sARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1sNV)( GLuint index, GLshort x );

void VBOXGLTAG(glVertexAttrib1sNV)( GLuint index, GLshort x )
{
	glim.VertexAttrib1sARB( index, x );
}

void VBOXGLTAG(glVertexAttrib1sv)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib1sv)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib1svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib1svNV)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib1svNV)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib1svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2d)( GLuint index, GLdouble x, GLdouble y );

void VBOXGLTAG(glVertexAttrib2d)( GLuint index, GLdouble x, GLdouble y )
{
	glim.VertexAttrib2dARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2dNV)( GLuint index, GLdouble x, GLdouble y );

void VBOXGLTAG(glVertexAttrib2dNV)( GLuint index, GLdouble x, GLdouble y )
{
	glim.VertexAttrib2dARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2dv)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib2dv)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib2dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2dvNV)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib2dvNV)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib2dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2f)( GLuint index, GLfloat x, GLfloat y );

void VBOXGLTAG(glVertexAttrib2f)( GLuint index, GLfloat x, GLfloat y )
{
	glim.VertexAttrib2fARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2fNV)( GLuint index, GLfloat x, GLfloat y );

void VBOXGLTAG(glVertexAttrib2fNV)( GLuint index, GLfloat x, GLfloat y )
{
	glim.VertexAttrib2fARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2fv)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib2fv)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib2fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2fvNV)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib2fvNV)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib2fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2s)( GLuint index, GLshort x, GLshort y );

void VBOXGLTAG(glVertexAttrib2s)( GLuint index, GLshort x, GLshort y )
{
	glim.VertexAttrib2sARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2sNV)( GLuint index, GLshort x, GLshort y );

void VBOXGLTAG(glVertexAttrib2sNV)( GLuint index, GLshort x, GLshort y )
{
	glim.VertexAttrib2sARB( index, x, y );
}

void VBOXGLTAG(glVertexAttrib2sv)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib2sv)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib2svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib2svNV)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib2svNV)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib2svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3d)( GLuint index, GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glVertexAttrib3d)( GLuint index, GLdouble x, GLdouble y, GLdouble z )
{
	glim.VertexAttrib3dARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3dNV)( GLuint index, GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glVertexAttrib3dNV)( GLuint index, GLdouble x, GLdouble y, GLdouble z )
{
	glim.VertexAttrib3dARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3dv)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib3dv)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib3dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3dvNV)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib3dvNV)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib3dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3f)( GLuint index, GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glVertexAttrib3f)( GLuint index, GLfloat x, GLfloat y, GLfloat z )
{
	glim.VertexAttrib3fARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3fNV)( GLuint index, GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glVertexAttrib3fNV)( GLuint index, GLfloat x, GLfloat y, GLfloat z )
{
	glim.VertexAttrib3fARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3fv)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib3fv)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib3fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3fvNV)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib3fvNV)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib3fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3s)( GLuint index, GLshort x, GLshort y, GLshort z );

void VBOXGLTAG(glVertexAttrib3s)( GLuint index, GLshort x, GLshort y, GLshort z )
{
	glim.VertexAttrib3sARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3sNV)( GLuint index, GLshort x, GLshort y, GLshort z );

void VBOXGLTAG(glVertexAttrib3sNV)( GLuint index, GLshort x, GLshort y, GLshort z )
{
	glim.VertexAttrib3sARB( index, x, y, z );
}

void VBOXGLTAG(glVertexAttrib3sv)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib3sv)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib3svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib3svNV)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib3svNV)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib3svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4Nbv)( GLuint index, const GLbyte * v );

void VBOXGLTAG(glVertexAttrib4Nbv)( GLuint index, const GLbyte * v )
{
	glim.VertexAttrib4NbvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4Niv)( GLuint index, const GLint * v );

void VBOXGLTAG(glVertexAttrib4Niv)( GLuint index, const GLint * v )
{
	glim.VertexAttrib4NivARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4Nsv)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib4Nsv)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib4NsvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4Nub)( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );

void VBOXGLTAG(glVertexAttrib4Nub)( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
{
	glim.VertexAttrib4NubARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4Nubv)( GLuint index, const GLubyte * v );

void VBOXGLTAG(glVertexAttrib4Nubv)( GLuint index, const GLubyte * v )
{
	glim.VertexAttrib4NubvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4Nuiv)( GLuint index, const GLuint * v );

void VBOXGLTAG(glVertexAttrib4Nuiv)( GLuint index, const GLuint * v )
{
	glim.VertexAttrib4NuivARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4Nusv)( GLuint index, const GLushort * v );

void VBOXGLTAG(glVertexAttrib4Nusv)( GLuint index, const GLushort * v )
{
	glim.VertexAttrib4NusvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4bv)( GLuint index, const GLbyte * v );

void VBOXGLTAG(glVertexAttrib4bv)( GLuint index, const GLbyte * v )
{
	glim.VertexAttrib4bvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4d)( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glVertexAttrib4d)( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.VertexAttrib4dARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4dNV)( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

void VBOXGLTAG(glVertexAttrib4dNV)( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	glim.VertexAttrib4dARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4dv)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib4dv)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib4dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4dvNV)( GLuint index, const GLdouble * v );

void VBOXGLTAG(glVertexAttrib4dvNV)( GLuint index, const GLdouble * v )
{
	glim.VertexAttrib4dvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4f)( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glVertexAttrib4f)( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.VertexAttrib4fARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4fNV)( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

void VBOXGLTAG(glVertexAttrib4fNV)( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	glim.VertexAttrib4fARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4fv)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib4fv)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib4fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4fvNV)( GLuint index, const GLfloat * v );

void VBOXGLTAG(glVertexAttrib4fvNV)( GLuint index, const GLfloat * v )
{
	glim.VertexAttrib4fvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4iv)( GLuint index, const GLint * v );

void VBOXGLTAG(glVertexAttrib4iv)( GLuint index, const GLint * v )
{
	glim.VertexAttrib4ivARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4s)( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );

void VBOXGLTAG(glVertexAttrib4s)( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w )
{
	glim.VertexAttrib4sARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4sNV)( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );

void VBOXGLTAG(glVertexAttrib4sNV)( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w )
{
	glim.VertexAttrib4sARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4sv)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib4sv)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib4svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4svNV)( GLuint index, const GLshort * v );

void VBOXGLTAG(glVertexAttrib4svNV)( GLuint index, const GLshort * v )
{
	glim.VertexAttrib4svARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4ubNV)( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );

void VBOXGLTAG(glVertexAttrib4ubNV)( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
{
	glim.VertexAttrib4NubARB( index, x, y, z, w );
}

void VBOXGLTAG(glVertexAttrib4ubv)( GLuint index, const GLubyte * v );

void VBOXGLTAG(glVertexAttrib4ubv)( GLuint index, const GLubyte * v )
{
	glim.VertexAttrib4ubvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4ubvNV)( GLuint index, const GLubyte * v );

void VBOXGLTAG(glVertexAttrib4ubvNV)( GLuint index, const GLubyte * v )
{
	glim.VertexAttrib4NubvARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4uiv)( GLuint index, const GLuint * v );

void VBOXGLTAG(glVertexAttrib4uiv)( GLuint index, const GLuint * v )
{
	glim.VertexAttrib4uivARB( index, v );
}

void VBOXGLTAG(glVertexAttrib4usv)( GLuint index, const GLushort * v );

void VBOXGLTAG(glVertexAttrib4usv)( GLuint index, const GLushort * v )
{
	glim.VertexAttrib4usvARB( index, v );
}

void VBOXGLTAG(glVertexAttribPointer)( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer );

void VBOXGLTAG(glVertexAttribPointer)( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer )
{
	glim.VertexAttribPointerARB( index, size, type, normalized, stride, pointer );
}

void VBOXGLTAG(glWindowPos2d)( GLdouble x, GLdouble y );

void VBOXGLTAG(glWindowPos2d)( GLdouble x, GLdouble y )
{
	glim.WindowPos2dARB( x, y );
}

void VBOXGLTAG(glWindowPos2dv)( const GLdouble * v );

void VBOXGLTAG(glWindowPos2dv)( const GLdouble * v )
{
	glim.WindowPos2dvARB( v );
}

void VBOXGLTAG(glWindowPos2f)( GLfloat x, GLfloat y );

void VBOXGLTAG(glWindowPos2f)( GLfloat x, GLfloat y )
{
	glim.WindowPos2fARB( x, y );
}

void VBOXGLTAG(glWindowPos2fv)( const GLfloat * v );

void VBOXGLTAG(glWindowPos2fv)( const GLfloat * v )
{
	glim.WindowPos2fvARB( v );
}

void VBOXGLTAG(glWindowPos2i)( GLint x, GLint y );

void VBOXGLTAG(glWindowPos2i)( GLint x, GLint y )
{
	glim.WindowPos2iARB( x, y );
}

void VBOXGLTAG(glWindowPos2iv)( const GLint * v );

void VBOXGLTAG(glWindowPos2iv)( const GLint * v )
{
	glim.WindowPos2ivARB( v );
}

void VBOXGLTAG(glWindowPos2s)( GLshort x, GLshort y );

void VBOXGLTAG(glWindowPos2s)( GLshort x, GLshort y )
{
	glim.WindowPos2sARB( x, y );
}

void VBOXGLTAG(glWindowPos2sv)( const GLshort * v );

void VBOXGLTAG(glWindowPos2sv)( const GLshort * v )
{
	glim.WindowPos2svARB( v );
}

void VBOXGLTAG(glWindowPos3d)( GLdouble x, GLdouble y, GLdouble z );

void VBOXGLTAG(glWindowPos3d)( GLdouble x, GLdouble y, GLdouble z )
{
	glim.WindowPos3dARB( x, y, z );
}

void VBOXGLTAG(glWindowPos3dv)( const GLdouble * v );

void VBOXGLTAG(glWindowPos3dv)( const GLdouble * v )
{
	glim.WindowPos3dvARB( v );
}

void VBOXGLTAG(glWindowPos3f)( GLfloat x, GLfloat y, GLfloat z );

void VBOXGLTAG(glWindowPos3f)( GLfloat x, GLfloat y, GLfloat z )
{
	glim.WindowPos3fARB( x, y, z );
}

void VBOXGLTAG(glWindowPos3fv)( const GLfloat * v );

void VBOXGLTAG(glWindowPos3fv)( const GLfloat * v )
{
	glim.WindowPos3fvARB( v );
}

void VBOXGLTAG(glWindowPos3i)( GLint x, GLint y, GLint z );

void VBOXGLTAG(glWindowPos3i)( GLint x, GLint y, GLint z )
{
	glim.WindowPos3iARB( x, y, z );
}

void VBOXGLTAG(glWindowPos3iv)( const GLint * v );

void VBOXGLTAG(glWindowPos3iv)( const GLint * v )
{
	glim.WindowPos3ivARB( v );
}

void VBOXGLTAG(glWindowPos3s)( GLshort x, GLshort y, GLshort z );

void VBOXGLTAG(glWindowPos3s)( GLshort x, GLshort y, GLshort z )
{
	glim.WindowPos3sARB( x, y, z );
}

void VBOXGLTAG(glWindowPos3sv)( const GLshort * v );

void VBOXGLTAG(glWindowPos3sv)( const GLshort * v )
{
	glim.WindowPos3svARB( v );
}

/*
* No-op stubs
*/
void VBOXGLTAG(glColorSubTable)( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data );

void VBOXGLTAG(glColorSubTable)( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data )
{
}

void VBOXGLTAG(glColorTable)( GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid * table );

void VBOXGLTAG(glColorTable)( GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid * table )
{
}

void VBOXGLTAG(glColorTableParameterfv)( GLenum target, GLenum pname, const GLfloat * params );

void VBOXGLTAG(glColorTableParameterfv)( GLenum target, GLenum pname, const GLfloat * params )
{
}

void VBOXGLTAG(glColorTableParameteriv)( GLenum target, GLenum pname, const GLint * params );

void VBOXGLTAG(glColorTableParameteriv)( GLenum target, GLenum pname, const GLint * params )
{
}

void VBOXGLTAG(glConvolutionFilter1D)( GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid * image );

void VBOXGLTAG(glConvolutionFilter1D)( GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid * image )
{
}

void VBOXGLTAG(glConvolutionFilter2D)( GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image );

void VBOXGLTAG(glConvolutionFilter2D)( GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image )
{
}

void VBOXGLTAG(glConvolutionParameterf)( GLenum target, GLenum pname, GLfloat params );

void VBOXGLTAG(glConvolutionParameterf)( GLenum target, GLenum pname, GLfloat params )
{
}

void VBOXGLTAG(glConvolutionParameterfv)( GLenum target, GLenum pname, const GLfloat * params );

void VBOXGLTAG(glConvolutionParameterfv)( GLenum target, GLenum pname, const GLfloat * params )
{
}

void VBOXGLTAG(glConvolutionParameteri)( GLenum target, GLenum pname, GLint params );

void VBOXGLTAG(glConvolutionParameteri)( GLenum target, GLenum pname, GLint params )
{
}

void VBOXGLTAG(glConvolutionParameteriv)( GLenum target, GLenum pname, const GLint * params );

void VBOXGLTAG(glConvolutionParameteriv)( GLenum target, GLenum pname, const GLint * params )
{
}

void VBOXGLTAG(glCopyColorSubTable)( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width );

void VBOXGLTAG(glCopyColorSubTable)( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width )
{
}

void VBOXGLTAG(glCopyColorTable)( GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width );

void VBOXGLTAG(glCopyColorTable)( GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width )
{
}

void VBOXGLTAG(glCopyConvolutionFilter1D)( GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width );

void VBOXGLTAG(glCopyConvolutionFilter1D)( GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width )
{
}

void VBOXGLTAG(glCopyConvolutionFilter2D)( GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height );

void VBOXGLTAG(glCopyConvolutionFilter2D)( GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height )
{
}

void VBOXGLTAG(glGetColorTable)( GLenum target, GLenum format, GLenum type, GLvoid * table );

void VBOXGLTAG(glGetColorTable)( GLenum target, GLenum format, GLenum type, GLvoid * table )
{
}

void VBOXGLTAG(glGetColorTableParameterfv)( GLenum target, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetColorTableParameterfv)( GLenum target, GLenum pname, GLfloat * params )
{
}

void VBOXGLTAG(glGetColorTableParameteriv)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetColorTableParameteriv)( GLenum target, GLenum pname, GLint * params )
{
}

void VBOXGLTAG(glGetConvolutionFilter)( GLenum target, GLenum format, GLenum type, GLvoid * image );

void VBOXGLTAG(glGetConvolutionFilter)( GLenum target, GLenum format, GLenum type, GLvoid * image )
{
}

void VBOXGLTAG(glGetConvolutionParameterfv)( GLenum target, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetConvolutionParameterfv)( GLenum target, GLenum pname, GLfloat * params )
{
}

void VBOXGLTAG(glGetConvolutionParameteriv)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetConvolutionParameteriv)( GLenum target, GLenum pname, GLint * params )
{
}

void VBOXGLTAG(glGetHistogram)( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values );

void VBOXGLTAG(glGetHistogram)( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values )
{
}

void VBOXGLTAG(glGetHistogramParameterfv)( GLenum target, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetHistogramParameterfv)( GLenum target, GLenum pname, GLfloat * params )
{
}

void VBOXGLTAG(glGetHistogramParameteriv)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetHistogramParameteriv)( GLenum target, GLenum pname, GLint * params )
{
}

void VBOXGLTAG(glGetMinmax)( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values );

void VBOXGLTAG(glGetMinmax)( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values )
{
}

void VBOXGLTAG(glGetMinmaxParameterfv)( GLenum target, GLenum pname, GLfloat * params );

void VBOXGLTAG(glGetMinmaxParameterfv)( GLenum target, GLenum pname, GLfloat * params )
{
}

void VBOXGLTAG(glGetMinmaxParameteriv)( GLenum target, GLenum pname, GLint * params );

void VBOXGLTAG(glGetMinmaxParameteriv)( GLenum target, GLenum pname, GLint * params )
{
}

void VBOXGLTAG(glGetSeparableFilter)( GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span );

void VBOXGLTAG(glGetSeparableFilter)( GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span )
{
}

void VBOXGLTAG(glHistogram)( GLenum target, GLsizei width, GLenum internalFormat, GLboolean sink );

void VBOXGLTAG(glHistogram)( GLenum target, GLsizei width, GLenum internalFormat, GLboolean sink )
{
}

void VBOXGLTAG(glMinmax)( GLenum target, GLenum internalFormat, GLboolean sink );

void VBOXGLTAG(glMinmax)( GLenum target, GLenum internalFormat, GLboolean sink )
{
}

void VBOXGLTAG(glResetHistogram)( GLenum target );

void VBOXGLTAG(glResetHistogram)( GLenum target )
{
}

void VBOXGLTAG(glResetMinmax)( GLenum target );

void VBOXGLTAG(glResetMinmax)( GLenum target )
{
}

void VBOXGLTAG(glSampleMaskEXT)( GLclampf value, GLboolean invert );

void VBOXGLTAG(glSampleMaskEXT)( GLclampf value, GLboolean invert )
{
}

void VBOXGLTAG(glSamplePatternEXT)( GLenum pattern );

void VBOXGLTAG(glSamplePatternEXT)( GLenum pattern )
{
}

void VBOXGLTAG(glSeparableFilter2D)( GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column );

void VBOXGLTAG(glSeparableFilter2D)( GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column )
{
}

