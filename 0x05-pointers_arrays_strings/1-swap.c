#include "main.h"

/*
 * task 1
 */

/**
 * swap_int - swaps the values of two int
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
