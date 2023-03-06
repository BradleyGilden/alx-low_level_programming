#include<stdio.h>
#include "main.h"

/**
 * _strchr - returns pointer to first occurence of char c
 *			 if char c is not found then return NULL
 *			 if c is '\0' then return pointer to end of string
 * @s: char array to be searched
 * @c: char needed to search in char array
 *
 * Return: character array 'char *s'
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	if (c == '\0')
		return (s + i);

	return (NULL);
}

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, '\0');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
