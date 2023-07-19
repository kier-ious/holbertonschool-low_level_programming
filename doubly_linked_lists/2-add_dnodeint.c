#include "lists.h"
/**
 * add_dnodeint - adds node at the head of DLL
 * @head: head of the linked list
 * @n: value to add to the list
 * Return: pointer to the element added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp; /* temp ptr var */

	temp = *head; /* store current head in temp */

	temp = malloc(sizeof(dlistint_t)); /* allocate memory for new node */
	if (temp == NULL)
		return (NULL);

	temp->n = n; /*assigns value to new node */
	temp->prev = NULL;
	temp->next = *head;

	*head = temp; /* update head & return new node */
	return (temp);
}
