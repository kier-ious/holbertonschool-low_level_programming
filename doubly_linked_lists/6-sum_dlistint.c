#include "lists.h"
/**
  * sum_dlistint - sums all nodes in a linked list
  * @head: head of the list
  * Return: the sum of the nodes
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current; /* ptr to traverse in list */
	int sum; /* var to store sum of ints in list */

	if (head == NULL) /* if head is NULL return 0 */
		return (0);
	current = head; /* start from the head of the list */
	sum = 0; /* intitialize sum to 0 */

	while (current != NULL) /* loop until head pointer is NULL */
	{
		sum += current->n; /* add value of current node to sum */
		current = current->next; /* move head ptr to the nxt node */
	}
	return (sum);
}
