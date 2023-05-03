#include "lists.h"

/*
 * task 2
 */

/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list
 * @head: pointer
 * @n: number
 * Return: the address of the new element
 * or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cnt;

	new = malloc(sizeof(listint_t));
	if (!cnt)
		return (NULL);

	cnt->next = *head;
	cnt->n = n;
	*head = cnt;

	return (cnt);
}
