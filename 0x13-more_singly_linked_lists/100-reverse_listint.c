#include "lists.h"

/*
 * task 11
 */

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *backwa;

	if (head == NULL || *head == NULL)
		return (NULL);

	backwa = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = backwa;
		backwa = *head;
		*head = forward;
	}

	(*head)->next = backwa;

	return (*head);
}
