#include <stdio.h>
#include "main.h"

/**
  * cap_string - captilize words divided by special chars
  * @str: input string
  *
  * Return: address of input str
  */

char *cap_string(char *str)
{
	int i = 0, reset = 0;

	while (str[i])
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;

		if (reset >= 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			reset = 0;
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',')
			reset++;
		else if (str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?')
			reset += 1;
		else if (str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{')
			reset++;
		else if (str[i] == '}')
			reset++;
		else if (!(str[i] >= 'a' && str[i] <= 'z'))
			reset = 0;

		i++;
	}
	str[i] = '\0';
	return (str);
}
