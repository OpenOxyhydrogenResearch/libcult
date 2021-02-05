# file      : build/configuration-rules.make
# author    : Boris Kolpackov <boris@kolpackov.net>
# copyright : Copyright (c) 2006-2010 Boris Kolpackov
# license   : GNU GPL v2; see accompanying LICENSE file

$(dcf_root)/configuration-dynamic.make: | $(dcf_root)/.
	$(call message,,$(scf_root)/configure $@)

ifndef %foreign%

disfigure::
	$(call message,rm $$1,rm -f $$1,$(dcf_root)/configuration-dynamic.make)

endif

ifeq ($(.DEFAULT_GOAL),$(dcf_root)/configuration-dynamic.make)
.DEFAULT_GOAL :=
endif
