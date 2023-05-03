#include "lists.h"

/*
 * task 9
 */

/**
 * insert_nodeint_at_index - inserts a new
 * node at a given position
 * @head: headof the node
 * @idx: index of the list where the new
 * node should be added
 * @n: int
 * Return: the address of the new node
 * or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *cnt;
	listint_t *imt = *head;
	unsigned int a;

	cnt = malloc(sizeof(listint_t));
	if (!cnt || !head)
		return (NULL);

	cnt->n = n;
	cnt->next = NULL;

	if (idx == 0)
	{
		cnt->next = *head;
		*head = cnt;
		return (cnt);
	}

	for (a = 0; imt && a < idx; a++)
	{
		if (a == idx - 1)
		{
			cnt->next = imt->next;
			imt->next = cnt;
			return (cnt);
		}
		else
			imt = imt->next;
	}
	return (NULL);
}
