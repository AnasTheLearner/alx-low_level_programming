#include "main.h"

/*
 * task 2
 */

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character to locates
 * Return: first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s && *s != c)

		s++;

	if (*s == c)

		return (s);

	return (0);
}
