#include "DL_shell.h"

/**
 * _string_concatenated_funct - Custom function named
 * __string_concatenated_funct.
 * @_allocation: argument of the function _string_concatenated_funct.
 * @_input_origin: argument of the function _string_concatenated_funct.
 *
 * Return: returns variable named _allocation.
 */



char *_string_concatenated_funct(char *_allocation, char *_input_origin)
{
	int size_ln = 0;
	int _ln_size = 0;
	int _ln_size_sum_int = 0;
	int dl_var_int = 0;

	while (_allocation[size_ln] != '\0')
	{
		size_ln++;
		_ln_size_sum_int++;
	}
	while (_input_origin[_ln_size] != '\0')
	{
		_ln_size++;
		_ln_size_sum_int++;
	}
	_allocation = dl_resize_memory(_allocation, size_ln, sizeof(char)
			* _ln_size_sum_int + 1);
	dl_var_int = 1;
	while (_input_origin[dl_var_int] != '\0')
	{
		_allocation[size_ln] = _input_origin[dl_var_int];
		size_ln++;
		dl_var_int++;
	}
	_allocation[size_ln] = '\0';

	return (_allocation);
}
