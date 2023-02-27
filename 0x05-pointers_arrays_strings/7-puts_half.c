#include <stdio.h>
#include "main.h"

/**
 * puts_half - print second half of string
 * @str: string input
 */

void puts_half(char *str)
{
	int start, length = 0, i = 0;

	while (str[i++])
		length++;

	if (length % 2 == 0)
	{
		start = length / 2;
		for (i = start; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		start = length / 2 + 1;
		for (i = start; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
