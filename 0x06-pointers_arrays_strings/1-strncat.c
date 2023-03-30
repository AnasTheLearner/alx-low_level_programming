#include "main.h"

/*
 * task 1
 */

/**
 * _strncat - concatenates two strings.
 * @dest: the string wich will be concatenates into.
 * @src: the string wich will be concatenated in @dest.
 * @n: length.
 * Return: concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];

	return (dest);
}
