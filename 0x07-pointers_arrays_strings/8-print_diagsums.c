#include "main.h"
#include <stdio.h>

/*
 * task 7
 */

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: pointer
 * @size: input
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y = 0;
	int z = 0;

	for (x = 0; x < size; x++)
	{
		y = y + a[(x * 1) + (x * size)];

		z = z + a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", y, z);
}
