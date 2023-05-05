#include "main.h"

/**
 * set_bit - a function that sets bit to 1 at given index.
 * @index: index of bit to set.
 * @n: input unsigned long integer.
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_mask = 0x01;
	unsigned int bit_len = sizeof(unsigned long int) * 8 - 1;

	if (index > bit_len)
		return (-1);

	set_mask <<= index;
	*n |= set_mask;

	return (1);
}
