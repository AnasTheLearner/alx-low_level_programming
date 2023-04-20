#include "variadic_functions.h"

/*
 * task 0
 */

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list b;
	unsigned int a, sum = 0;

	va_start(b, n);

	for (a = 0; a < n; a++)
		sum += va_arg(b, int);

	va_end(b);

	return (sum);
}
