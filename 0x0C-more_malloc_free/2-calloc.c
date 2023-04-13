#include "main.h"
#include <stdlib.h>

/*
 * task 2
 */

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of array elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	char *b;

	unsigned int d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	b = a;

	for (d = 0; d < (size * nmemb); d++)
		b[d] = '\0';

	return (a);
}
