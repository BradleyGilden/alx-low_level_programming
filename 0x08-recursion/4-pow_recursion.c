#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the factorial of input n;
 * @x: base
 * @y: exponent
 *
 * Return: x ^ y
 *
 * deduction: pow(x, 3) = x * x * x
 *						= x * pow(x, 3 - 1)'
 *			  lets use head recursion
 *			  base case: if y = 0, return (1)
 *			  exception: if y < 0 return (-1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
