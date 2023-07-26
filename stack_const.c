#include "shell.h"

/**
 * stack_const - initialised custom function.
 * @g_dp: first argument of the function.
 * @dl_surd: second argument of the custom function.
 * @__dgt: third argument of the custom function.
 * @_input_: fourth argument of the custom function.
 *
 * Return: 1 and dl_var with the value of 0.
 */


int stack_const(char **g_dp, DL_node_list_t *dl_surd,
		int __dgt, char **_input_)
{


	int dl_var;

	dl_var = 0;

	if (_fun_merge_strings(g_dp[0], "exit") == 0)
	{
		dl_var = dl_rm_func(g_dp, dl_surd, __dgt, _input_);
	}
	else if (_fun_merge_strings(g_dp[0], "env") == 0)
	{
		surd_and_2(g_dp, dl_surd);
		dl_var = 1;
	}
	else if (_fun_merge_strings(g_dp[0], "cd") == 0)
	{
		dl_var = dl__change_directory_func(g_dp, dl_surd, __dgt);
	}
	else if (_fun_merge_strings(g_dp[0], "setenv") == 0)
	{
		mod_LL(&dl_surd, g_dp);
		dl_var = 1;
	}
	else if (_fun_merge_strings(g_dp[0], "unsetenv") == 0)
	{
		rm_mod_LL(&dl_surd, g_dp);
		dl_var = 1;
	}
	return (dl_var);
}
