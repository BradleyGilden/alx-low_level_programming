#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates s1 and n bytes of s2
 *					if n >= s2, use the entire of s2
 * @s1: first string input
 * @s2: second string input
 * @n: the amound of bytes of s2 to be concatenated
 *
 * Return: NULL if function fails
 *		   Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, s1_len = 0, s2_len = 0;
	char *join;

	if (s1 != NULL)
	{
		while (s1[i++])
			s1_len++;
	}
	if (s2 != NULL)
	{
		while (s2[j++])
			s2_len++;
	}
	if (n >= s2_len)
		n = s2_len;

	join = malloc(sizeof(*join) * (s1_len + n + 1));

	if (join == NULL)
		return (NULL);

	for (i = 0; i <= s1_len && s1 != NULL; i++)
	{
		join[i] = s1[i];
	}
	j = 0;
	for (i = s1_len; i < (s1_len + n); i++)
	{
		join[i] = s2[j++];
	}
	join[s1_len + n] = '\0';

	return (join);
}
