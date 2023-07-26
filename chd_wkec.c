#include "shell.h"

/**
 * chd_wkec - stom function named chd_wkec.
 * @dl_surd: argument of he function chd_wkec.
 * @__now_func: argument of the function chd_wkec.
 * @path_dircect: argument of the function chd_wkec.
 * @dl_string_ch: argument of the function chd_wkec.
 * @__dgt: argument of the function chd_wkec
 *
 *
 * Return: Returns integer variable named dl_var.
 */





int chd_wkec(DL_node_list_t *dl_surd,
		char *__now_func, char *path_dircect,
		char *dl_string_ch, int __dgt)
{
	int dl_var;

	dl_var = 0;
	if (access(path_dircect, F_OK) == 0)
	{
		surd_ang(&dl_surd, "OLDPWD", __now_func);
		free(__now_func);
		chdir(path_dircect);
		__now_func = NULL;
		__now_func = getcwd(__now_func, 0);
		surd_ang(&dl_surd, "PWD", __now_func);
		free(__now_func);
	}
	else
	{
		imp_chg_dir(dl_string_ch, __dgt, dl_surd);
		free(__now_func);
		dl_var = 2;
	}
	return (dl_var);
}
