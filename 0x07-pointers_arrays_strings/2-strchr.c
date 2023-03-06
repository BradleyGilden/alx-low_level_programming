#include<stdio.h>
#include "main.h"

/**
 * _strchr - returns pointer to first occurence of char c
 *			 if char c is not found then return NULL
 * @s: char array to be searched
 * @c: char needed to search in char array
 *
 * Return: character array 'char *s'
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
