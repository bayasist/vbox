/* Copyright (c) 2001, Stanford University
	All rights reserved.

	See the file LICENSE.txt for information on redistributing this software. */
	

/* DO NOT EDIT - THIS FILE AUTOMATICALLY GENERATED BY server_retval.py SCRIPT */
#include "chromium.h"
#include "cr_mem.h"
#include "cr_net.h"
#include "server_dispatch.h"
#include "server.h"

void crServerReturnValue( const void *payload, unsigned int payload_len )
{
    if (!cr_server.fProcessingPendedCommands)
    { 
        CRMessageReadback *rb;
        int msg_len = sizeof( *rb ) + payload_len;
    
        /* Don't reply to client if we're loading VM snapshot*/
        if (cr_server.bIsInLoadingState)
            return;
    
        if (cr_server.curClient->conn->type == CR_FILE)
        {
            return;
        }
    
        rb = (CRMessageReadback *) crAlloc( msg_len );
    
        rb->header.type = CR_MESSAGE_READBACK;
        CRDBGPTR_PRINTRB(cr_server.curClient->conn->u32ClientID, &cr_server.writeback_ptr);
        CRDBGPTR_CHECKNZ(&cr_server.writeback_ptr);
        CRDBGPTR_CHECKNZ(&cr_server.return_ptr);
        crMemcpy( &(rb->writeback_ptr), &(cr_server.writeback_ptr), sizeof( rb->writeback_ptr ) );
        crMemcpy( &(rb->readback_ptr), &(cr_server.return_ptr), sizeof( rb->readback_ptr ) );
        crMemcpy( rb+1, payload, payload_len );
        crNetSend( cr_server.curClient->conn, NULL, rb, msg_len );
        CRDBGPTR_SETZ(&cr_server.writeback_ptr);
        CRDBGPTR_SETZ(&cr_server.return_ptr);
        crFree( rb );
        return;
    }
#ifdef DEBUG_misha
    WARN(("Pending command returns value"));
#endif
    CRDBGPTR_SETZ(&cr_server.writeback_ptr);
    CRDBGPTR_SETZ(&cr_server.return_ptr);
}

GLenum SERVER_DISPATCH_APIENTRY crServerDispatchCheckFramebufferStatusEXT( GLenum target )
{
	GLenum retval;
	retval = cr_server.head_spu->dispatch_table.CheckFramebufferStatusEXT( target );
	crServerReturnValue( &retval, sizeof(retval) );
	return retval; /* WILL PROBABLY BE IGNORED */
}
GLuint SERVER_DISPATCH_APIENTRY crServerDispatchGenLists( GLsizei range )
{
	GLuint retval;
	retval = cr_server.head_spu->dispatch_table.GenLists( range );
	crServerReturnValue( &retval, sizeof(retval) );
	return retval; /* WILL PROBABLY BE IGNORED */
}
GLboolean SERVER_DISPATCH_APIENTRY crServerDispatchIsEnabled( GLenum cap )
{
	GLboolean retval;
	retval = cr_server.head_spu->dispatch_table.IsEnabled( cap );
	crServerReturnValue( &retval, sizeof(retval) );
	return retval; /* WILL PROBABLY BE IGNORED */
}
GLboolean SERVER_DISPATCH_APIENTRY crServerDispatchIsFenceNV( GLuint fence )
{
	GLboolean retval;
	retval = cr_server.head_spu->dispatch_table.IsFenceNV( fence );
	crServerReturnValue( &retval, sizeof(retval) );
	return retval; /* WILL PROBABLY BE IGNORED */
}
GLboolean SERVER_DISPATCH_APIENTRY crServerDispatchIsQueryARB( GLuint id )
{
	GLboolean retval;
	retval = cr_server.head_spu->dispatch_table.IsQueryARB( id );
	crServerReturnValue( &retval, sizeof(retval) );
	return retval; /* WILL PROBABLY BE IGNORED */
}
GLint SERVER_DISPATCH_APIENTRY crServerDispatchRenderMode( GLenum mode )
{
	GLint retval;
	retval = cr_server.head_spu->dispatch_table.RenderMode( mode );
	crServerReturnValue( &retval, sizeof(retval) );
	return retval; /* WILL PROBABLY BE IGNORED */
}
GLboolean SERVER_DISPATCH_APIENTRY crServerDispatchTestFenceNV( GLuint fence )
{
	GLboolean retval;
	retval = cr_server.head_spu->dispatch_table.TestFenceNV( fence );
	crServerReturnValue( &retval, sizeof(retval) );
	return retval; /* WILL PROBABLY BE IGNORED */
}
