#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/*
 * task 2
 */

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: array of integers
 * @size: array size
 * @cmp: pointer to the function to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}

	return (-1);
}
