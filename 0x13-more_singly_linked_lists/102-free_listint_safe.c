#include "lists.h"

/*
 * task 13
 */

/**
 * free_listint_safe - frees a listint_t list
 * @h: head of the list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t sz = 0;
	int comp;
	listint_t *prov;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		comp = *h - (*h)->next;
		if (comp > 0)
		{
			prov = (*h)->next;
			free(*h);
			*h = prov;
			sz++;
		}
		else
		{
			free(*h);
			*h = NULL;
			sz++;
			break;
		}
	}
	*h = NULL;
	return (sz);
}
