#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * _atoi - convert string to int
 * @s: input string
 *
 * Return: int value
*/

int _atoi(char *s)
{
	int i, value = 0, sign = 1, end = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = (-1) * sign;

		if (end > 0 && s[i] == ' ')
			break;
		if (s[i] >= '0' && s[i] <= '9')
		{

			value = value * 10 + s[i] - '0';
			end += 1;
		}

	}
	if (value > INT_MAX / 10)
		return (INT_MAX);
	if (value < INT_MIN / 10)
		return (INT_MIN);
	value = value * sign;
	return (value);
}
