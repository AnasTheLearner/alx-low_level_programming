#include "main.h"
#include <stdlib.h>

/*
 * task 0
 */

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
