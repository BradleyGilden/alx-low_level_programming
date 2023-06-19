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
		if (value >= INT_MAX / 10 || (value == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		if (s[i] >= '0' && s[i] <= '9')
		{

			value = value * 10 + s[i] - '0';
			end += 1;
		}

	}
	value = value * sign;
	return (value);
}
