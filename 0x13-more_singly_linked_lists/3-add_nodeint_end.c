#include "lists.h"

/*
 * task3
 */

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list
 * @head: pointer to the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cnt;
	listint_t *imt = *head;

	cnt = malloc(sizeof(listint_t));
	if (!cnt)
		return (NULL);

	cnt->n = n;
	cnt->next = NULL;
	if (*head == NULL)
	{
		*head = cnt;
		return (cnt);
	}

	while (imt->next)
		imt = imt->next;

	imt->next = cnt;

	return (cnt);
}
