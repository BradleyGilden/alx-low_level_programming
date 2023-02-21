#include "main.h"

/**
 * print_last_digit - return last digit
 * @x: int number argument
 *
 * Return: last digit
 */

int print_last_digit(int x)
{
	int last, y;

	if (x < 0)
	{
		y = -(x);
		last = y % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = x % 10;
		_putchar(last + '0');
		return (last);
	}
}
