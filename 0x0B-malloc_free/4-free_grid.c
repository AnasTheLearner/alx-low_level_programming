#include "main.h"
#include <stdlib.h>

/*
 * task 4
 */

/**
 * free_grid - frees a two dimensional grid
 * @grid: array
 * @height: height value
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)

		free(grid[a]);

	free(grid);
}
