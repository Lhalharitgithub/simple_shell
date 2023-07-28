

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
