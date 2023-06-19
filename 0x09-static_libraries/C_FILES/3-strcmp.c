#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compares strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if string is equal.
 *		   ->if s1 > s2, then return + ascii value of ...
 *		   the first extra character in s1
 *		   ->if s1 < s2 then return - ascii value of ...
 *		   first extra character in s2
 *		   ->if s1 != s2 at index i ...
 *		   then return s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, s1_len = 0, s2_len = 0;

	while (s1[i++])
		s1_len++;

	i = 0;

	while (s2[i++])
		s2_len++;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	/*
	 * first extra character in s1 ...
	 * is at th index s1[length of s2]
	 */

	if (s1_len > s2_len)
		return (s1[s2_len]);

	else if (s2_len > s1_len)
		return ((-1) * s2[s1_len]);
	else
		return (0);
}
