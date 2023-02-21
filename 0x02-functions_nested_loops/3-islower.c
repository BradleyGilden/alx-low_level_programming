#include "main.h"

/**
 * _islower - is the entry point for program
 * @c: integer ascii value
 *
 * Return: 1 if letter is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
