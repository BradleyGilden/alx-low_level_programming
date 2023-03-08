#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - determines if input is a palindrome
 * @s: possible palindrome
 *
 * Return: 1 if palindrome, 0 otherwise
 *
 * deduction: get size of string input
 *			  let rs = address of last character of the string
 *			  call comparison recursive function
 */

int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);
	char *rs = s + size - 1;

	return (compare(s, rs));
}

/**
 * compare - assists sqrt recursion in returning sqrt of input
 * @s: input string
 * @rs: the reverse of string s
 *
 * Return: 1 if rs = s for every iteration, 0 otherwise
 *
 * deduction: rs decrements while s increments...
 *			  both pointing to the same string but on either ends
 *			  if comparisons fail during iteration...
 *			  return 0, otherwise return 1;
 */

int compare(char *s, char *rs)
{
	if (*s != '\0')
	{
		if (*s != *rs)
			return (0);
		return (compare(s + 1, rs - 1));
	}
	return (1);
}

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
