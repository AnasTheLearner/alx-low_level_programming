#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*
 * task 3
 */

/**
 * print_all - prints anything
 * @format: a listof arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list vl;
	unsigned int x = 0, y, z = 0;
	char *s;
	const char ar[] = "cifs";

	va_start(vl, format);
	while (format && format[x])
	{
		y = 0;
		while (ar[y])
		{
			if (format[x] == ar[y] && z)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(vl, int)), z = 1;
			break;
		case 'i':
			printf("%d", va_arg(vl, int)), z = 1;
			break;
		case 'f':
			printf("%f", va_arg(vl, double)), z = 1;
			break;
		case 's':
			s = va_arg(vl, char *), z = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} x++;
	}
	printf("\n"), va_end(vl);
}
