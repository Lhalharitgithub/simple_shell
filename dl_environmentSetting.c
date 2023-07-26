#include "shell.h"

/**
 * dl_f_surd - initialised custom function.
 * @dl_surd: argument of custom function.
 * @dl_string_ch: argument of cuatom function.
 * Return: returns integer.
 */



int dl_f_surd(DL_node_list_t *dl_surd, char *dl_string_ch)
{
	int it_var;
	int als_var;

	it_var = 0;
	als_var = 0;

	while (dl_surd != NULL)
	{
		it_var = 0;
		while ((dl_surd->v_struct_arg)[it_var] == dl_string_ch[it_var])
			it_var++;
		if (dl_string_ch[it_var] == '\0')
			break;
		dl_surd = dl_surd->next_arg;
		als_var++;
	}
	if (dl_surd == NULL)
		return (-1);
	return (als_var);
}

/**
 * rm_mod_LL - initialised custom function.
 * @dl_surd: argument of function.
 * @dl_string_ch: argument of function.
 *
 * Return: returns 0.
 */



int rm_mod_LL(DL_node_list_t **dl_surd, char **dl_string_ch)
{
	int als_var;
	int it_var;

	it_var = 0;
	als_var = 0;

	if (dl_string_ch[1] == NULL)
	{
		write(STDOUT_FILENO, "pass argument(s) to written command\n", 37);
		rm_dl_(dl_string_ch);
		return (-1);
	}
	als_var = dl_f_surd(*dl_surd, dl_string_ch[1]);
	rm_dl_(dl_string_ch);
	if (als_var == -1)
	{
		write(STDOUT_FILENO, "unknown arg\n", 13);
		return (-1);
	}
	it_var = smd_ID(dl_surd, als_var);
	if (it_var == -1)
	{
		write(STDOUT_FILENO, "unknown arg\n", 13);
		return (-1);
	}
	return (0);
}



/**
 * mod_LL - initialised custom function named.
 * @dl_surd: argument of the function.
 * @dl_string_ch: argument of the function.
 *
 * Return: returns 0.
 */




int mod_LL(DL_node_list_t **dl_surd, char **dl_string_ch)
{
	int als_var = 0, it_var = 0;
	char *pnt;
	DL_node_list_t *variable_t;

	if (dl_string_ch[1] == NULL || dl_string_ch[2] == NULL)
	{
		write(STDOUT_FILENO, "pass argument(s) to written command\n", 37);
		rm_dl_(dl_string_ch);
		return (-1);
	}
	pnt = func_duplicate_string(dl_string_ch[1]);
	pnt = dl_concatenated_string_func(pnt, "=");
	pnt = dl_concatenated_string_func(pnt, dl_string_ch[2]);
	als_var = dl_f_surd(*dl_surd, dl_string_ch[1]);
	if (als_var == -1)
	{
		sm_vr_b(dl_surd, pnt);
	}
	else
	{
		variable_t = *dl_surd;
		while (it_var < als_var)
		{
			variable_t = variable_t->next_arg;
			it_var++;
		}
		free(variable_t->v_struct_arg);
		variable_t->v_struct_arg = func_duplicate_string(pnt);
	}
	free(pnt);
	rm_dl_(dl_string_ch);
	return (0);
}
