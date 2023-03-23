#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of its variable parameters
 *
 * @n: parameter count and last fixed argument
 *
 * Return: 0 if n == 0
 *		   sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_p;

	if (n == 0)
		return (0);

	va_start(arg_p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_p, int);
	}

	va_end(arg_p);

	return (sum);
}
