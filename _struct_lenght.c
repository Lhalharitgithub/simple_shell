#include "shell.h"

/**
 * _struct_lenght - custom function named _struct_lenght.
 * @dl_string_ch: argument of the function _struct_lenght.
 * @nth_argument: argument of the function _struct_lenght.
 *
 * Return: returns int variable intDigit.
 */
int _struct_lenght(char *dl_string_ch, char nth_argument)
{
	int dl_var;
	int intDigit;

	dl_var = 0;
	intDigit = 0;

	while (dl_string_ch[dl_var] != '\0')
	{
		if ((dl_string_ch[dl_var] == nth_argument) && (dl_string_ch[dl_var + 1] != nth_argument))
		{
			intDigit++;
		}
		if ((dl_string_ch[dl_var] == nth_argument) && (dl_string_ch[dl_var + 1] == '\0'))
		{
			intDigit--;
		}
		dl_var++;
	}
	return (intDigit);
}
