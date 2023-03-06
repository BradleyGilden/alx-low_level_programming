#include<stdio.h>
#include "main.h"

/**
 * _memset - fills n bytes of char *s with char b
 * @s: character array to be filled
 * @b: char that will fill character array
 * @n: number chars to be filled
 *
 * Return: character array 'char *s'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
