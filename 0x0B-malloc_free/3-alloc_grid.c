#include "main.h"
#include <stdlib.h>

/*
 * task 3
 */

/**
 * alloc_grid - function that returns a pointer to
 * 		a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer if not return null
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b;
	int c;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		a[b] = (int *)malloc(sizeof(int) * width);
		if (a[b] == NULL)
		{
			for (c = 0; c < b; c++)
			{
				free(a[c]);
			}
			free(a);
		}
	}

	for (b = 0; b < height; b++)
		for (c = 0; c < width; c++)
			a[b][c] = 0;

	return (a);
}
