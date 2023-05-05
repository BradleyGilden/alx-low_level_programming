#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip, to transform n to m
 * @n: first unsigned long integer input.
 * @m: second unsigned long integer input.
 *
 * Return: number of bits needed to flip.
 *
 * Description: The following function compares 1 with the & operator at...
 *              every index for both m and n, if the result is not equal,
 *              that means at that index both bits are different
 *              e.g: m at index 63 is 0 and n at index 63 is 1
 *              so m & 1 = 0  and n & 1 = 1, therefore m != n
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int compare = 0x01;
	int  i = 0;
	unsigned int bit_len = sizeof(unsigned long int) * 8 - 1;

	for (i = bit_len; i >= 0; i--)
	{
		if ((n & (compare << i)) != (m & (compare << i)))
			count++;
	}

	return (count);
}
