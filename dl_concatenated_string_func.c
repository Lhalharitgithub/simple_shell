#include "shell.h"

/**
 * dl_concatenated_string_func - initialised custom function.
 * @_allocation: function argument.
 * @_input_origin: function argument.
 *
 * Return: returns integer.
 */



char *dl_concatenated_string_func(char *_allocation, char *_input_origin)
{
	int size_ln;
	int _ln_size;
	int _ln_size_sum_int;
	int dl_var_int;

	size_ln = 0;
	_ln_size = 0;
	_ln_size_sum_int = 0;
	dl_var_int = 0;


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
	_allocation = dl_resize_memory(_allocation, size_ln,
			sizeof(char) * _ln_size_sum_int + 1);

	while (_input_origin[dl_var_int] != '\0')
	{
		_allocation[size_ln] = _input_origin[dl_var_int];
		size_ln++;
		dl_var_int++;
	}
	_allocation[size_ln] = '\0';
	return (_allocation);
}
