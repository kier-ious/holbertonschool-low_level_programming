#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes a node at an index
  * @head: double pointer to the head of the list
  * @index: index of the node to delete
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_del, *tmp_head; /* tmp ptrs for traverse'n and dlt */

	if (!head || !*head) /* check if head or list is empty */
		return (-1);
	tmp_head = *head; /* store head node in tmp ptr */
	if (index == 0) /* if index is 0 delete 1st node */
	{
		*head = (*head)->next; /* move the head to the next node */
		(*head)->prev = NULL; /* update new head's ptr to NULL */
		free(tmp_head); /* free mem of old head */
		return (1);
	}
	/* traverse the list to find node b4 one to delete */
	for ( ; index > 1 && tmp_head && tmp_head->next; index--)
		tmp_head = tmp_head->next;

	/* check if target index is out of range */
	if (!tmp_head->next)
		return (-1);

	/* store node 2b deleted in tmp_del */
	tmp_del = tmp_head->next;
	/* update prev node nxt ptr */
	tmp_head->next = tmp_del->next ? tmp_del->next : NULL;

	/* update prev nodes prev ptr if tmp_del has nxt node */
	if (tmp_del->next)
		tmp_del->next->prev = tmp_head;

	/* free mem of node 2b deleted */
	free(tmp_del);
	return (1);
}
