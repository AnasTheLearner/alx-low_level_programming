#include "lists.h"

/*
 * task 14
 */

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the list
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rip = head;
	listint_t *rop = head;

	if (!head)
		return (NULL);

	while (rip && rop && rop->next)
	{
		rop = rop->next->next;
		rip = rip->next;
		if (rop == rip)
		{
			rip = head;
			while (rip != rop)
			{
				rip = rip->next;
				rop = rop->next;
			}
			return (rop);
		}
	}
	return (NULL);
}
