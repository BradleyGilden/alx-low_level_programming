#include<stdio.h>
#include "main.h"

/**
 * _strstr - finds first occurence of needle string in haystack
 *
 * @haystack: char array to be searched
 * @needle: string to be matched
 *
 * Return: address of first char byte of the occurence of needle
 *
 * deduction: find length of needle.
 *			  use needle length to see if string is complete
 *			  iterate through all the characters
 *			  if match, increase needle index
 *			  if the needle index j is == len, then return ...
 *			  the haystack index starting at i - length of string
 *			  if j incremented, but stopped matching, reset j = 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, len = 0;

	if (*needle == 0)
		return (haystack);

	while (needle[i++])
	{
		len++;
	}


	for (i = 0; haystack[i]; i++)
	{
		if (j > 0 && haystack[i] != needle[j])
			j = 0;
		if (haystack[i] == needle[j])
		{
			j += 1;
		}
		if (j == len)
			return (haystack + i - len + 1);
	}
	return (NULL);
}
