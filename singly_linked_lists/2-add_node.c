#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adding a node to beginning of list
 * @head: OG list
 * @str: string to add to list
 * Return: & of new list or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head != NULL && str != NULL)
	{
		list_t *container = malloc(sizeof(list_t));

		if (container == NULL)
			return (NULL);

		container->str = strdup(str);
		container->len = strlen(str);
		container->next = *head;

		*head = container;
		return (container);
	}
	return (0);
}
