#include "main.h"

/*
 * task 5
 */

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	int n, c;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
