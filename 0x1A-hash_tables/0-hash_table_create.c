#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: pointer to new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table =  malloc(sizeof(hash_table_t));
	unsigned long int i;
	hash_node_t **a = NULL;

	if (table == NULL)
		return (NULL);

	a = malloc(sizeof(hash_node_t *) * size);
	if (a == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		a[i] = NULL;

	table->size = size;
	table->array = a;

	return (table);
}
