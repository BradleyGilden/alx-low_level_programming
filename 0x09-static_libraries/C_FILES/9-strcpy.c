#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy string
 * @dest: empty string to copy to
 * @src: string to be copied
 *
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
