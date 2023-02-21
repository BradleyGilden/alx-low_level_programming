#include "main.h"

/**
 * print_last_digit - return last digit
 * @x: int number argument
 *
 * Return: last digit
 */

int print_last_digit(int x)
{
	int last;

	last = x % 10;

	if (last < 0)
		last = last * (-1);
	_putchar(last + '0');
	return (last);
}
