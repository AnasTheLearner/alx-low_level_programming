#include "lists.h"

/*
 * task 12
 */

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *apt = NULL;
	const listint_t *bpt = NULL;
	size_t clock = 0;
	size_t finl;

	apt = head;
	while (apt)
	{
		printf("[%p] %d\n", (void *)apt, apt->n);
		clock++;
		apt = apt->next;
		bpt = head;
		finl = 0;
		while (finl < clock)
		{
			if (apt == bpt)
			{
				printf("-> [%p] %d\n", (void *)apt, apt->n);
				return (clock);
			}
			bpt = bpt->next;
			finl++;
		}
		if (!head)
			exit(98);
	}

	return (clock);
}
