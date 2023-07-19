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
	if (!new) /* check if malloc was successful */
		return (NULL);
	new->n = n; /* set value of new node */
	new->next = NULL; /* set next ptr of new node to NULL */
	if (!*head) /* check if list is empty */
	{
		new->prev = NULL; /* set prev ptr of new node to NULL */
		*head = new; /* set head ptr to new node */
		return (*head); /* return new node */
	}
	tmp = *head; /* set tmp ptr to traverse thru list */
	while (tmp->next) /* find last node in list */
		tmp = tmp->next;
	tmp->next = new; /* set the ptr of that last node to the new node */
	tmp->prev = *head; /* se prev ptr of new node to the current head */
	return (tmp); /* last node (newest added) */
}
