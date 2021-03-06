/* Copyright (c) 2001, Stanford University
 * All rights reserved
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#include "packer.h"
#include "cr_opcodes.h"
#include "cr_mem.h"

void PACK_APIENTRY crPackBoundsInfoCR( const CRrecti *bounds, const GLbyte *payload, GLint len, GLint num_opcodes )
{
	GET_PACKER_CONTEXT(pc);
	/* Don't get the buffered_ptr here because we've already 
	 * verified that there's enough space for everything. */

	unsigned char *data_ptr = pc->buffer.data_current;
	int len_aligned     = ( len + 0x3 ) & ~0x3;
	int total_len = 24 + len_aligned;

	WRITE_DATA( 0, int, total_len );
	WRITE_DATA( 4, int, bounds->x1 );
	WRITE_DATA( 8, int, bounds->y1 );
	WRITE_DATA( 12, int, bounds->x2 );
	WRITE_DATA( 16, int, bounds->y2 );
	WRITE_DATA( 20, int, num_opcodes );

	/* skip the BOUNDSINFO */
	data_ptr += 24;

	/* put in padding opcodes (deliberately bogus) */
	switch ( len_aligned - len )
	{
	  case 3: *data_ptr++ = 0xff; /* FALLTHROUGH */
	  case 2: *data_ptr++ = 0xff; /* FALLTHROUGH */
	  case 1: *data_ptr++ = 0xff; /* FALLTHROUGH */
	  default: break;
	}

	crMemcpy( data_ptr, payload, len );

	WRITE_OPCODE( pc, CR_BOUNDSINFOCR_OPCODE );
	pc->buffer.data_current += 24 + len_aligned;
}
