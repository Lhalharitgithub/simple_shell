#include "shell.h"

/**
 * ntp_string_dup - initialised custom function.
 * @dl_string_ch: fisrt argument of the custom function.
 * @sm_count: second argument of the custom function.
 *
 * Return: returns pointer of variable type char.
 */



char *ntp_string_dup(char *dl_string_ch, int sm_count)
{
	char *_varToCopy_string;
	int dl_var, size_ln = 0;

	if (dl_string_ch == NULL)
		return (NULL);
	while (*(dl_string_ch + size_ln))
		size_ln++;
	size_ln++;
	_varToCopy_string = malloc(sizeof(char) * (size_ln - sm_count));
	if (_varToCopy_string == NULL)
		return (NULL);
	dl_var = 0;
	while (dl_var < (size_ln - sm_count))
	{
		*(_varToCopy_string + dl_var) = *(dl_string_ch + sm_count + dl_var);
		dl_var++;
	}
	return (_varToCopy_string);
}
