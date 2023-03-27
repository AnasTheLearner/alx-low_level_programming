#include "main.h"
#include <stdio.h>

/*
 * task 8
 */

/**
 * print_array - print n elements of an array of integers
 *               followed by a new line
 * @a: array
 * @n: n of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
