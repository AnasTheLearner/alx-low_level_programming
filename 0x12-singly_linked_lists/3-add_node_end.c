#include "lists.h"

/*
 * tsak 3
 */

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to the list
 * @str: string
 * Return: address of the new element or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lls;
	list_t *tts;
	size_t chr;

	lls = malloc(sizeof(list_t));
	if (lls == NULL)
		return (NULL);

	lls->str = strdup(str);

	for (chr = 0; str[chr]; chr++)
		;

	lls->len = chr;
	lls->next = NULL;
	tts = *head;

	if (tts == NULL)
	{
		*head = lls;
	}
	else
	{
		while (tts->next != NULL)
			tts = tts->next;
		tts->next = lls;
	}

	return (*head);
}
