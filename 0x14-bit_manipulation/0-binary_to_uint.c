#include "main.h"

/*
 * task 0
 */

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int al, be;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (be = 1, al = 0, i--; i >= 0; i--, be *= 2)
	{
		if (b[i] == '1')
			al += be;
	}
	return (al);
}
