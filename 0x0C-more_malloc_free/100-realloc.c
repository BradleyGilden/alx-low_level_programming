#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 *		  if new_size > old_size do not initialise added memory
 * @ptr: pointer to previously allocated memory
 * @old_size: old number of bytes allocated to ptr
 * @new_size: new number of bytes reallocated to ptr
 *
 * Return: ptr if old_size == new_size
 *		   NULL if ptr != NULL and new_size == 0
 *		   pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem, *nptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_mem = malloc(new_size + old_size);
		if (new_mem == NULL)
			return (NULL);
		return (new_mem);
	}

	nptr = ptr;
	new_mem = malloc(sizeof(*new_mem) * new_size);

	if (new_mem == NULL)
	{
		free(new_mem);
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
		new_mem[i] = nptr[i];

	free(ptr);
	return (new_mem);
}
