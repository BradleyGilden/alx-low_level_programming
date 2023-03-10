#include <stdio.h>
#include <stdlib.h>

/**
 * main - add argument numbers
 *		  only digits allowed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0);

}
