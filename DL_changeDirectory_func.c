#include "shell.h"

/**
 * cd - Function to change shell directory
 * @dl_string_ch: Argument of the function cd.
 * @dl_surd: Argument of the function cd.
 * @__dgt: Argument of the function cd.
 *
 * Return: Returns 2 or 0.
 */



int cd(char **dl_string_ch,
		DL_node_list_t *dl_surd, int __dgt)
{
	char *__now_func = NULL, *path_dircect = NULL;
	int rm_pos = 0;

	__now_func = getcwd(__now_func, 0);
	if (dl_string_ch[1] != NULL)
	{
		if (dl_string_ch[1][0] == '~')
		{
			path_dircect = dl_surd_alloc("HOME", dl_surd);
			path_dircect = _string_concatenated_funct(path_dircect, dl_string_ch[1]);
		}
		else if (dl_string_ch[1][0] == '-')
		{
			if (dl_string_ch[1][1] == '\0')
				path_dircect = dl_surd_alloc("OLDPWD", dl_surd);
		}
		else
		{
			if (dl_string_ch[1][0] != '/')
			{
				path_dircect = getcwd(path_dircect, 0);
				path_dircect = dl_concatenated_string_func(path_dircect, "/");
				path_dircect = dl_concatenated_string_func(path_dircect, dl_string_ch[1]);
			}
			else
				path_dircect = func_duplicate_string(dl_string_ch[1]);
		}
		rm_pos = chd_wkec(dl_surd, __now_func, path_dircect, dl_string_ch[1], __dgt);
		free(path_dircect);
	}
	else
		_func_chd(dl_surd, __now_func);
	rm_dl_(dl_string_ch);
	return (rm_pos);
}
