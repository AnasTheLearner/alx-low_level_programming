#include "main.h"
#include <stdlib.h>

/*
 * task 3
 */

/**
 * array_range - creates an array of integers
 * @min: min range value of the array
 * @max: max range value of the array
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *i;
	int j;
	int k;

	if (min > max)
		return (NULL);

	k = max - min + 1;

	i = malloc(sizeof(int) * k);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
		i[j] = min++;

	return (i);
}
