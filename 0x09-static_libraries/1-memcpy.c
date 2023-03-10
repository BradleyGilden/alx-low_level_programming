#include<stdio.h>
#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: character array to be filled
 * @src: source char array that will be copied from
 * @n: number chars to be copied
 *
 * Return: character array to destination 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
