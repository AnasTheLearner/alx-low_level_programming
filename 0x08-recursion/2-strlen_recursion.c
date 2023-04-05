#include "main.h"

/*
 * task 2
 */

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}

	return (a);
}
