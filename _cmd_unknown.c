#include "shell.h"

/**
 * _cmd_unknown - custom function named _cmd_unknown.
 * @dl_string_ch: argument of the function _cmd_unknown.
 * @_xnv: argument of the function _cmd_unknown.
 * @dl_surd: argument of the function _cmd_unknown.
 *
 * Return: Returns nothing.
 */
void _cmd_unknown(char *dl_string_ch, int _xnv, DL_node_list_t *dl_surd)
{
	int itr_num;
	char *ch_DLsh;
	char *__dgt;

	itr_num = 0;

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
	itr_num = 0;
	while (dl_string_ch[itr_num] != '\0')
		itr_num++;
	write(STDOUT_FILENO, dl_string_ch, itr_num);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "not found\n", 10);
}
