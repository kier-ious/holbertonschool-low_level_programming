#include "lists.h"
/**
 * list_len - printing list length
 * @h: linked list
 * Return: number of nodes in a list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
