#include "main.h"

/*
 * task 6
 */

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int k;

	k = 1;
	if (*(char *)&k == 1)
		return (1);
	else

		return (0);
}
