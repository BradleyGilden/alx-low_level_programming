#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory using malloc, initializes elements to 0
 * @nmemb: number of elements of any data type
 * @size: size of data type being allocated
 *
 * Return: NULL if size == 0 || nmemb = 0
 *		   NULL if malloc fails to allocate memory
 *		   returning a pointer to the memory allocated on heap
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
