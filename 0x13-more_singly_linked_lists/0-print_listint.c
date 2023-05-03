#include "lists.h"

/*
 * task 0
 */

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list to print
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t ab = 0;

	while (h)
	{
		printf("%d\n", h->n);
		ab++;
		h = h->next;
	}
	return (ab);
}
