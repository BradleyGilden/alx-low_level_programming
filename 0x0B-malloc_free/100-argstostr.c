#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates the arguments of a program executable.
 *			   Each argument string should end in a new line
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: NULL if ac == 0 or av == NULL
 *		   NULL if malloc fails to allocate memory
 *		   pointer to concatenated string
 *
 * N.B: when allocating memory for strings make sure
 *		you account for \n and \0
 */

char *argstostr(int ac, char **av)
{
	int i, j, strcnt = 0;
	char *argcat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			strcnt++;

		/*add extra count at the end for \n */

		strcnt++;
	}

	/* add + 1 for the \0 char at the end of the string*/

	argcat = (char *)malloc((strcnt + 1) * sizeof(char));
	if (argcat == NULL)
		return (NULL);

	strcnt = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			argcat[strcnt++] = av[i][j];
		}
		argcat[strcnt++] = '\n';
		if (i == ac - 1)
			argcat[strcnt] = '\0';
	}
	return (argcat);
}
