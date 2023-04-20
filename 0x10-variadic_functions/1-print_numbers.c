#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*
 * task 1
 */

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string
 * @n: number of integers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list b;
	unsigned int a;

	va_start(b, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(b, int));

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(b);
}
