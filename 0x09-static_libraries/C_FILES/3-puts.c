#include <stdio.h>
#include "main.h"

/**
 * _puts - mimics the C puts function
 * @str: pointer to first element of string array
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
