#include "main.h"
#include <stdlib.h>

/*
 * task 4
 */

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: allocated memory size for ptr
 * @new_size: new memory block size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	char *c, *b;
	unsigned int d;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		a = malloc(new_size);

		if (a == NULL)
			return (NULL);

		return (a);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	c = ptr;
	a = malloc(sizeof(*c) * new_size);

	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}

	b = a;

	for (d = 0; d < old_size && d < new_size; d++)
		b[d] = *c++;

	free(ptr);
	return (a);
}
