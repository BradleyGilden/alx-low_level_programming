#include <stdio.h>
#include "main.h"

/**
 * _strcat - function to concatinate strings
 * @dest: destination string
 * @src: string segment to concatinate to destination string
 *
 * Return: address of destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len++] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
