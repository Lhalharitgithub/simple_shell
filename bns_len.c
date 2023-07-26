#include "shell.h"

/**
 * bns_len - custom funcion named bns_len.
 * @dl_string_ch: argument of the function bns_len.
 * @nth_argument: argument of the function bns_len.
 *
 * Return: returns intDigit
 */
int bns_len(char *dl_string_ch, char nth_argument)
{
	int dl_var;
	int intDigit;

	intDigit = 0;
	dl_var = 0;

	while (dl_string_ch[dl_var] != '\0')
	{
		if (dl_string_ch[dl_var] == nth_argument)
		{
			intDigit++;
		}
		dl_var++;
	}
	return (intDigit);
}
