#include <stdio.h>
#include <stdlib.h>

/*
 * task 4
 */

/**
 * main - print the result, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, b, s = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(argv[a]);
	}

	printf("%d\n", s);

	return (0);
}
