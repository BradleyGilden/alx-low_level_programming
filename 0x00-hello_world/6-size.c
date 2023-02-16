#include <stdio.h>

/**
 * main - is the entry point for program
 *
 * Return: 0 if compilation is successful. 1 otherwise
 */

int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
