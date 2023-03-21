#include "main.h"
/*
 * task 3
 */

/**
 * _islower - checking for lowercase char
 * @c: the char wich checking
 * Return: 1 for lowercase char if not return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
