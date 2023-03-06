#include<stdio.h>
#include "main.h"

/**
 * print_diagsums - print chess board using 2d arrays
 *
 * @a: multidimensional array that was casted as a 1-D array
 * @size: size of columns of 2-D array " *a[size] "
 *
 * deduction: to traverse diagonals
 *			  a[i++][i++] and a[j++][k--]
 *			  assuming i = 0, j = 0, k = size - 1
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum_d1 = 0, sum_d2 = 0, j = 0, k = size - 1;

	for (; i < size; i++)
	{
		sum_d1 += *((a + i * size) + i);
		sum_d2 += *((a + (j++) * size) + (k--));
	}
	printf("%d, %d\n", sum_d1, sum_d2);
}
