#include <stdio.h>

/**
 * main - is the entry point for program
 *
 * Return: 0 if compilation is successful
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
