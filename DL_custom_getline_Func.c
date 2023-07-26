#include "shell.h"

/**
 * get_line - This function keeps the entered
 * command from imput to allocated memory of cache buffer storage.
 * @dl_string_ch: Argument of allocated memory of cache buffer storage.
 *
 * Return: The function returns the variable dl_length_var.
 */
size_t get_line(char **dl_string_ch)
{
	ssize_t dl_var = 0;
	ssize_t	dl_var_2 = 0;
	ssize_t dl_var_3 = 0;
	ssize_t _arg_data = 0;
	ssize_t dl_length_var = 0;
	char __temporal_cacheBUFFER[1024];

	while (dl_var_3 == 0 && (dl_var = read(STDIN_FILENO,
					__temporal_cacheBUFFER, 1024 - 1)))
	{
		if (dl_var == -1)
			return (-1);

		__temporal_cacheBUFFER[dl_var] = '\0';

		_arg_data = 0;
		while (__temporal_cacheBUFFER[_arg_data] != '\0')
		{
			if (__temporal_cacheBUFFER[_arg_data] == '\n')
				dl_var_3 = 1;
			_arg_data++;
		}

		if (dl_var_2 == 0)
		{
			dl_var++;
			*dl_string_ch = malloc(sizeof(char) * dl_var);
			*dl_string_ch = func_to_copy_string(*dl_string_ch, __temporal_cacheBUFFER);
			dl_length_var = dl_var;
			dl_var_2 = 1;
		}
		else
		{
			dl_length_var += dl_var;
			*dl_string_ch = dl_concatenated_string_func(*dl_string_ch,
					__temporal_cacheBUFFER);
		}
	}
	return (dl_length_var);
}
