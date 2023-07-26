#include "DL_shell.h"

/**
 * func_sub_string - initialised custom function.
 * @dl_string_ch: argument of the function.
 * @nth_argument: argumetn of the function.
 *
 * Return: returns variable of type char.
 */

char **func_sub_string(char *dl_string_ch, char *nth_argument)
{
	int hd_mag = 0, var_varg = 0, int_pr_var = 0, dl_var = 0, size_ln = 0, int_df_var = 0, dl_var_2 = 0;

	char **nv_p = NULL, it_thg;

	it_thg = nth_argument[0];
	dl_string_ch = argn_kml(dl_string_ch, it_thg);
	hd_mag = _struct_lenght(dl_string_ch, it_thg);
	nv_p = malloc(sizeof(char *) * (hd_mag + 2));
	if (nv_p == NULL)
		return (NULL);
	while (dl_string_ch[int_df_var] != '\0')
		int_df_var++;
	while (int_pr_var < int_df_var)
	{
		if (dl_string_ch[int_pr_var] != it_thg)
		{
			size_ln = custom_string_len_func(dl_string_ch, int_pr_var, it_thg);
			nv_p[var_varg] = malloc(sizeof(char) * (size_ln + 1));
			if (nv_p[var_varg] == NULL)
				return (NULL);
			dl_var = 0;
			while ((dl_string_ch[int_pr_var] != it_thg) && (dl_string_ch[int_pr_var] != '\0'))
			{
				nv_p[var_varg][dl_var] = dl_string_ch[int_pr_var];
				dl_var++;
				int_pr_var++;
			}
			nv_p[var_varg][dl_var] = '\0';
			dl_var_2++;
		}
		if (int_pr_var < int_df_var && (dl_string_ch[int_pr_var + 1] != it_thg && dl_string_ch[int_pr_var + 1] != '\0'))
			var_varg++;
		int_pr_var++;
	}
	var_varg++;
	nv_p[var_varg] = NULL;
	return (nv_p);
}
