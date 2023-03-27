#include "main.h"

/*
 * task 6
 */

/**
 * puts2 - print one char out of 2 of a string
 *         folowed by a new line
 * @str: the string
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
