#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse contents of array
 * @a: pointer to int array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0, temp = 0;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j++] = temp;
	}
}
