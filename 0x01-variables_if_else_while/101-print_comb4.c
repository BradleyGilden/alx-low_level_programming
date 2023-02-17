#include <stdio.h>

/**
 * main - is the entry point for program
 *
 * Return: 0 if compilation is successful
 */

int main(void)
{
	int i, j, k;

	for (k = 48; k <= 57; k++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (i = 48; i <= 57; i++)
			{
				if (i != j && j != k && j < i && k < j)
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (i == 57 && j == 56 && k == 55)
						break;

					putchar(',');
					putchar(' ');
				}

			}
}
}


	putchar('\n');

	return (0);
}
