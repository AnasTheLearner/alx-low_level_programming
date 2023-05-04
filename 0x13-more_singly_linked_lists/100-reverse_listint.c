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
	listint_t *back = NULL;
	listint_t *forward = NULL;

	while (*head)
	{
		forward = (*head)->forward;
		(*head)->forward = back;
		back = *head;
		*head = forward;
	}

	*head = back;
	return (*head);
}
