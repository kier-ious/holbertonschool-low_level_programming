#include "lists.h"
/**
  * *get_dnodeint_at_index - gets the node at an index
  * @head: head of the list
  * @index: index to get
  * Return: pointer to the index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for ( ; index > 0 && head->next; index--) /* loop thru list until desired */
							/* index is reach or NULL */
		head = head->next; /* assigns value to head */
					/* and points to nxt node */
	return (index > 0 ? NULL : head); /* return NULL if desired */
						/* index is greater than list length */
}
