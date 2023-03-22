#include "3-calc.h"

/**
 * get_op_func - returns a pointer that corresponds to the operator as a \
 *				 given parameter e.g: get_op_func("+") should return op_add
 *
 * @s: - operator input
 *
 * Return: pointer to appropriate function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL || ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
