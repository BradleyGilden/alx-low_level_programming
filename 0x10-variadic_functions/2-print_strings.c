#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 *				   if separator is NULL, don't print it
 *				   if str arg is NULL, print "(nil)"
 *
 * @n: parameter count and last fixed argument
 * @separator:: the string printed betweefn numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			str = "(nil)";

		if (i == n - 1)
		{
			printf("%s\n", str);
			break;
		}
		if (separator == NULL)
		{
			printf("%s", str);
			continue;
		}
		printf("%s%s", str, separator);
	}

	va_end(ap);
}
