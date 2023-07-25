#include "DL_shell.h"

/**
 * ag_func - custom function named ag_func.
 * @dl_string_ch: argument of the function ag_func.
 *
 * Return: returns dl_string_ch.
 */
char *ag_func(char *dl_string_ch)
{
	while (*dl_string_ch == ' ' || *dl_string_ch == '\n')
		dl_string_ch++;
	return (dl_string_ch);
}
