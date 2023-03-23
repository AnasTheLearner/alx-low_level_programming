#include "main.h"

/*
 * task 0
 */

/**
 * _isupper - check for uppercase characters
 * @c: the character wich will be checked
 * Return: 1 if teh character uppercase , if not 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
