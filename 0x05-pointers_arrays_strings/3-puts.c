#include "main.h"

/*
 * task 3
 */

/**
 * _puts - print string to stdout
 * @str: the string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
