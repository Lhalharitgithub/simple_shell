#include "shell.h"
/**
 * copy_slt - custom function named copy_slt.
 * @fd_arg: argument of the function copy_slt.
 *
 * Returns: Returns nothing.
 */



void copy_slt(int fd_arg)
{
	(void)fd_arg;
	write(STDOUT_FILENO, "\n ", 3);
}
