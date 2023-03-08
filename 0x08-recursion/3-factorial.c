#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of input n;
 * @n: input integer value
 *
 * Return: the factorial -> n!
 *
 * deduction: n! = n x (n-1)(n-2)...
 *			  use head recurison
 *			  return (n x factorial(n-1))
 *			  base case: if n == 1 or n == 0...return (1)
 *			  return (-1) if < 0...error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
