#include "lists.h"

/*
 * task 7
 */

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head the linked list
 * @index: index of the node
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *cnt = head;

	while (cnt && a < index)
	{
		cnt = cnt->next;
		a++;
	}
	return (cnt ? cnt : NULL);
}
