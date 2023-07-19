#include "lists.h"
/**
  * print_dlistint - prints a doubly linked list
  * @h: Head of the list
  * Return: Number of items in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i; /* var to keep track of # of items in list */

	for (i = 0; h; i++) /* loop thru list until reaching end, h = NULL */
	{
		printf("%d\n", h->n); /* print value stored in current node */
		h = h->next; /* move to next node in the list */
	}
	return (i); /* return final # of items in list */
}
