#include "shell.h"

/**
 * dlNL - custom function.
 * @fd_arg: argumetn of function.
 * Return: returns integer itr_num
 */



int dlNL(int fd_arg)
{
	int itr_num = 0;
	int __dgt = fd_arg;

	while (__dgt > 9 || __dgt < -9)
	{
		__dgt /= 10;
		itr_num++;
	}
	return (itr_num);
}
