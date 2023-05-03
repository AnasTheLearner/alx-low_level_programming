#include "lists.h"

/*
 * task 5
 */

/**
 * free_listint2 - frees a listint_t list
 * @head: list to free
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *cnt;

	if (head == NULL)
		return;

	while (*head)
	{
		cnt = (*head)->next;
		free(*head);
		*head = cnt;
	}
	*head = NULL;
}
