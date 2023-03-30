#include "main.h"

/*
 * task 0
 */

/**
 * _strcat - concatenates two strings.
 * @dest: the string wich will be concatenates into.
 * @src: the string wich will be concatenated in @dest.
 * Return: concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*str != '\0')
	{
		str++;
	}

	while (*src != '\0')
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';

	return (dest);
}
