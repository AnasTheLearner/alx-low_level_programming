#include "main.h"

/*
 * task 2
 */

/**
 * _strncpy - funtion that copies a string.
 * @dest: destination
 * @src: the string
 * @n: lenght
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
