#include<stdio.h>
#include "main.h"

/**
 * _strspn - returns index of first character found
 *
 * @s: char array to be searched
 * @accept: string of bytes to be matched
 *
 * Return: number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 0, track = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
			}
		}
		if (!(count > i))
			break;
	}
	return (count);

}
