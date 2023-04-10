#include <stdio.h>
#include <stdlib.h>

/*
 * task 5
 */

/**
 * main - prints the minimum number of coins to
 * 	make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: 0
 */

int main(int argc, char  *argv[])
{
	int a = 0;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}

		int b;

		b = atoi(argv[argc - 1]);

		while (b > 0)
		{
			if (b % 25 == 0)
			{
				b -= 25;
			} else if (b % 10 == 0)
			{
				b -= 10;
			} else if (b % 5 == 0)
			{
				b -= 5;
			} else if (b % 2 == 0)
			{
				b -= 2;
			} else
			{
				b--;
			}
			a++;
		}
		printf("%d\n", a);
		return (0);
	}
	printf("Error\n");

	return (1);
}
