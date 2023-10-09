#include "search_algos.h"

/**
 * print_array - prints an array in a more legible format
 * @array: pointer to array to search
 * @start: where to start printing array
 * @end: where to stop printing array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	if (array == NULL)
		return;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - Searches specified element of {value} in a sorted array
 * @array: pointer to array to search
 * @size: size of the array to search
 * @value: value inside the array to search
 *
 * Return: The first index of where the value is located else if not found -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, start = 0, end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		print_array(array, start, end);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}
