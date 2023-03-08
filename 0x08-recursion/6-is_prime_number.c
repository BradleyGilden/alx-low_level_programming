#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - determines if input is a prime number
 * @n: integer input
 *
 * Return: 1 if prime, 0 if not
 *
 * deduction: if n < 2, return 0.
 *			  call function with more parameters to work with
 *			  create mod var, to check for primes
 *			  create count var, to count the number of factors
 */

int is_prime_number(int n)
{
	int mod = 2, count = 0;

	if (n < 2)
		return (0);

	return (compute_prime(n, mod, count));
}

/**
 * compute_prime - assists sqrt recursion in returning sqrt of input
 * @num: possible prime number
 * @mod: a modulator to check factors of possible prime
 * @count: to keep track of factor count
 *
 * Return: 1 if prime, 0 if not
 *
 * deduction: if count > 1 ... (has more than 1 factor exluding 1)..
 *			  hence not a prime number
 *			  if count == 1, but the modulator has exceeded...
 *			  the possible prime, then number is prime
 */

int compute_prime(int num, int mod, int count)
{
	if (count > 1)
		return (0);
	if (count == 1 && mod > num)
		return (1);
	if (num % mod == 0)
		count++;

	return (compute_prime(num, mod + 1, count));
}
