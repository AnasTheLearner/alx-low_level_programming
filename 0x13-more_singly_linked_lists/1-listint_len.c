#include "lists.h"

/*
 * task 1
 */

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: linked list
 * Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
