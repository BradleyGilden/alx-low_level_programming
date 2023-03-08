#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - recursive function that imitates puts
 * @s: string input
 *
 * deduction: tail recursion to iterate string
 *			  if s[i] == '\0' ... print newline
 *			  else print s[i++]
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s += 1;
	_puts_recursion(s);
}
