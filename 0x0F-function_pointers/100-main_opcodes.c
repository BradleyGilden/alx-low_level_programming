#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of main function
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 always
 */

int main(int ac, char *av[])
{
	int i, bytes;
	char *arr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(av[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}

	return (0);
}
