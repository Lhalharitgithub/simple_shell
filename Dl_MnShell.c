#include "DL_shell.h"

/**
 * main - Main shell function to create custom shell.
 * @__DL_arg_C: Arguement to the main function.
 * @__DL_arg_V: Argument to the main function.
 * @dl_surd: Argument to the main function.
 * Return: Returns 0.
 */



int main(int __DL_arg_C, char **__DL_arg_V, char **dl_surd)
{
	(void)__DL_arg_C;
	(void)__DL_arg_V;



	DL__simple_shell_prompt(dl_surd);



	return (0);
}
