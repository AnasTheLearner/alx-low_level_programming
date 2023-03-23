#include "main.h"

/*
 * task 1
 */

/**
 * _isdigit - check for digits between (0 and 9)
 * @c: the number to be checked
 * Return: 1 if it's a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
