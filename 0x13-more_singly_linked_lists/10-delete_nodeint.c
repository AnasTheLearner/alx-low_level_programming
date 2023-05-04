#include "lists.h"

/*
 * task 10
 */

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: head to the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *cnt = *head;
	listint_t *right = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cnt);
		return (1);
	}
	while (a < index - 1)
	{
		if (!cnt || !(cnt->next))
			return (-1);
		cnt = cnt->next;
		a++;
	}
	right = cnt->next;
	cnt->next = right->next;
	free(right);
	return (1);
}
