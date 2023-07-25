#include "DL_shell.h"

/**
 * Lsurd_node_dl - custom function.
 * @dl_surd: argument of the function.
 *
 * Return: Return tp.
 */



DL_node_list_t *Lsurd_node_dl(char **dl_surd)
{
	DL_node_list_t *tp;
	int dl_var;

	dl_var = 0;
	tp = NULL;
	while (dl_surd[dl_var] != NULL)
	{
		sm_vr_b(&tp, dl_surd[dl_var]);
		dl_var++;
	}
	return (tp);
}




/**
 * surd_and_2 - custom function.
 * @dl_string_ch: argument of the function.
 * @dl_surd: argument of the function.
 *
 * Return: Returns 0.
 */



int surd_and_2(char **dl_string_ch, DL_node_list_t *dl_surd)
{
	rm_dl_(dl_string_ch);
	dl_t(dl_surd);
	return (0);
}
