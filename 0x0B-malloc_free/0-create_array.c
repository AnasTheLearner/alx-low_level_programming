#include "main.h"
#include <stdlib.h>

/*
 * task 0
 */

/**
 * create_array - creates an array of chars and
 * 		initializes it with a specific char
 * @size: size of the array
 * @c: char value in array
 * Return: array otherwise null
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;

	return (a);
}
