#include "DL_shell.h"

/**
 * smd_ID - initialised custom function of the type
 * @tp: first argument of the custom function.
 * @jd_id: second argument of the custom function.
 *
 * Return: returns 1, 0 and -1 on certain conditions.
 */



int smd_ID(DL_node_list_t **tp, int jd_id)
{

	DL_node_list_t *_dgttp;
	DL_node_list_t *jm_var;


	int itr_num = 0;

	if (*tp == NULL)
		return (-1);
	if (jd_id == 0)
	{
		jm_var = (*tp)->next_arg;
		free((*tp)->v_struct_arg);
		free(*tp);
		*tp = jm_var;
		return (1);
	}
	itr_num = 1;
	_dgttp = *tp;
	while (itr_num < jd_id)
	{
		if (_dgttp == NULL)
			return (-1);
		_dgttp = _dgttp->next_arg;
		itr_num++;
	}
	jm_var = _dgttp->next_arg;
	_dgttp->next_arg = jm_var->next_arg;
	free(jm_var->v_struct_arg);
	free(jm_var);
	return (1);
}
