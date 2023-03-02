#include <stdio.h>
#include "main.h"

/**
 * leet - encode given string in 1337
 * @str: input string
 *
 * Return: the address of input string
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	int code[8] = {'O', 'L', '~', 'E', 'A', '~', '~', 'T'};

	/*             0    1    2    3    4    5    6    7        */

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (code[j] == str[i] || code[j] + 32 == str[i])
				str[i] = j + '0';
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
