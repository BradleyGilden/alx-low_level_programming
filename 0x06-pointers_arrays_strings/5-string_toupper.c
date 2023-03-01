#include <stdio.h>
#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @str: string input
 *
 * Return: adress of capitalized string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
