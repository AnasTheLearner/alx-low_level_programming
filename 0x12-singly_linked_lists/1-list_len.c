#include "lists.h"
#include <stdlib.h>

/*
 * task 1
 */

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
