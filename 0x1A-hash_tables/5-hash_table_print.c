#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int count;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0, count = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			if (count == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}
			count = 1;
		}
	}
	printf("}\n");
}
