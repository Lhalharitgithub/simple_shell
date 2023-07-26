#include "shell.h"

/**
 * dl_surd_alloc - Initialised custom function.
 * @dl_string_ch: first argument of the custom function.
 * @dl_surd: second argument of the custom function.
 *
 * Return: returns variable duplicate.
 */



char *dl_surd_alloc(char *dl_string_ch, DL_node_list_t *dl_surd)
{


	int dl_var_int;
	int sm_count;

	dl_var_int = 0;
	sm_count = 0;

	while (dl_surd != NULL)
	{
		dl_var_int = 0;
		while ((dl_surd->v_struct_arg)[dl_var_int] == dl_string_ch[dl_var_int])
			dl_var_int++;
		if (dl_string_ch[dl_var_int] == '\0' &&
				(dl_surd->v_struct_arg)[dl_var_int] == '=')
			break;
		dl_surd = dl_surd->next_arg;
	}
	while (dl_string_ch[sm_count] != '\0')
		sm_count++;
	sm_count++;
	return (ntp_string_dup(dl_surd->v_struct_arg, sm_count));
}
