#include "lists.h"

/*
 * task 8
 */

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list
 * @head: head of the node
 * Return: sum or 0 if list empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		head = head->next;
		sum = sum + head->n;
	}

	return (sum);
}
