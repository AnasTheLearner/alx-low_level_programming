#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/*
 * task 1
 */

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
