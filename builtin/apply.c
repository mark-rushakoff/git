#include "lockfile.h"
#include "apply.h"
int cmd_apply(int argc, const char **argv, const char *prefix)
	if (init_apply_state(&state, prefix))
		exit(128);
	argc = apply_parse_options(argc, argv,
				   &state, &force_apply, &options,
				   apply_usage);
	if (check_apply_state(&state, force_apply))
		exit(128);