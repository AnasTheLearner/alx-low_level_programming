#include "main.h"

/*
 * task 4
 */

/**
 * clear_bit - sets the value of a bit
 * to 0 at a given index
 * @n: integer
 * @index: the index, starting from 0
 * of the bit you want to set
 * Return: 1 if it worked, or -1
 * if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int str = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	str <<= index;
	str = ~str;
	*n = *n & str;

	return (1);
}
