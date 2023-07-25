#include "DL_shell.h"

/**
 * discard_interval_func - initialised custom function.
 * @dl_string_ch: argument of the function.
 *
 * Return: Returns argument of the custom function.
 */



char *discard_interval_func(char *dl_string_ch)
{
	while (*dl_string_ch == ' ')
		dl_string_ch++;
	return (dl_string_ch);
}
