#include "DL_shell.h"

/**
 * rm_dl_ - Initialised custom function.
 * @dl_string_ch: first argument of custom function.
 *
 * Returns: returns Nothing.
 *
 */



void rm_dl_(char **dl_string_ch)
{
	int dl_var = 0;

	while (dl_string_ch[dl_var] != NULL)
	{
		free(dl_string_ch[dl_var]);
		dl_var++;
	}
	free(dl_string_ch);
}
