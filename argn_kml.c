#include "shell.h"

/**
 * argn_kml - custom function named argn_kml.
 * @dl_string_ch: argument of the function argn_kml.
 * @nth_argument: argument of the function argn_kml.
 *
 * Return: returns dl_string_ch.
 */



char *argn_kml(char *dl_string_ch, char nth_argument)
{
	while (*dl_string_ch == nth_argument)
		dl_string_ch++;
	return (dl_string_ch);
}
