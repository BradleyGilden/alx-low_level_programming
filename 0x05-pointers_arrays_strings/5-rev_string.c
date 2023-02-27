#include <stdio.h>
#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: input string
 */

void rev_string(char *s)
{
	int counter = 0;
	char *len = s;
	char temp;
	int i;

	/*find length of string*/

	while (*len != '\0')
	{
		counter++;
		len += 1;
	}

	for (i = counter - 1; i >= counter / 2; i--)
	{
		temp = *(s + i);
		*(s + i) = *(s + counter - i - 1);
		*(s + counter - i - 1) = temp;
	}
}
