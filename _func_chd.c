#include "DL_shell.h"

/**
 * _func_chd - custom function named _func_chd.
 * @dl_surd: argument of the function _func_chd.
 * @__now_func: argument of the function _func_chd.
 *
 * Return: returns nothing.
 */



void _func_chd(DL_node_list_t *dl_surd, char *__now_func)
{
	char *dl_dir_hm;

	dl_dir_hm = NULL;

	dl_dir_hm = dl_surd_alloc("HOME", dl_surd);
	surd_ang(&dl_surd, "OLDPWD", __now_func);
	free(__now_func);
	if (access(dl_dir_hm, F_OK) == 0)
		chdir(dl_dir_hm);
	__now_func = NULL;
	__now_func = getcwd(__now_func, 0);
	surd_ang(&dl_surd, "PWD", __now_func);
	free(__now_func);
	free(dl_dir_hm);
}
