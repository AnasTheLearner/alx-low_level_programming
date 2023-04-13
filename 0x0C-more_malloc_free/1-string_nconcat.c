#include "main.h"
#include <stdlib.h>

/*
 * task 1
 */

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;

	unsigned int b = n, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (d = 0; s1[d]; d++)
		b++;

	a = malloc(sizeof(char) * (b + 1));

	if (a == NULL)
		return (NULL);

	b = 0;

	for (d = 0; s1[d]; d++)
		a[b++] = s1[d];

	for (d = 0; s2[d] && d < n; d++)
		a[b++] = s2[d];

	a[b] = '\0';

	return (a);
}
