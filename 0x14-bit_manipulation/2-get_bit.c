#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @index: index of bit to return.
 * @n: input unsigned long integer.
 *
 * Return: bit of int n at given
 *         -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int compare = 0x01;
	unsigned int bit_len = sizeof(unsigned long int) * 8 - 1;
	unsigned int mask;

	if (index > bit_len)
		return (-1);

	/*this mask shifts 1 to the index and applies & to unset other bits*/
	/*we do this so we can only compare bits and index*/
	mask = (compare << index) & n;

	if (mask ^ (compare << index))
		return (0);

	else
		return (1);
}
