#include <stdio.h>

/**
 * main - is the entry point for program
 *
 * Return: 0 if compilation is successful
 */

int main(void)
{
	int i, j, k, z;

	for (z = 48; z <= 57; z++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (i = 48; i <= 57; i++)
				{
					if ((i >= k && j >= z) && (j != k || j != z || j != i))
					{
						putchar(z);
						putchar(k);
						putchar(' ');
						putchar(j);
						putchar(i);
					if (i == 57 && j == 57 && k == 56 && z == 57)
					{
						return (0);
					}
						putchar(',');
						putchar(' ');
					}
}
}
}
}


	putchar('\n');

	return (0);
}
