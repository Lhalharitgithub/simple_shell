#include "DL_shell.h"

/**
 * RmLL - Initialised custom function.
 * @sh_cs_: Argument of custom function of type struct.
 *
 * Return: Returns nothing.
 */

void RmLL(DL_node_list_t *sh_cs_)
{
	DL_node_list_t *jm_var;
	while (sh_cs_ != NULL)
	{
		jm_var = sh_cs_;
		sh_cs_ = sh_cs_->next_arg;
		free(jm_var->v_struct_arg);
		free(jm_var);
	}
}
