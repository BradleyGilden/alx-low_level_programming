#include "main.h"

/**
 * clear_bit - a function that clears bit to 0 at given index.
 * @index: index of bit to clear.
 * @n: input unsigned long integer.
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_mask = ~0x00;
	unsigned long int index_mask = 0x01;
	unsigned int bit_len = sizeof(unsigned long int) * 8 - 1;

	if (index > bit_len)
		return (-1);

	index_mask <<= index;
	set_mask ^= index_mask;
	*n &= set_mask;

	return (1);
}
