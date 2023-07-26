#include "shell.h"

/**
 * dl_t - custom funtion created.
 * @dl_lp: argumet of the custom function.
 *
 * Return: returns integer variable named itr_num.
 *
 */
size_t dl_t(DL_node_list_t *dl_lp)
{
	DL_node_list_t *dl_ghf;
	int itr_num;
	int oiu;

	oiu = 0;
	itr_num = 0;
	dl_ghf = dl_lp;

	if (dl_lp == NULL)
	{
		return (0);
	}
	while (dl_ghf != NULL)
	{
		if (dl_ghf->v_struct_arg == NULL)
		{
			write(STDOUT_FILENO, "(nil)", 5);
			write(STDOUT_FILENO, "\n", 1);
		}
		else
		{
			oiu = 0;
			while ((dl_ghf->v_struct_arg)[oiu] != '\0')
				oiu++;
			write(STDOUT_FILENO, dl_ghf->v_struct_arg, oiu);
			write(STDOUT_FILENO, "\n", 1);
		}

		dl_ghf = dl_ghf->next_arg;
		itr_num++;
	}
	return (itr_num);
}
