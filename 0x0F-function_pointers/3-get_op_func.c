#include "3-calc.h"
#include <stdlib.h>

/*
 * task 3
 */

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user
 * @s: operator passed as argument
 * Return: pointer
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
	int x = 0;

	while (x < 10)
	{
		if (s[0] == ops->op[x])
			break;
		x++;
	}

	return (ops[x / 2].f);
}
