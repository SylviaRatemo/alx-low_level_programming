#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *old;
	unsigned long int i;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			old = temp;
			temp = temp->next;
			free(old->key);
			free(old->value);
			free(old);
		}
	}
	free(ht->array);
	free(ht);
}
