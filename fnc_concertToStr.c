#include "DL_shell.h"

/**
 * dlConvert_intToStr - initialised custom function named dlConvert_intToStr.
 * @__dgt_num: argument of the custom function.
 *
 * Return: Returns the variable wyg of type char.
 *
 */


char *dlConvert_intToStr(int __dgt_num)
{
	int dg_nm;
	int dg_tnt;
	int dl_var;
	int dl_var_2;
	int wyd;
	char *wyg;

	dl_var = 0;
	dl_var_2 = 0;
	dg_nm = __dgt_num;
	dg_tnt = 1;

	if (__dgt_num < 0)
		dl_var_2 = 1;
	wyg = malloc(sizeof(char) * (dlNL(dg_nm) + 2 + dl_var_2));
	if (wyg == NULL)
		return (NULL);
	if (__dgt_num < 0)
	{
		wyg[dl_var] = '-';
		dl_var++;
	}
	for (wyd = 0; dg_nm > 9 || dg_nm < -9; wyd++)
	{
		dg_nm /= 10;
		dg_tnt *= 10;
	}
	for (dg_nm = __dgt_num; wyd >= 0; wyd--)
	{
		if (dg_nm < 0)
		{
			wyg[dl_var] = (dg_nm / dg_tnt) * -1 + '0';
			dl_var++;
		}
		else
		{
			wyg[dl_var] = (dg_nm / dg_tnt) + '0';
			dl_var++;
		}
		dg_nm %= dg_tnt;
		dg_tnt /= 10;
	}
	wyg[dl_var] = '\0';
	return (wyg);
}
