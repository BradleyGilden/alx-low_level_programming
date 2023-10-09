#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
# define true 1
# define false 0

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);

#endif /*SEARCH_ALGOS*/
