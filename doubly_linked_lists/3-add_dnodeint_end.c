#include "lists.h"
/**
  * *add_dnodeint_end - add a node to the end of the list
  * @head: head of the list
  * @n: value to add to the l
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t)); /* allocate mem for new node */
	if (new == NULL) /* check if malloc was successful */
		return (NULL);

	new->n = n; /* set value of new node */
	new->next = NULL; /* set next ptr of new node to NULL */

	if (*head == NULL) /* check if list is empty */
	{
		*head  = new; /* set prev ptr of new node to NULL */
		return (*head); /* return new node */
	}

	tmp = *head; /* set tmp ptr to traverse thru list */
	while (tmp->next != NULL) /* find last node in list */
	{
		tmp = tmp->next;
	}
	tmp->next = new; /* set the ptr of that last node to the new node */
	new->prev = tmp; /* se prev ptr of new node to the current head */
	return (*head); /* last node (newest added) */
}
