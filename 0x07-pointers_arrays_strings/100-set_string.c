#include<stdio.h>
#include "main.h"

/**
 * set_string - point string to an adress of another
 *
 * @s: a pointer to an address of a pointer
 * @to: the address for s to point to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
