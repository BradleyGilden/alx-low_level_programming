#include <stdio.h>

/**
 * prime - checks if number is prime
 * @n: integer to be checked
 *
 * Return: 1 if prime, 0 if otherwise
 */

int prime(long int n)
{
	long int i, count;

	count = 0;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			count++;
	}
	if (count > 1)
		return (0);
	else
		return (1);
}

/**
 * main - checks for largest prime number
 *
 * Return: 0 always
 */

int main(void)
{
	long int num;
	int arr[10];
	int i, j;

	j = 0;

	num = 1231952;
	if (prime(num) == 1)
		printf("%ld\n", num);
	else
	{
		for (i = 2; i < num; i++)
		{
			if (num % i && prime(i) == 1)
			{
				arr[j] = i;
				j++;
			}
		}

		for (i = 0; arr[i] != '\0'; i++)
		{
			printf("%d", arr[i]);
		}
	}
	return (0);
}
