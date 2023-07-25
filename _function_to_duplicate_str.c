#include "DL_shell.h"

/**
 * func_duplicate_string - custom function named func_duplicate_string.
 * @dl_string_ch: argument of the function func_duplicate_string.
 *
 * Return: Returns char variable _varToCopy_string.
 */




char *func_duplicate_string(char *dl_string_ch)
{
	char *_varToCopy_string;
	int dl_var;
	int size_ln;

	size_ln = 0;

	if (dl_string_ch == NULL)
		return (NULL);
	while (*(dl_string_ch + size_ln))
		size_ln++;
	size_ln++;
	_varToCopy_string = malloc(sizeof(char) * size_ln);
	if (_varToCopy_string == NULL)
		return (NULL);
	dl_var = 0;
	while (dl_var < size_ln)
	{
		*(_varToCopy_string + dl_var) = *(dl_string_ch + dl_var);
		dl_var++;
	}
	return (_varToCopy_string);
}
