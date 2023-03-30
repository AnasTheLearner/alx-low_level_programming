#include "main.h"
#include <stdio.h>

/*
 * task 12
 */

/**
 * print_line - print a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer
 * @l: line of buffer
 * Return: nothing
 */

void print_line(char *c, int s, int l)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		if (a <= s)
			printf("%02x", c[l * 10 + a]);
		else
			printf("  ");
		if (a % 2)
			putchar(' ');
	}
	for (b = 0; b <= s; b++)
	{
		if (c[l * 10 + b] > 31 && c[l * 10 + b] < 127)
			putchar(c[l * 10 + b]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - print a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int y;

	for (y = 0; y <= (size - 1) / 10 && size; y++)
	{
		printf("%08x: ", y * 10);
		if (y < size / 10)
		{
			print_line(b, 9, y);
		}
		else
		{
			print_line(b, size % 10 - 1, y);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
