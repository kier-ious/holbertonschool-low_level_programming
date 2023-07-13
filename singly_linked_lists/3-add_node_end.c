#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node_end - adding a node to the end of a string
 * @head: OG linked list
 * @str: string to add node
 * Return: & of new node or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
		current->next = new;
	return (*head);
}
