#include "lists.h"

/*
 * task 4
 */

/**
 * free_listint - frees a listint_t list
 * @head: list to free
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *cnt;

	while (head)
	{
		cnt = head->next;
		free(head);
		head = cnt;
	}
}
