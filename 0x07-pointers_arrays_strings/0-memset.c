#include "main.h"

/*
 * task 0
 */

/**
 * _memset - fills a memory block with a value
 * @s: address memory
 * @b: the value
 * @n: number of bytes
 * Return: the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}

	return (s);
}
