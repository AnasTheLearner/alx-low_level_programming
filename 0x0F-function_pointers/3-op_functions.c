#include "3-calc.h"

/*
 * task 3
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
