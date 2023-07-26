#include "shell.h"
/**
 * DL__simple_shell_prompt - custom function named DL__simple_shell_prompt.
 * @ff_arg: argument of the custom function.
 * Return: returns integer variable.
 */
int DL__simple_shell_prompt(char **ff_arg)
{
	DL_node_list_t *dl_surd;
	size_t dl_var = 0, fd_arg = 0;
	int __shell_num = 0, _terminate_pos = 0;
	char *_input_, *_shell_pnt, **g_dp;

	dl_surd = Lsurd_node_dl(ff_arg);
	do {
		__shell_num++;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		else
			dl_inopt(dl_surd);
		signal(SIGINT, copy_slt);
		_input_ = NULL;
		dl_var = 0;
		dl_var = DL_get_line_custom_function(&_input_);
		cl_d_(dl_var, _input_, dl_surd);
		_shell_pnt = _input_;
		_input_ = discard_interval_func(_input_);
		fd_arg = 0;
		while (_input_[fd_arg] != '\n')
			fd_arg++;
		_input_[fd_arg] = '\0';
		if (_input_[0] == '\0')
		{
			free(_shell_pnt);
			continue;
		}
		g_dp = NULL;
		g_dp = func_sub_string(_input_, " ");
		if (_shell_pnt != NULL)
			free(_shell_pnt);
		_terminate_pos = stack_const(g_dp, dl_surd, __shell_num, NULL);
		if (_terminate_pos)
			continue;
		_terminate_pos = func_dl_execve(g_dp, dl_surd, __shell_num);
	} while (1);
	return (_terminate_pos);
}
