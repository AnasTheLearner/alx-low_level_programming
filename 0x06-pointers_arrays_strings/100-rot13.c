#include "main.h"

/*
 * task 8
 */

/**
 * rot13 - encode the string in rot13
 * @s: the string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int e, f;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (e = 0; s[e] != '\0'; e++)
	{
		for (f = 0; a[f] != '\0'; f++)
		{
			if (s[e] == a[f])
			{
				s[e] = b[f];
				break;
			}
		}
	}

	return (s);
}
