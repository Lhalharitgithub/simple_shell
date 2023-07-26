#include "shell.h"

/**
 * func_diffChar - initialised custom function.
 * @dl_string_ch: argument of the function.
 * @dl_surd: argument of the function.
 *
 * Return: Returns integer variable named dl_var.
 */



char *func_diffChar(char *dl_string_ch, DL_node_list_t *dl_surd)
{
	char *fd;
	char *dis_sh = NULL;
	char **nv_p;
	int dl_var;

	dl_var = 0;


	fd = dl_surd_alloc("PATH", dl_surd);
	nv_p = func_string_segment(fd, ":");
	free(fd);
	dl_var = 0;
	while (nv_p[dl_var] != NULL)
	{
		if (nv_p[dl_var][0] == '\0')
			dis_sh = getcwd(dis_sh, 0);
		else
			dis_sh = func_duplicate_string(nv_p[dl_var]);
		dis_sh = dl_concatenated_string_func(dis_sh, "/");
		dis_sh = dl_concatenated_string_func(dis_sh, dl_string_ch);
		if (access(dis_sh, F_OK) == 0)
		{
			rm_dl_(nv_p);
			return (dis_sh);
		}
		free(dis_sh);
		dl_var++;
	}
	rm_dl_(nv_p);
	return (dl_string_ch);
}
