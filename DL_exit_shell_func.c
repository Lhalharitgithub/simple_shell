#include "shell.h"

/**
 * convertToInt - Custom function named convertToInt.
 * @__var_string_arg: Arguement of the function convertToInt.
 *
 * Return: Returns -1
 */
int convertToInt(char *__var_string_arg)
{
	int dl_var;
	unsigned int __dgt;

	dl_var = 0;
	__dgt = 0;

	while (__var_string_arg[dl_var] != '\0')
	{
		if (__var_string_arg[dl_var] >= '0' && __var_string_arg[dl_var] <= '9')
			__dgt = __dgt * 10 + (__var_string_arg[dl_var] - '0');
		if (__var_string_arg[dl_var] > '9' || __var_string_arg[dl_var] < '0')
			return (-1);
		dl_var++;
	}
	return (__dgt);
}




/**
 * dl_rm_func - custom function named dl_rm_func.
 * @dl_string_ch: Arguement of the function dl_rm_func.
 * @dl_surd: Arguement of the function dl_rm_func.
 * @__dgt: Arguement of the function dl_rm_func.
 * @_input_: Arguement of the function dl_rm_func.
 *
 * Return: Returns 2 or 0.
 */
int dl_rm_func(char **dl_string_ch,
		DL_node_list_t  *dl_surd, int __dgt, char **_input_)
{
	int trWorth = 0;

	if (dl_string_ch[1] != NULL)
		trWorth = convertToInt(dl_string_ch[1]);

	if (trWorth == -1)
	{
		uwn(dl_string_ch[1], __dgt, dl_surd);
		rm_dl_(dl_string_ch);
		return (2);
	}
	rm_dl_(dl_string_ch);
	RmLL(dl_surd);
	if (_input_ != NULL)
		rm_dl_(_input_);
	exit(trWorth);
}
