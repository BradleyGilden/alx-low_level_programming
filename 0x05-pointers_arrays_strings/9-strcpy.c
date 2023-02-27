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
	int i, count = 0;

	while (src[i++])
		count++;

	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	dest[count] = '\0';

	return (dest);
}
