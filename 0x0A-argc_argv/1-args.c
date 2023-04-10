#include <stdio.h>

/*
 * task 1
 */

/**
 * main - print the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
