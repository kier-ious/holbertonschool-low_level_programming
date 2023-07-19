#include "lists.h"
/**
 * add_dnodeint - adds node at the head of DLL
 * @head: head of the linked list
 * @n: value to add to the list
 * Return: & of new node, return NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp; /* tmp pointer to var */

	tmp = *head; /* store current head in tmp */
	tmp = malloc(sizeof(dlistint_t)); /* allocate mem for new node */
	if (tmp == NULL)
		return (NULL);
	tmp->n = n; /* assigns value to new node */
	tmp->next = *head;
	tmp->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = tmp;
	(*head) = tmp;

	return (*head);
}
