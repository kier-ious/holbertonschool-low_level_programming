#include "lists.h"
/**
  * sum_dlistint - sums all nodes in a linked list
  * @head: head of the list
  * Return: the sum of the nodes
  */
int sum_dlistint(dlistint_t *head)
{
	int sum; /* var to store sum of nodes */

	while (head) /* loop until head pointer is NULL */
	{
		sum += head->n; /* add value of current node to sum */
		head = head->next; /* move head ptr to the nxt node */
	}
	return (sum);
}
