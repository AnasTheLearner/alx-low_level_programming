#include "main.h"

/*
 * task 7
 */

/**
 * print_diagonal - print a diagonal line using the \ character
 * @n: The number of \ characters
 * Return: nothing
 */

void print_diagonal(int n)
{
	int l, s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar(' ');
			_putchar('\\');

			if (l == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
