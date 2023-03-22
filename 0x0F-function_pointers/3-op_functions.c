#include "3-calc.h"

/**
 * op_add - add two integer arguments
 *
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: sum of arguments
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integer arguments
 *
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: sum of arguments
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integer arguments
 *
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: multiplied arguments
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integer arguments
 *
 * @a: numerator
 * @b: divisor
 *
 * Return: the quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder of 2 integer arguments
 *
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
