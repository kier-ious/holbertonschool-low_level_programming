#include "lists.h"
/**
 * dlistint_len - Gets length of list
 * @h: head of the list
 * Return: return the # items in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i; /* counter var for # of items */

	for (i = 0; h; i++) /* iterate thru list until NULL is reached */
		h = h->next; /* move to the next node */
	return (i); /* return count in list */
}
