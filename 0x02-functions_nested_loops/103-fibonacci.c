#include <stdio.h>

/*
 * task 15
 */

/**
 * main - print sum of even valued fibonacci sequence 
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, fs;
	float tsum;

	while (1)
	{
		fs = f1 + f2;
		if (fs > 4000000)
			break;

		if ((fs % 2) == 0)
			tsum += fs;

		f1 = f2;
		f2 = fs;
	}
	printf("%.0f\n", tsum);

	return (0);
}
