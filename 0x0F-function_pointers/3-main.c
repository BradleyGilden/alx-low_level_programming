#include "3-calc.h"

/**
 * main - main function for the calculator
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 always
 */

int main(int ac, char *av[])
{
	int num1 = 0, num2 = 0, result = 0, (*pfun)(int, int);
	char op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = av[2][0];
	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	if ((op == '/' || op == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	pfun = get_op_func(av[2]);
	result = pfun(num1, num2);
	printf("%d\n", result);

	return (0);
}
