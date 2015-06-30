/* Copyright (c) 2001, Stanford University
	All rights reserved.

	See the file LICENSE.txt for information on redistributing this software. */
	

#include "cr_spu.h"
#include "chromium.h"
#include "cr_error.h"
#include "cr_mem.h"
#include "cr_net.h"
#include "server_dispatch.h"
#include "server.h"

void SERVER_DISPATCH_APIENTRY crServerDispatchGetBufferParameterivARB( GLenum target, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetBufferParameterivARB( target, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetClipPlane( GLenum plane, GLdouble * equation )
{
	GLdouble local_equation[4];
	(void) equation;
	cr_server.head_spu->dispatch_table.GetClipPlane( plane, local_equation );
	crServerReturnValue( &(local_equation[0]), 4*sizeof(GLdouble) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetCombinerInputParameterfvNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetCombinerInputParameterfvNV( stage, portion, variable, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetCombinerInputParameterivNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetCombinerInputParameterivNV( stage, portion, variable, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetCombinerOutputParameterfvNV( GLenum stage, GLenum portion, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetCombinerOutputParameterfvNV( stage, portion, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetCombinerOutputParameterivNV( GLenum stage, GLenum portion, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetCombinerOutputParameterivNV( stage, portion, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetCombinerStageParameterfvNV( GLenum stage, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetCombinerStageParameterfvNV( stage, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetFenceivNV( GLuint fence, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetFenceivNV( fence, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetFinalCombinerInputParameterfvNV( GLenum variable, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetFinalCombinerInputParameterfvNV( variable, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetFinalCombinerInputParameterivNV( GLenum variable, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetFinalCombinerInputParameterivNV( variable, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetLightfv( GLenum light, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetLightfv( light, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetLightiv( GLenum light, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetLightiv( light, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetMaterialfv( GLenum face, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetMaterialfv( face, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetMaterialiv( GLenum face, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetMaterialiv( face, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramEnvParameterdvARB( GLenum target, GLuint index, GLdouble * params )
{
	GLdouble local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramEnvParameterdvARB( target, index, local_params );
	crServerReturnValue( &(local_params[0]), 4*sizeof(GLdouble) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramEnvParameterfvARB( GLenum target, GLuint index, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramEnvParameterfvARB( target, index, local_params );
	crServerReturnValue( &(local_params[0]), 4*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramLocalParameterdvARB( GLenum target, GLuint index, GLdouble * params )
{
	GLdouble local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramLocalParameterdvARB( target, index, local_params );
	crServerReturnValue( &(local_params[0]), 4*sizeof(GLdouble) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramLocalParameterfvARB( GLenum target, GLuint index, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramLocalParameterfvARB( target, index, local_params );
	crServerReturnValue( &(local_params[0]), 4*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramNamedParameterdvNV( GLuint id, GLsizei len, const GLubyte * name, GLdouble * params )
{
	GLdouble local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramNamedParameterdvNV( id, len, name, local_params );
	crServerReturnValue( &(local_params[0]), 4*sizeof(GLdouble) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramNamedParameterfvNV( GLuint id, GLsizei len, const GLubyte * name, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramNamedParameterfvNV( id, len, name, local_params );
	crServerReturnValue( &(local_params[0]), 4*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramParameterdvNV( GLenum target, GLuint index, GLenum pname, GLdouble * params )
{
	GLdouble local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramParameterdvNV( target, index, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLdouble) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramParameterfvNV( target, index, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramivARB( GLenum target, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramivARB( target, pname, local_params );
	crServerReturnValue( &(local_params[0]), 1*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetProgramivNV( GLuint id, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetProgramivNV( id, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetQueryObjectivARB( GLuint id, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetQueryObjectivARB( id, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetQueryObjectuivARB( GLuint id, GLenum pname, GLuint * params )
{
	GLuint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetQueryObjectuivARB( id, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLuint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetQueryivARB( GLenum target, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetQueryivARB( target, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetRenderbufferParameterivEXT( GLenum target, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetRenderbufferParameterivEXT( target, pname, local_params );
	crServerReturnValue( &(local_params[0]), 1*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetTexGendv( GLenum coord, GLenum pname, GLdouble * params )
{
	GLdouble local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetTexGendv( coord, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLdouble) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetTexGenfv( GLenum coord, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetTexGenfv( coord, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetTexGeniv( GLenum coord, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetTexGeniv( coord, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetTexLevelParameterfv( GLenum target, GLint level, GLenum pname, GLfloat * params )
{
	GLfloat local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetTexLevelParameterfv( target, level, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetTexLevelParameteriv( GLenum target, GLint level, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetTexLevelParameteriv( target, level, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetTexParameterfv( GLenum target, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetTexParameterfv( target, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetTexParameteriv( GLenum target, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetTexParameteriv( target, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetTrackMatrixivNV( GLenum target, GLuint address, GLenum pname, GLint * params )
{
	GLint local_params[1];
	(void) params;
	cr_server.head_spu->dispatch_table.GetTrackMatrixivNV( target, address, pname, local_params );
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetVertexAttribdvARB( GLuint index, GLenum pname, GLdouble * params )
{
	GLdouble local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetVertexAttribdvARB( index, pname, local_params );
	if (pname==GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB){
		local_params[0]=(GLdouble)crStateBufferHWIDtoID((GLint)local_params[0]);
	}
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLdouble) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetVertexAttribdvNV( GLuint index, GLenum pname, GLdouble * params )
{
	GLdouble local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetVertexAttribdvNV( index, pname, local_params );
	if (pname==GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB){
		local_params[0]=(GLdouble)crStateBufferHWIDtoID((GLint)local_params[0]);
	}
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLdouble) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetVertexAttribfvARB( GLuint index, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetVertexAttribfvARB( index, pname, local_params );
	if (pname==GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB){
		local_params[0]=(GLfloat)crStateBufferHWIDtoID((GLint)local_params[0]);
	}
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetVertexAttribfvNV( GLuint index, GLenum pname, GLfloat * params )
{
	GLfloat local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetVertexAttribfvNV( index, pname, local_params );
	if (pname==GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB){
		local_params[0]=(GLfloat)crStateBufferHWIDtoID((GLint)local_params[0]);
	}
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLfloat) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetVertexAttribivARB( GLuint index, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetVertexAttribivARB( index, pname, local_params );
	if (pname==GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB){
		local_params[0]=(GLint)crStateBufferHWIDtoID((GLint)local_params[0]);
	}
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

void SERVER_DISPATCH_APIENTRY crServerDispatchGetVertexAttribivNV( GLuint index, GLenum pname, GLint * params )
{
	GLint local_params[4];
	(void) params;
	cr_server.head_spu->dispatch_table.GetVertexAttribivNV( index, pname, local_params );
	if (pname==GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB){
		local_params[0]=(GLint)crStateBufferHWIDtoID((GLint)local_params[0]);
	}
	crServerReturnValue( &(local_params[0]), crStateHlpComponentsCount(pname)*sizeof(GLint) );
}

