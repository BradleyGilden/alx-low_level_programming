#include <stdio.h>

/**
 * main - is the entry point for program
 *
 * Return: 0 if compilation is successful
 */

int main(void)
{
	int i;
	int j;

	for (j = 48; j <= 57; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			if (i != j && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
					break;

				putchar(',');
				putchar(' ');
			}

		}
}

	putchar('\n');

	return (0);
}
