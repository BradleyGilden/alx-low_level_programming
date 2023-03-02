#include <stdio.h>
#include "main.h"

/**
 * print_buffer - print a buffer info table of input string
 * @b: input buffer string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	while (i < size)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0 && j >= 2 && j != i)
				printf(" ");
			if (j < size)
				printf("%02x", b[j]);
			else
			{
					printf("  ");
			}
		}
		printf(" ");
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (!(b[j] >= 32 && b[j] <= 126))
				printf(".");
			else
				printf("%c", b[j]);
		}
		printf("\n");
		i += 10;
	}
	if (size <= 0)
		printf("\n");
}
