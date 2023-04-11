#include "main.h"
#include <stdlib.h>

/*
 * task 2
 */

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer if not return null
 */

char *str_concat(char *s1, char *s2)
{
	char *cs;
	int a, b = 0, d = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		d++;

	cs = malloc(sizeof(char) * d);

	if (cs == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		cs[b++] = s1[a];

	for (a = 0; s2[a]; a++)
		cs[b++] = s2[a];

	return (cs);
}
