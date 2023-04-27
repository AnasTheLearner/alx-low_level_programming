#include "lists.h"

/*
 * task 0
 */

/**
 * print_list - prints all the elements of a linked list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t ndes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		ndes++;
	}
	return (ndes);
}
