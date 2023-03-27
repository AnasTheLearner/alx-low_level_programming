#include "main.h"

/*
 * task 2
 */

/**
 * _strlen - return length of a string
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
