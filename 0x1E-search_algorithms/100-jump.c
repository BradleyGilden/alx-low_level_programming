#include "search_algos.h"

/**
 * jump_search - linear search that uses sqrt(n) jumps
 * @array: pointer to array to search
 * @size: size of the array to search
 * @value: value inside the array to search
 *
 * Return: The first index of where the value is located else if not found -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jumps = (size_t)sqrt(size);
	size_t i, p1 = 0, p2 = 0 + jumps;
	char found = false;

	if (array == NULL)
		return (-1);

	while (!found)
	{
		printf("Value checked array[%lu] = [%d]\n", p1, array[p1]);
		if (array[p1] == value)
			return (p1);
		else if (array[p1] < value && (p2 >= size || value < array[p2]))
		{
			found = true;
			printf("Value found between indexes [%lu] and [%lu]\n", p1, p2);
			for (i = p1; i <= p2 && i < size; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		p1 += jumps;
		p2 += jumps;
	}
	return (-1);
}
