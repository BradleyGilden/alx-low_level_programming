#include <stdio.h>
#include "main.h"

/**
 * _strlen - function to find length of string
 * @s: pointer to first element of string array
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s += 1;
	}

	return (counter);
}
