#include "main.h"

/**
 * jack_bauer - print 24 hours
 *
 */

void jack_bauer(void)
{
	int i, j, k, z;

	for (i = '0'; i <= '2'; i++)
	{
	for (j = '0'; j <= '9'; j++)
	{
		if (i == '2' && j > '3' && k > '5' && z > '9')
			continue;
		for (k = '0'; k <= '5'; k++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(k);
				_putchar(z);
				_putchar('\n');
			}
}
}
}
}
