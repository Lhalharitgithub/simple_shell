#include "shell.h"

/**
 * _fun_merge_strings - custom function named _fun_merge_strings.
 * @var_string_arg_fst: argument of the function _fun_merge_strings.
 * @var_string_arg_snd: argument of the function _fun_merge_strings.
 *
 * Return: Returns 0.
 */

int _fun_merge_strings(char *var_string_arg_fst, char *var_string_arg_snd)
{
	int dl_var;

	dl_var = 0;

	while (*(var_string_arg_fst + dl_var) == *(var_string_arg_snd + dl_var) &&
			*(var_string_arg_fst + dl_var))
		dl_var++;

	if (*(var_string_arg_snd + dl_var))
		return (*(var_string_arg_fst + dl_var) - *(var_string_arg_snd + dl_var));
	else
		return (0);
}
