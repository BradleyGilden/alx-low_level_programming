#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 *					if malloc fails, it causes normal process
 *					termination with an exit code of 98
 * @b: the amount of bytes allocated in heap
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
		exit(98);

	return (alloc);
}
