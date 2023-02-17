#include <stdio.h>

/**
 * main - is the entry point for program
 *
 * Return: 0 if compilation is successful
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
