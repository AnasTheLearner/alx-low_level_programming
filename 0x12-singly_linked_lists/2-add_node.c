#include "lists.h"
/*
 * task 2
 */

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: pointer to the list_t
 * @str: string
 * Return: address of the new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *b;
	char *a;
	int l;

	b = malloc(sizeof(list_t));
	if (b == NULL)
		return (NULL);

	a = strdup(str);
	if (a == NULL)
	{
		free(b);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	b->str = a;
	b->l = l;
	b->next = *head;
	*head = b;
	return (new);
}
