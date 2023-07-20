#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a node at an index
  * @h: double pointer to a linked list
  * @idx: where to add the node
  * @n: value of the node
  * Return: pointer to the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t)); /* allocate new mem for new node */
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *h; /* check if list is empty */
	if (!tmp)
	{
		new->prev = NULL; /* if the list is empty set the new */
		new->next = NULL;	/* node as only node in list */
		*h = new;
		return (new);
	}
	if (idx == 0) /* check if new node should be insert at beginning */
	{
		new->prev = NULL; /* insert at beginning and update pts */
		new->next = tmp;
		tmp->prev = new;
		*h = new;
		return (new);
	}
	for ( ; idx > 1 && tmp->next; idx--) /* traverse list to find */
		tmp = tmp->next;		/* node at end (idx -1) */
	if (idx > 1 && !tmp->next) /* if loop terms due to */
		return (NULL);		/*reaching end b4 desired index */
						/* index is out of bounds & new node can't be inserted */

	new->prev = tmp; /* insert new node between tmp & tmp->next */
	new->next = tmp->next ? tmp->next : NULL; /* if tmp->next is NULL */
							/* new node becomes last */
	if (tmp->next)
		tmp->next->prev = new; /* update prev ptr of node after tmp */
	tmp->next = tmp->next && idx > 1 ? NULL : new; /* update the nxt ptr */
							/* of node if necessary */
	return (new);
}
