#include "dog.h"
#include <stdlib.h>

/*
 * task 5
 */

/**
 * free_dog - frees dogs
 * @d: dog struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
