#include "main.h"

/**
 * times_table - is the entry point for program
 */

void times_table(void)
{
	int i, j, count, tens, units;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar('0');			}
			else
			{
				count = i * j;
				if (count > 9)
				{
					units = count % 10;
					tens = count % 100;
					tens = tens / 10;
					_putchar(',');
					_putchar(' ');
					_putchar(tens + 48);
					_putchar(units + 48);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(count + 48);
				}
			}
		}
		_putchar('\n');
	}
}
