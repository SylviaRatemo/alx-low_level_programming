#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to be updated
 * @key: the key
 * @value: value linked with key
 * Return: 1 if success, o if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[i] != NULL)
		new_node->next = ht->array[i];

	ht->array[i] = new_node;

	return (1);
}
