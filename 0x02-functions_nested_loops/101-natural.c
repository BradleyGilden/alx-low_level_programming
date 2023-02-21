#include <stdio.h>

/**
 * main - is the entry point for program
 *
 * Return: 0 always
 */

int main(void)
{
	int i, count;

	count = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count += i;
	}
	printf("%d\n", count);
	return (0);
}
