#include "lists.h"
/**
  * free_dlistint - frees a linked list
  * @head: head of the list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp; /* create a temp var to store node to be freed */

	while (head) /* iterate until head becomes NULL */
	{
		tmp = head; /* assign current head to tmp */
		head = head->next; /* move the head to the next node */
		tmp->prev = NULL; /* set prev ptr of tmp to NULL */
		tmp->next = NULL; /* set nxt ptr of tmp to NULL */
		free(tmp); /* free mem occupied by tmp */
	}
}
