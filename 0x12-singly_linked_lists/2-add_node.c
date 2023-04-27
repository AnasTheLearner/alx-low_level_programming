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
	list_t *lis;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!lis)
		return (NULL);

	lis->str = strdup(str);
	lis->len = len;
	lis->next = (*head);
	(*head) = lis;

	return (*head);
}
