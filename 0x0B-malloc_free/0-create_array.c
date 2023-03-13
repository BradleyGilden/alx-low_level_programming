#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars ...
 *				  initialized with a specific char
 * @size: size of array to be created
 * @c: char to be initialized in array
 *
 * Return: NULL if size = 0
 *		   a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = (char *)malloc(size * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
