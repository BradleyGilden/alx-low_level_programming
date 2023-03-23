#include "variadic_functions.h"
#include <stdarg.h>

/**
 * s_print - prints strings
 *
 * @ap: argument pointer
 */

void s_print(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * c_print - prints chars
 *
 * @ap: argument pointer
 */

void c_print(va_list ap)
{
	char ch = va_arg(ap, int);

	printf("%c", ch);
}

/**
 * i_print - prints ints
 *
 * @ap: argument pointer
 */

void i_print(va_list ap)
{
	int i = va_arg(ap, int);

	printf("%d", i);
}

/**
 * f_print - prints floats
 *
 * @ap: argument pointer
 */

void f_print(va_list ap)
{
	float f = va_arg(ap, double);

	printf("%f", f);
}

/**
 * print_all - a function that prints anything
 *
 * @format: a list of types of arguments passed into the function
 *			formats permitted: c->char, i->int, s->string, f->float
 *
 * Restrictions: not allowed: for, goto, ternary operator, else, do-while
 *				 Must only use maximum 2 while loops
 *				 Maximum 2 if statements
 *				 Maximum 9 variables declared
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list ap;
	char *delimeter = "";
	print_t call[] = {
		{"i", i_print},
		{"f", f_print},
		{"c", c_print},
		{"s", s_print}
	};
	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4 && call[j].spec[0] != format[i])
			j++;

		if (j < 4)
		{
			printf("%s", delimeter);
			call[j].func(ap);
			delimeter = ", ";
		}

		i++;
	}

	va_end(ap);
	printf("\n");
}
