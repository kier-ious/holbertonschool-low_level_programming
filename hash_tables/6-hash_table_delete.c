#include "hash_tables.h"
/**
  * hash_table_delete - delete the whole hash table
  * @ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	/* check is HT is NULL */
	if (ht == NULL)
		return;

	/* loop thru each index of the array */
	for (i = 0; i < ht->size; i++)
	{
		/* check if current index isn't empty */
		if (ht->array[i] != NULL)
		{
			/* free all nodes in LL @ current index */
			printf("First for loop\n");
			while (ht->array[i])
			{
				printf("Freeing\n");
				tmp = ht->array[i];
				/* free mem for the key & set to NULL */
				free(tmp->key);
				tmp->key = NULL;
				/* free mem for the value and set to NULL */
				free(tmp->value);
				tmp->value = NULL;
				/* move to the next node in the LL */
				ht->array[i] = ht->array[i]->next;
				/* free current node */
				free(tmp);
				tmp = NULL;
			}
		}
	}
	/* free the array of the HT and set to NULL */
	free(ht->array);
	ht->array = NULL;
	/* free HT itself and set to NULL */
	free(ht);
	ht = NULL;
	printf("Leaving\n");
}
