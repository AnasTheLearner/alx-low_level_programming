#include "main.h"

/*
 * task 1
 */

/**
 * _print_rev_recursion - reverse printing a string
 * @s: The string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
