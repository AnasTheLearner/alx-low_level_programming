#include "main.h"
#include <stdlib.h>

/*
 * task 5
 */

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: first arguments
 * @av: second arguments
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *s;

	int a, b, d, e = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)

	{
		for (b = 0; av[a][b]; b++)
			e++;
	}

	s = malloc(sizeof(char) * e + 1);

	if (s == NULL)
		return (NULL);

	d = 0;

	for (a = 0; a < ac; a++)

	{
		for (b = 0; av[a][b]; b++)
			s[d++] = av[a][b];

		s[d++] = '\n';
	}

	s[e] = '\0';

	return (s);
}
