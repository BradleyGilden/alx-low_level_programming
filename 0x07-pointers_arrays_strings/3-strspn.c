#include<stdio.h>
#include "main.h"

/**
 * _strspn - number of bytes in 's', that match the bytes in 'accept'
 *			 including '\0' char
 * @s: char array to be searched
 * @accept: string of bytes to be matched
 *
 * Return: number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (accept[i])
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j])
			{
				i++;
			}
		}
	}

	return (i + 1);
}
