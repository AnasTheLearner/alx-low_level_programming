#include "lists.h"

/*
 * task 4
 */

/**
 * free_list - frees a linked list
 * @head: head of list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *lls;

	while ((lls = head) != NULL)
	{
		head = head->next;
		free(lls->str);
		free(lls);
	}
}
