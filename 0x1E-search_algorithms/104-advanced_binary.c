#include "search_algos.h"

/**
 * print_array_advanced - prints array for advanced binary algorithm
 * @array: pointer to array to search
 * @start: where to start printing array
 * @end: where to stop printing array
 */
void print_array_advanced(int *array, size_t start, size_t end)
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
 * binary_recursion - assists aglorithm in recursive iteration
 * @array: pointer to array to search
 * @start: index to start searching
 * @end: index to stop searching
 * @value: value inside the array to search
 *
 * Return: The first index of where the value is located else if not found -1
 */
int binary_recursion(int *array, size_t start, size_t end, int value)
{
	size_t mid = (start + end) / 2;

	if (start >= end)
		return (mid);

	print_array_advanced(array, start, end);

	if (array[mid] == value)
		if (mid - 1 >= start && array[mid - 1] == value)
			return (binary_recursion(array, start, mid, value));
		else
			return (mid);
	else if (array[mid] > value)
		return (binary_recursion(array, start, mid - 1, value));
	else
		return (binary_recursion(array, mid + 1, end, value));
}

/**
 * advanced_binary - implements a recursive binary search
 * @array: pointer to array to search
 * @size: size of the array to search
 * @value: value inside the array to search
 *
 * Return: The first index of where the value is located else if not found -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;
	int rindex;

	if (array == NULL)
		return (-1);

	rindex = binary_recursion(array, start, end, value);
	if (array[rindex] == value)
		return (rindex);
	else
		return (-1);
}
