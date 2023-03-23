#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 *				   if separator is NULL, don't print it
 *
 * @n: parameter count and last fixed argument
 * @separator:: the string printed betweefn numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ap, int));
			break;
		}
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
			continue;
		}
		printf("%d%s", va_arg(ap, int), separator);
	}

	va_end(ap);
}
