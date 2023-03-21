#include "main.h"
/*
 * task 3
 */

/**
 * _islower - checking for lowercase char
 * @c: the char wich checking
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
