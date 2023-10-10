#include "search_algos.h"

/**
 * print_array_exp - prints an array in a more legible format
 * @array: pointer to array to search
 * @start: where to start printing array
 * @end: where to stop printing array
 */
void print_array_exp(int *array, size_t start, size_t end)
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
 * binary_search_exp - Searches specified element of {value} in a sorted array
 * @array: pointer to array to search
 * @start: index to start searching
 * @end: index to stop searching
 * @value: value inside the array to search
 *
 * Return: The first index of where the value is located else if not found -1
 */
int binary_search_exp(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		print_array_exp(array, start, end);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - implements exponential search algorithm
 * @array: pointer to array to search
 * @size: size of the array to search
 * @value: value inside the array to search
 *
 * Return: The first index of where the value is located else if not found -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t p1 = 1, p2 = 2;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	while (true)
	{
		printf("Value checked array[%lu] = [%d]\n", p1, array[p1]);
		if (array[p1] == value)
			return (p1);
		else if (array[p1] < value && (p2 >= size || value <= array[p2]))
		{
			printf("Value found between indexes [%lu] and [%lu]", p1,
				   MIN(p2, size - 1));
			return (binary_search_exp(array, p1, MIN(p2, size - 1), value));
		}
		p1 += p1;
		p2 += p2;
	}
	return (-1);
}
