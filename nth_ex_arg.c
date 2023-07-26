#include "DL_shell.h"

/**
 * nth_ex_arg - initialised custom function.
 * @dl_string_ch: argument of custom function.
 * @dl_surd: argument of custom function.
 *
 * Returns: returns 0.
 */


void nth_ex_arg(char **dl_string_ch, DL_node_list_t *dl_surd)
{
	rm_dl_(dl_string_ch);
	RmLL(dl_surd);
	_exit(0);
}
