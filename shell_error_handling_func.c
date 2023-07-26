#include "DL_shell.h"

/**
 * uwn - Initialised custom function
 * @dl_string_ch: first argument of the custom function.
 * @_xnv: second argument of the custom function.
 * @dl_surd: third argument of the custom function.
 *
 * Return: returns nothing.
 */


void uwn(char *dl_string_ch, int _xnv, DL_node_list_t *dl_surd)
{
	int itr_num = 0;
	char *ch_DLsh = NULL, *__dgt = NULL;

	ch_DLsh = dl_surd_alloc("_", dl_surd);
	while (ch_DLsh[itr_num] != '\0')
		itr_num++;
	write(STDOUT_FILENO, ch_DLsh, itr_num);
	free(ch_DLsh);
	write(STDOUT_FILENO, ": ", 2);
	__dgt = dlConvert_intToStr(_xnv);
	itr_num = 0;
	while (__dgt[itr_num] != '\0')
		itr_num++;
	write(STDOUT_FILENO, __dgt, itr_num);
	free(__dgt);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "exit: unwanted arg: ", 20);
	itr_num = 0;
	while (dl_string_ch[itr_num] != '\0')
		itr_num++;
	write(STDOUT_FILENO, dl_string_ch, itr_num);
	write(STDOUT_FILENO, "\n", 1);
}
