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

	if (x < 0)
	{
		x = -x;
		last = x % 10;
		return (last);
	}
	else
	{
		last = x % 10;
		return (last);
	}
}
