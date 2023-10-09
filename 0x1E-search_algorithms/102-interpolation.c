#include "search_algos.h"

/**
 * interpolation_search - implements the interpolation search algorithm
 * @array: pointer to array to search
 * @size: size of the array to search
 * @value: value inside the array to search
 *
 * Return: The first index of where the value is located else if not found -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pole;

	while (low <= high)
	{
		pole = INTERPOLATE(low, high, array, value);
		if (pole >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pole);
			break;
		}
		else
			printf("Value checked array[%lu] = [%d]\n", pole, array[pole]);

		if (array[pole] == value)
			return (pole);
		else if (array[pole] > value)
			high = pole - 1;
		else
			low = pole + 1;
	}
	return (-1);
}
