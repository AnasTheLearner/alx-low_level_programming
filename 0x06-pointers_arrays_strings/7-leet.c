#include "main.h"

/*
 * task 7
 */

/**
 * leet - encodes a string in 1337
 * @s: the string
 * Return: encoded string
 */

char *leet(char *s)
{
	int e, f;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (e = 0; s[e] != '\0'; e++)
	{
		for (f = 0; f < 10; f++)
		{
			if (s[e] == a[f])
			{
				s[e] = b[f];
			}
		}
	}

	return (s);
}
