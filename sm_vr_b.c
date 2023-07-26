#include "DL_shell.h"

/**
 * sm_vr_b - custom function created.
 * @tp: first argument of the custom function.
 * @dl_string_ch: second argument of the custom function.
 *
 * Return: returns pointer of type struct list node.
 */



DL_node_list_t *sm_vr_b(DL_node_list_t **tp, char *dl_string_ch)
{
	DL_node_list_t *jd_pnt_t;
	DL_node_list_t *jm_var;

	if (tp == NULL || dl_string_ch == NULL)
		return (NULL);
	jd_pnt_t = malloc(sizeof(DL_node_list_t));
	if (jd_pnt_t == NULL)
		return (NULL);
	jd_pnt_t->v_struct_arg = func_duplicate_string(dl_string_ch);
	jd_pnt_t->next_arg = NULL;
	jm_var = *tp;
	if (jm_var != NULL)
	{
		while (jm_var->next_arg != NULL)
		{
			jm_var = jm_var->next_arg;
		}
		jm_var->next_arg = jd_pnt_t;
	}
	else
	{
		*tp = jd_pnt_t;
	}
	return (*tp);
}
