#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/*
 * task 4
 */

/**
 * main - prints the opcodes of its own main function
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *ar = (char *) main;
	int x, y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);

	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < y; x++)
	{
		printf("%02x", opc[x] & 0xFF);
		if (x != y - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
