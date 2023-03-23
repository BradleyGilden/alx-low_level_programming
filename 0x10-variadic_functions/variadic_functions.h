#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - this truct handles which function to call for a specific
 *				  format specifier
 * @spec: the format specifier print data as
 * @func: the function needed print a specific format specifier
 *
 */

typedef struct print
{
	char *spec;
	void (*func)(va_list);
} print_t;

void s_print(va_list ap);
void c_print(va_list ap);
void i_print(va_list ap);
void f_print(va_list ap);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*_VARIADIC_FUNCTIONS_H_*/
