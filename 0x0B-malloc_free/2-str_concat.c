#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_size - function calculates length of string as long
 *				as it does not point to NULL
 * @s1: first string in concatenated string
 * @s2: second string in concatenated string
 * @s1_len: length of string 1
 * @s2_len: length of string 2
 */

void check_size(char *s1, char *s2, int *s1_len, int *s2_len)
{
	int i = 0;

	if (s1 != NULL)
	{
		while (s1[i++])
			*s1_len += 1;
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i++])
			*s2_len += 1;
	}
}

/**
 * str_concat - write function that concatenates two strings and store
 *				it dynamically. Return a pointer to the concatinated string.
 *				if NULL is passed treat it as an empty string
 *
 * @s1: first string in concatenated string
 * @s2: second string in concatenated string
 *
 * Return: Pointer to concatenated string
 *		   NULL upon failure to allocate memory.
 *
 * deduction: check if each string points to null
 *			  if so treat it as an empty, keep strlen = 0
 *			  find length of both strings
 *			  allocate (sum of length) + 1 in heap to: cat_str
 *			  assign characters in s1 and s2 into cat_str
 *			  return catstr
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, s1_len = 0, s2_len = 0;
	char *cat_str;

	check_size(s1, s2, &s1_len, &s2_len);

	cat_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	if (cat_str == NULL)
		return (NULL);

	for (i = 0; i <= s1_len; i++)
	{
		if (s1_len == 0)
		{
			cat_str[i] = '\0';
			break;
		}
		cat_str[i] = s1[i];
	}

	for (i = s1_len; i <= (s1_len + s2_len); i++)
	{
		if (s2_len == 0)
			break;
		cat_str[i] = s2[j++];
	}

	return (cat_str);
}
