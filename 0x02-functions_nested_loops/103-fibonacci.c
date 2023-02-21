#include <stdio.h>

/**
 * main - is the entry point for program
 *
 * Return: 0 always
 */

int main(void)
{
	int i, j;
	long int arr[50];
	long int count;

	j = 0;
	count = 0;

	for (i = 1; i < 51; i++)
	{
		if (i > 2)
			arr[j] = arr[j - 2] + arr[j - 1];
		else
			arr[j] = i;
		j++;
	}
	for (i = 0; arr[i] < 4000000; i++)
	{
		if (arr[i] % 2 == 0)
			count += arr[i];
	}
	printf("%ld\n", count);
	return (0);
}
