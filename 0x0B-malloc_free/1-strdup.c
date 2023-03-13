#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a copy of string input and stores it dynamically
 *			 it then returns a pointer to the copy of the string.
 *
 * @str: input string to be copied
 *
 * Return: NULL if str == NULL
 *		   NULL if there is insufficient memeory
 *
 * deduction: first find length of string
 *			  allocate memory in malloc for length + 1 to include null byte
 *			  check if copied string :copystr, points to null
 *			  if so return NULL
 *			  assign str elements to copystr
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *cpystr;

	if (str == NULL)
		return (NULL);

	while (str[i++])
		len++;

	cpystr = (char *)malloc((len + 1) * sizeof(char));

	if (cpystr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		cpystr[i] = str[i];

	return (cpystr);
}
