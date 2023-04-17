#include "dog.h"
#include <stdlib.h>

/*
 * task 1
 */

/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
