#include "DL_shell.h"

/**
 * surd_ang - created custom function.
 * @dl_surd: first argument of the custom function.
 * @annotation: second argument of the custom function of type char.
 * @path_dircect: third argument of the custom function of type char.
 *
 * Return: the funtion returns 0.
 */
int surd_ang(DL_node_list_t **dl_surd, char *annotation, char *path_dircect)
{


	int iden_dx;
	char *dis_sh;
	int dl_var_int;
	DL_node_list_t *_inplace_dr;

	iden_dx = 0;
	dl_var_int = 0;

	dis_sh = func_duplicate_string(annotation);
	dis_sh = dl_concatenated_string_func(dis_sh, "=");
	dis_sh = dl_concatenated_string_func(dis_sh, path_dircect);
	iden_dx = dl_f_surd(*dl_surd, annotation);
	_inplace_dr = *dl_surd;
	while (dl_var_int < iden_dx)
	{
		_inplace_dr = _inplace_dr->next_arg;
		dl_var_int++;
	}
	free(_inplace_dr->v_struct_arg);
	_inplace_dr->v_struct_arg = func_duplicate_string(dis_sh);
	free(dis_sh);
	return (0);
}
