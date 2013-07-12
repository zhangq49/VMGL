# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

import sys

sys.path.append( "../glapi_parser" )
import apiutil


apiutil.CopyrightC()

print """
/* DO NOT EDIT - generated by feedback.py */

#ifndef FEEDBACKSPU_PROTO_H
#define FEEDBACKSPU_PROTO_H

#include "feedbackspu.h"

"""

keys = apiutil.GetDispatchedFunctions("../glapi_parser/APIspec.txt")

for func_name in keys:
	if apiutil.FindSpecial( "feedback_state", func_name ):
		return_type = apiutil.ReturnType(func_name)
		params = apiutil.Parameters(func_name)
		print 'extern %s FEEDBACKSPU_APIENTRY feedbackspu_%s( %s );' % (return_type, func_name, apiutil.MakeDeclarationString(params))


print """
#endif
"""