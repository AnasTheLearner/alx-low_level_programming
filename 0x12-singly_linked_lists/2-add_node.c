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
	list_t *lls;
	size_t chn;

	lls = malloc(sizeof(list_t));
	if (lls == NULL)
		return (NULL);

	lls->str = strdup(str);

	for (chn = 0; str[chn]; chn++)
		;

	lls->len = chn;
	lls->next = *head;
	*head = lls;

	return (*head);
}
