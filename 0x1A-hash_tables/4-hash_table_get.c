#include "hash_tables.h"

/**
 * hash_table_get - retrieve value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: value, NULL if no key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				return (temp->value);
			}
			temp = temp->next;
		}
	}
	return (NULL);
}
