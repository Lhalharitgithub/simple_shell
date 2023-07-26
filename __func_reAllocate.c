#include "shell.h"

/**
 * dl_resize_memory - Custom function named dl_resize_memory.
 * @dl_memoryBlock: argument of the function dl_resize_memory/
 * @_prior_capacity: argument if the function dl_resize_memory.
 * @_revised_capacity: argument of the functin dl_resize_memory.
 *
 * Return: pointer to reallocated memory
 */

void *dl_resize_memory(void *dl_memoryBlock, unsigned int _prior_capacity, unsigned int _revised_capacity)
{
	void *var_varg;
	unsigned int dl_var;

	if (_revised_capacity == 0 && dl_memoryBlock != NULL)
	{
		free(dl_memoryBlock);
		return (NULL);
	}
	if (_revised_capacity == _prior_capacity)
		return (dl_memoryBlock);
	if (dl_memoryBlock == NULL)
	{
		var_varg = malloc(_revised_capacity);
		if (var_varg == NULL)
			return (NULL);
		else
			return (var_varg);
	}
	var_varg = malloc(_revised_capacity);
	if (var_varg == NULL)
		return (NULL);

	for (dl_var = 0; dl_var < _prior_capacity && dl_var < _revised_capacity;
			dl_var++)
		*((char *)var_varg + dl_var) = *((char *)dl_memoryBlock + dl_var);
	free(dl_memoryBlock);
	return (var_varg);
}
