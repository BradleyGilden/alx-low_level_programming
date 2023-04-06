#include "main.h"

/**
 * binary_to_uint - take vector of binary input represented as a string..
 *                  and convert it into an unsigned int.
 * @b: binary vector represented as string input.
 *
 * Return: unsigned int representation of binary input
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, to_bin = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	i = 0;
	while (b[i])
	{
		to_bin = (b[i] - '0');
		sum = 2 * sum + to_bin;
		i++;
	}

	return (sum);
}
