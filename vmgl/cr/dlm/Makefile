# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

TOP = ..

LIBRARY = crdlm
LIBRARIES = spuload crutil crstate
#SHARED = 1
FILES = dlm \
	dlm_lists \
	dlm_generated \
	dlm_pointers \
	dlm_arrays \
	dlm_checklist \
	dlm_error \
	dlm_calllist \
	dlm_bbox
LIB_DEFS = dlm.def

PRECOMP = $(LIB_DEFS) $(TOP)/include/cr_dlm.h dlm_generated.h dlm_generated.c
SLOP = $(PRECOMP)

include $(TOP)/cr.mk

$(TOP)/include/cr_dlm.h: dlm_header.py $(APIFILES)
	@$(ECHO) Making the DLM functions header
	@$(PYTHON) dlm_header.py header > $@

dlm.def: dlm_header.py $(APIFILES)
	@$(ECHO) Making the DLM definitions file
	@$(PYTHON) dlm_header.py defs > $@

dlm_generated.h: dlm_generated.py $(APIFILES)
	$(PYTHON) dlm_generated.py headers > $@

dlm_generated.c: dlm_generated.py $(APIFILES)
	$(PYTHON) dlm_generated.py source > $@

