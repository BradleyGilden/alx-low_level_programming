#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to be square rooted
 *
 * Return: sqrt(n)
 *
 * deduction: we need to keep input number constant...
 *			  so call another recursive function with extra parameters
 *			  if input is < 0, immediately return -1;
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	return (compute_sqrt(n, root));
}

/**
 * compute_sqrt - assists sqrt recursion in returning sqrt of input
 * @input: number to be square rooted
 * @root: initially 0, increased by 1 after function call
 *
 * Return: sqrt(n)
 *
 * deduction: we have input and root
 *			  we increase root after every recursive call by 1...
 *			  until it meets root*root = input
 *			  if the root becomes too large for given input...
 *			  return -1
 */

int compute_sqrt(int input, int root)
{
	if (root * root == input)
		return (root);

	if (root * root > input)
		return (-1);

	compute_sqrt(input, root + 1);
}
