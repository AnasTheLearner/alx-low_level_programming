#include "main.h"

/*
 * task 3
 */

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	char *y = s, *z;

	while (*y)
	{
		z = accept;

		while (*z && *y != *z)
			z++;

		if (*y == *z)
			y++;

		else
			return (y - s);
	}

	return (0);
}
