#include "lists.h"
/**
 * print_list - print list
 * @h: a linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t ct = 0;

	for (; h != NULL; h = h->next)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
		ct++;
	}
	return (ct);
}
