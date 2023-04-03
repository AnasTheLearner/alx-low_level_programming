#include "main.h"

/*
 * task 1
 */

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: bytes volume
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)

		*(dest + a) =  *(src + a);

	return (dest);
}
