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
 * @size: size of the array to search
 * @value: value inside the array to search
 *
 * Return: The first index of where the value is located else if not found -1
 */
int binary_search_exp(int *array, size_t size, int value)
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
	size_t p1 = 1, p2 = 1;
	char found = false;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]", array[0]);
		return (0);
	}

	while (!found)
	{
		printf("Value checked array[%lu] = [%d]", p1, p2);
		if (array[p1] == value)
	}


}
