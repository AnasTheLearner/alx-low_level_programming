#include "main.h"

/*
 * task 4
 */

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string
 * @accept: pointer to the string
 * Return: pointer to matched one of the bytes , if not return 0
 */

char *_strpbrk(char *s, char *accept)
{
	char *y;

	while (*s)
	{
		y = accept;

		while (*y && *s != *y)
			y++;

		if (*s != *y)
			s++;
		else
			return (s);
	}

	return (0);
}
