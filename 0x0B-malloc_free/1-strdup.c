#include "main.h"
#include <stdlib.h>

/*
 * task 1
 */

/**
 * _strdup - returns a pointer of a copy of string
 * @str: string
 * Return: pointer if not null
 */

char *_strdup(char *str)
{
	char *a;
	int b, d = 0;

	if (str == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		d++;

	a = malloc(sizeof(char) * (d + 1));

	if (a == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		a[b] = str[b];

	a[d] = '\0';

	return (a);
}
