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

	if (head == NULL && str == NULL)
		return (NULL);
	a = malloc(sizeof(list_t));
	if(a == NULL)
	{
		free(a);
		return (NULL);
	}
	a->str = strdup(str);
	if (a->str == NULL)
	{
		free(a);
		return (NULL);
	}
	a->len = strlen(a->str);
	a->next = *head;
	*head = a;
	return (a);
}
