#include "shell.h"

/**
 * cl_d_ - custom function named cl_d_.
 * @dl_var: argument of the function cl_d_.
 * @_input_: argument of the function cl_d_.
 * @dl_surd: argument of the function cl_d_.
 *
 * Return: Returns nothing.
 */
void cl_d_(int dl_var, char *_input_, DL_node_list_t *dl_surd)
{
	if (dl_var == 0)
	{
		free(_input_);
		RmLL(dl_surd);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
}
