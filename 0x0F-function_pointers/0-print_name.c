#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/*
 * task 0
 */

/**
 * print_name - print a name
 * @name: string
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
