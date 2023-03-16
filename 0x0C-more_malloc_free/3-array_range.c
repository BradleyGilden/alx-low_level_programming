#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers in a given range
 * @min: minimum value in integer array
 * @max: maximum value in integer array
 *
 * Return: pointer to range of integers
 *		   NULL if min > max
 *		   NULL if malloc fails to allocate memory
 */

int *array_range(int min, int max)
{
	int *range, i;

	if (min >= max)
		return (NULL);

	range = malloc(sizeof(*range) * (max - min + 1));
	if (range == NULL)
		return (NULL);

	for (i = 0; range[i] <= max; i++)
	{
		range[i] = min++;
	}

	return (range);
}
