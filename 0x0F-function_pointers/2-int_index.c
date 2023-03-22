#include "function_pointers.h"

/**
 * int_index - activate specific functions on every element of array
 * @array: input array
 * @size: size of array
 * @cmp: pointer to function that compares values
 *
 * Return: returns index for the first element which cmp does not..
 *		   return 0
 *		   if no element matches return -1;
 *		   if size <= 0 return -1;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);

}
