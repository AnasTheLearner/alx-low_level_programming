#include "main.h"

/*
 * task 6
 */

/**
 * print_chessboard - prints a chessboard.
 * @a: pointer to array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{

		for (y = 0; y < 8; y++)
		{

			_putchar(a[x][y]);

		}

		_putchar('\n');
	}
}
