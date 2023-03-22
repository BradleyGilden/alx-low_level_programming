#include "function_pointers.h"

/**
 * print_name - a function that prints a name...
 *				depending on the style of the function inserted
 * @name: name to be printed
 * @f: pointer to void function in code
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
