#include "shell.h"

/**
 * dl_inopt - custom function initialised.
 * @dl_surd: struct argument for the custom function.
 *
 * Returns: Returns nothing.
 */

void dl_inopt(DL_node_list_t *dl_surd)
{
	size_t dl_var = 0, fd_arg = 0;
	int __shell_num = 0, _terminate_pos = 0;
	char *_input_ = NULL, *_shell_pnt = NULL, **and_arg_shell, **g_dp;

	dl_var = DL_get_line_custom_function(&_input_);
	if (dl_var == 0)
	{
		free(_input_);
		exit(0);
	}
	_shell_pnt = _input_;
	_input_ = ag_func(_input_);
	and_arg_shell = func_sub_string(_input_, "\n");
	if (_shell_pnt != NULL)
		free(_shell_pnt);
	fd_arg = 0;
	while (and_arg_shell[fd_arg] != NULL)
	{
		__shell_num++;
		g_dp = NULL;
		g_dp = func_sub_string(and_arg_shell[fd_arg], " ");
		_terminate_pos = stack_const(g_dp, dl_surd, __shell_num, and_arg_shell);
		if (_terminate_pos)
		{
			fd_arg++;
			continue;
		}
		_terminate_pos = func_dl_execve(g_dp, dl_surd, __shell_num);
		fd_arg++;
	}
	rm_dl_(and_arg_shell);
	RmLL(dl_surd);
	exit(_terminate_pos);
}
