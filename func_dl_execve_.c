#include "shell.h"

/**
 * func_dl_execve - initialised custom function.
 * @__var_string_arg: first argument of the custom function.
 * @dl_surd: second argument of the custom function.
 * @__dgt: third argument of the custom function.
 *
 * Return: returns 0
 */


int func_dl_execve(char **__var_string_arg, DL_node_list_t *dl_surd, int __dgt)
{
	char *_inplace_dr;
	int klCurrent = 0;
	int dl_var_2 = 0;
	pid_t dl_processID_var;

	if (access(__var_string_arg[0], F_OK) == 0)
	{
		_inplace_dr = __var_string_arg[0];
		dl_var_2 = 1;
	}
	else
		_inplace_dr = func_diffChar(__var_string_arg[0], dl_surd);

	if (access(_inplace_dr, X_OK) != 0)
	{
		_cmd_unknown(__var_string_arg[0], __dgt, dl_surd);
		rm_dl_(__var_string_arg);
		return (127);
	}
	else
	{
		dl_processID_var = fork();
		if (dl_processID_var == 0)
		{
			if (execve(_inplace_dr, __var_string_arg, NULL) == -1)
			{
				_cmd_unknown(__var_string_arg[0], __dgt, dl_surd);
				nth_ex_arg(__var_string_arg, dl_surd);
			}
		}
		else
		{
			wait(&klCurrent);
			rm_dl_(__var_string_arg);
			if (dl_var_2 == 0)
				free(_inplace_dr);
		}
	}
	return (0);
}
