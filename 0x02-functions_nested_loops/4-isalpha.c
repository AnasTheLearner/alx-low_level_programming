#include "main.h"

/*
 * task 4
 */

/**
 * _isalpha - checking for alphabetic char
 * @c: char to check
 * Return: 1 for letter 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
