#include <stdio.h>
#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: input string
 */

void print_rev(char *s)
{
	int counter = 0;
	char *len = s;
	int i;

	/*find length of string*/

	while (*len != '\0')
	{
		counter++;
		len += 1;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
