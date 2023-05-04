#include "main.h"

/*
 * task 5
 */

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one
 * @m: number two
 * Return: needed number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ori;
	int i = 0;

	ori = n ^ m;

	while (ori)
	{
		i++;
		ori &= (ori - 1);
	}
	return (i);
}
