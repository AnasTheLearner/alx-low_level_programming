#include "main.h"

/*
 * task 6
 */

/**
 * print_line - Draw a straight line
 * @n: The number of _ character
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}

	_putchar('\n');
}
