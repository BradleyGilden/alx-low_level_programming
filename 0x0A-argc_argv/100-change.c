#include <stdio.h>
#include <stdlib.h>

/**
 * count_coins - count minimum change
 * @input: value from terminal
 * @c_current: current change during the loop
 * @c_count: coin count
 *
 * deduction: start with the biggest coint
 *			  add until before it overflows
 *			  go on to the next biggest coin
 *			  until the values match the input
 */

void count_coins(int input, int c_current, int *c_count)
{
	while (input != c_current)
	{
		if (input - c_current >= 25)
		{
			c_current += 25;
			*c_count += 1;
		}
		else if (input - c_current >= 10)
		{
			c_current += 10;
			*c_count += 1;
		}
		else if (input - c_current >= 5)
		{
			c_current += 5;
			*c_count += 1;
		}
		else if (input - c_current >= 2)
		{
			c_current += 2;
			*c_count += 1;
		}
		else if (input - c_current == 1)
		{
			c_current += 1;
			*c_count += 1;
		}
		else
			continue;
	}
}

/**
 * main - count minimum change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int c_current = 0, c_count = 0;
	int input;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	input = atoi(argv[1]);

	count_coins(input, c_current, &c_count);

	printf("%d\n", c_count);
	return (0);
}
