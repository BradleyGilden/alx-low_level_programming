#include<stdio.h>
#include "main.h"

/**
 * _strpbrk - returns pointer to first byte from accept ...
 *			  matched in string s;
 *
 * @s: char array to be searched
 * @accept: string of bytes to be matched
 *
 * Return: address of first byte matched
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
