#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - finds length of string using recursion
 * @s: input string
 *
 * Return: length of string
 *
 * deduction: head recursion
 *			  base case -> if reached null character, return 0
 *			  add 1 afterwards
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
