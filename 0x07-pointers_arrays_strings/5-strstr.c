#include "main.h"

/*
 * task 5
 */

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: pointer to the string
 * @needle: pointer to the string for characters to find a match for
 * Return: pointer to the beginning of matched, if not return 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *x, *y;

	while (*haystack)
	{
		x = needle;

		for (y = haystack; *y && *y == *x; y++)
		{
			if (*x && *y == *x)
				x++;
		}

		if (!(*x))
			return (haystack);

		haystack++;
	}

	return (0);
}
