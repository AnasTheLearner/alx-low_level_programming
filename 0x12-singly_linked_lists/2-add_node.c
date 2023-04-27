#include "lists.h"
#include <stdlib.h>
#include <string.h>

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
	list_t *a;
	unsigned int b = 0;

	while (str[b])
		b++;

	new = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->b = b;
	a->next = (*head);
	(*head) = a;

	return (*head);
}
