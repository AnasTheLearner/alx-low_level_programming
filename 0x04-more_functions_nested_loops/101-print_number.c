#include "main.h"

/*
 * task 12
 */

/**
 * print_number - print int
 * @n: int wich will be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}

	if ((a / 10) > 0)
		print_number(a / 10);

	_putchar((a % 10) + '0');
}
