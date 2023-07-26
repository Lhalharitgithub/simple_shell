#ifndef SHELL_H
#define SHELL_H




#include <sys/stat.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>
#include <sys/wait.h>






/**
 * struct node_list - A typedef struct
 * struct DL_node_list_t - linked list of typedef struct.
 * @v_struct_arg: Argument of struct.
 * @next_arg: Argument of struct.
 *
 * Return: Returns nothing.
 */

typedef struct node_list
{
		char *v_struct_arg;
		struct node_list *next_arg;

} DL_node_list_t;





char *_string_concatenated_funct(char *_allocation, char *_input_origin);

int surd_ang(DL_node_list_t **dl_surd, char *annotation, char *path_dircect);

void _func_chd(DL_node_list_t *dl_surd, char *__now_func);

int chd_wkec(DL_node_list_t *dl_surd, char *__now_func,
		char *path_dircect, char *dl_string_ch, int __dgt);

int dl__change_directory_func(char **dl_string_ch,
		DL_node_list_t *dl_surd, int __dgt);


size_t DL_get_line_custom_function(char **dl_string_ch);


int convertToInt(char *__var_string_arg);


int dl_rm_func(char **dl_string_ch, DL_node_list_t  *dl_surd,
		int __dgt, char **_input_);



void *dl_resize_memory(void *dl_memoryBlock,
		unsigned int _prior_capacity, unsigned int _revised_capacity);



int _fun_merge_strings(char *var_string_arg_fst, char *var_string_arg_snd);


char *func_duplicate_string(char *dl_string_ch);



char *func_diffChar(char *dl_string_ch, DL_node_list_t *dl_surd);


char *dl_concatenated_string_func(char *_allocation, char *_input_origin);


DL_node_list_t *Lsurd_node_dl(char **dl_surd);
int surd_and_2(char **dl_string_ch, DL_node_list_t *dl_surd);


int dl_f_surd(DL_node_list_t *dl_surd, char *dl_string_ch);
int rm_mod_LL(DL_node_list_t **dl_surd, char **dl_string_ch);
int mod_LL(DL_node_list_t **dl_surd, char **dl_string_ch);




void copy_slt(int fd_arg);
int stack_const(char **g_dp, DL_node_list_t *dl_surd,
		int __dgt, char **_input_);
char *discard_interval_func(char *dl_string_ch);
void cl_d_(int dl_var, char *_input_, DL_node_list_t *dl_surd);
int DL__simple_shell_prompt(char **dl_surd);



int custom_string_len_func(char *dl_string_ch,
		int current_location, char nth_argument);
int _struct_lenght(char *dl_string_ch, char nth_argument);
char *argn_kml(char *dl_string_ch, char nth_argument);
char **func_sub_string(char *dl_string_ch, char *nth_argument);





int dlNL(int fd_arg);
char *dlConvert_intToStr(int __dgt_num);
void nth_ex_arg(char **dl_string_ch, DL_node_list_t *dl_surd);
int func_dl_execve(char **__var_string_arg,
		DL_node_list_t *dl_surd, int __dgt);



char *ag_func(char *dl_string_ch);
void dl_inopt(DL_node_list_t *dl_surd);



int bns_len(char *dl_string_ch, char nth_argument);
char **func_string_segment(char *dl_string_ch, char *nth_argument);



char *func_to_copy_string(char *_allocation, char *_input_origin);



size_t dl_t(DL_node_list_t *dl_lp);
DL_node_list_t *sm_vr_b(DL_node_list_t **tp, char *dl_string_ch);
int smd_ID(DL_node_list_t **tp, int jd_id);
void RmLL(DL_node_list_t *sh_cs_);



void rm_dl_(char **dl_string_ch);



void _cmd_unknown(char *dl_string_ch, int _xnv, DL_node_list_t *dl_surd);
void imp_chg_dir(char *dl_string_ch, int _xnv, DL_node_list_t *dl_surd);
void uwn(char *dl_string_ch, int _xnv, DL_node_list_t *dl_surd);




char *ntp_string_dup(char *dl_string_ch, int sm_count);
char *dl_surd_alloc(char *dl_string_ch, DL_node_list_t *dl_surd);


#endif
