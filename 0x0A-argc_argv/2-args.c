#include <stdio.h>

/*
 * task 2
 */

/**
 * main - print all arguments it receives
 * @argc: number of arguments
 * @argv: array arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
