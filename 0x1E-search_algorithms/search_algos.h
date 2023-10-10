#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
#define MIN(x, y) (x > y ? y : x)
#define INTERPOLATE(low, high, array, value) \
	(low + (((double)(high - low) /\
	(array[high] - array[low])) * (value - array[low])))

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
int interpolation_search(int *array, size_t size, int value);
int binary_search_exp(int *array, size_t start, size_t end, int value);
void print_array_exp(int *array, size_t start, size_t end);
int exponential_search(int *array, size_t size, int value);

#endif /*SEARCH_ALGOS*/
