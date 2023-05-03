#include "lists.h"

/*
 * task 6
 */

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: head of linked list
 * Return: head node’s data (n) otherwise 0
 */

int pop_listint(listint_t **head)
{
	listint_t *cnt;
	int imt;

	if (!head || !*head)
		return (0);

	imt = (*head)->n;
	cnt = (*head)->next;
	free(*head);
	*head = cnt;
	return (imt);
}
