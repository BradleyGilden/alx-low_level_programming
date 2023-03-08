#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s:input string
 *
 * deduction: to reverse the string we must use head recursion
 *			  increment in function as long as *s != '\0'
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
