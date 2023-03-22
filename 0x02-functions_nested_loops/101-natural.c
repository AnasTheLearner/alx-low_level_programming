#include <stdio.h>

/*
 * task 13
 */

/**
 * main - list all natural numbers below 1024 and multipule of 3 or 5
 * Return: 0
 */

int main(void)
{
	int n, som = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			som += n;
	}

	printf("%d\n", som);

	return (0);
}
