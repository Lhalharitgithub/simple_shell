#include "DL_shell.h"

/**
 * func_to_copy_string - Initialised custom function.
 * @_allocation: argument for custom function.
 * @_input_origin: argument for custom function.
 *
 * Return: returns first argument of custom function.
 */

char *func_to_copy_string(char *_allocation, char *_input_origin)
{

	int dl_var;
	int size_ln;

	for (size_ln = 0; _input_origin[size_ln] != '\0'; size_ln++)
		;

	for (dl_var = 0; dl_var <= size_ln; dl_var++)
		_allocation[dl_var] = _input_origin[dl_var];

	return (_allocation);
}
