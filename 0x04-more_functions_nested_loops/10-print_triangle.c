#include <stdio.h>
#include "main.h"

/**
 * print_triangle - entry point
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j, space;

	space = size - 1;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < space; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		space -= 1;
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
