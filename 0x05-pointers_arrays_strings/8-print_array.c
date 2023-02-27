#include <stdio.h>
#include "main.h"

/**
 * print_array - print array seperated by commas
 * @a: pointer to first element in array
 * @n: array size
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
