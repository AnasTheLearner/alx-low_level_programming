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
	listint_t *cnt = NULL;
	listint_t *imt = NULL;

	while (*head)
	{
		imt = (*head)->imt;
		(*head)->imt = cnt;
		cnt = *head;
		*head = imt;
	}

	*head = cnt;
	return (*head);
}
