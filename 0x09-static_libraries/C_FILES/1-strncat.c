#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatinates n length of string
 *	@dest: destination string
 *	@src: source string
 *	@n: number of chars to be concatinated
 *
 * Return: the adress of the destination string;
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	/*length of destination*/
	while (dest[i++])
		len++;

	for (i = 0; i < src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}
