#include "main.h"

/**
 * shorten - shorten the lenghth of function
 * @c: count variable input
 */

void shorten(int c)
{
	int tens, units, hundreds;

	if (c > 9 && c < 100)
	{
		units = c % 10;
		tens = c / 10;
	    _putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(tens + 48);
		_putchar(units + 48);
	}
	else
	{
		units = c % 10;
		tens = c % 100;
		tens = tens / 10;
		hundreds = c / 100;
		_putchar(',');
		_putchar(' ');
		_putchar(hundreds + 48);
		_putchar(tens + 48);
		_putchar(units + 48);

	}
}

/**
 * print_times_table - is the entry point for program
 * @n: times table number to enter
 */

void print_times_table(int n)
{
	int i, j, count;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				count = i * j;
				if (count > 9 && count < 100)
				{
					shorten(count);
				}
				else if (count > 99)
				{
					shorten(count);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(count + 48);
				}
			}
		}
		_putchar('\n');
	}
}
