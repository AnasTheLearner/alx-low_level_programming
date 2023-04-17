#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * task 4
 */

/**
 * new_dog -  creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_do;
	int a;
	int d_nm;
	int d_own;

	d_do = malloc(sizeof(*d_do));
	if (d_do == NULL || !(name) || !(owner))
	{
		free(d_do);
		return (NULL);
	}

	for (d_nm = 0; name[d_nm]; d_nm++)
		;

	for (d_own = 0; owner[d_own]; d_own++)
		;

	d_do->name = malloc(d_nm + 1);
	d_do->owner = malloc(d_own + 1);

	if (!(d_do->name) || !(d_do->owner))
	{
		free(d_do->owner);
		free(d_do->name);
		free(d_do);
		return (NULL);
	}

	for (a = 0; a < d_nm; a++)
		d_do->name[a] = name[a];
	d_do->name[a] = '\0';

	d_do->age = age;

	for (a = 0; a < d_own; a++)
		d_do->owner[a] = owner[a];
	d_do->owner[a] = '\0';

	return (d_do);
}
