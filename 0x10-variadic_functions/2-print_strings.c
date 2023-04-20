#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*
 * task 2
 */

/**
 * print_strings - prints strings followed by a new line
 * @separator: string
 * @n: number of strings
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *b;
	unsigned int a;

	va_start(str, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(str, char *);

		if (b == NULL)
			printf("(nil)");
		else
			printf("%s", b);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
