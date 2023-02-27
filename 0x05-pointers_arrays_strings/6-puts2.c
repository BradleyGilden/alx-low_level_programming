#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other value
 * @str: string input
 */

void puts2(char *str)
{
	int length = 0, i = 0;

	while (str[i++])
		length++;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
