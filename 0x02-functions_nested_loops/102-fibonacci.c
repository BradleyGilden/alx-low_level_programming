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

	j = 0;

	for (i = 1; i < 51; i++)
	{
		if (i > 2)
			arr[j] = arr[j - 2] + arr[j - 1];
		else
			arr[j] = i;
		j++;
	}
	for (i = 0; i < 50; i++)
	{
		if (i < 49)
			printf("%ld, ", arr[i]);
		else
			printf("%ld\n", arr[i]);
	}
	return (0);
}
