#include "main.h"

/**
 * print_sign - is the entry point for program
 * @n: input integer to be compared
 * Return: 1 n is positive, 0 if n is 0, -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
