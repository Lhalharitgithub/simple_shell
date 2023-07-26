#include "shell.h"

/**
 * func_string_segment - Initialised custom function.
 * @dl_string_ch: argument of the custom function.
 * @nth_argument: argument of the custom function.
 *
 * Return: returns pointer named nv_p.
 */


char **func_string_segment(char *dl_string_ch, char *nth_argument)
{


	char **nv_p = NULL, it_thg;
	int hd_mag = 0, var_varg = 0, int_pr_var = 0,
	    dl_var = 0, size_ln = 0, int_df_var = 0;



	it_thg = nth_argument[0];
	hd_mag = bns_len(dl_string_ch, it_thg);
	nv_p = malloc(sizeof(char *) * (hd_mag + 2));
	if (nv_p == NULL)
		return (NULL);
	while (dl_string_ch[int_df_var] != '\0')
		int_df_var++;
	while (int_pr_var < int_df_var)
	{
		size_ln = custom_string_len_func(dl_string_ch, int_pr_var, it_thg);
		nv_p[var_varg] = malloc(sizeof(char) * (size_ln + 1));
		if (nv_p[var_varg] == NULL)
			return (NULL);
		dl_var = 0;
		while ((dl_string_ch[int_pr_var] != it_thg) &&
		       (dl_string_ch[int_pr_var] != '\0'))
		{
			nv_p[var_varg][dl_var] = dl_string_ch[int_pr_var];
			dl_var++;
			int_pr_var++;
		}
		nv_p[var_varg][dl_var] = '\0';
		var_varg++;
		int_pr_var++;
	}
	nv_p[var_varg] = NULL;
	return (nv_p);
}
