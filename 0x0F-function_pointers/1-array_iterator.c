#include "function_pointers.h"

/**
 * array_iterator - activate specific functions on every element of array
 * @array: input array
 * @size: size of array
 * @action: function implemented on function elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
