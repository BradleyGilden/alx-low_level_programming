#include "main.h"

/**
 * print_binary - take an unsigned long int input and print the..
 *                  binary representation to stdout.
 * @n: input unsigned long integer.
 */

void print_binary(unsigned long int n)
{
	int i = 0, tracker = 0;
	unsigned long int compare = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if (n & (compare << i))
		{
			_putchar('1');
			tracker = 1;
		}
		else if (tracker == 1)
			_putchar('0');
	}
}
