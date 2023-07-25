#include "DL_shell.h"

/**
 * custom_string_len_func - custom function named custom_string_len_func.
 * @dl_string_ch: argument of the function custom_string_len_func.
 * @current_location: argument of the function custom_string_len_func.
 * @nth_argument: argument of the function custom_string_len_func.
 *
 * Return: Returns integer variable named size_ln.
 */
int custom_string_len_func(char *dl_string_ch, int current_location, char nth_argument)
{
	int size_ln;

	size_ln = 0;

	while ((dl_string_ch[current_location] != nth_argument) && (dl_string_ch[current_location] != '\0'))
	{
		current_location++;
		size_ln++;
	}
	return (size_ln);
}
