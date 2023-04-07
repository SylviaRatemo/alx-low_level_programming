#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
	unsigned long int i;

	if(size == 0)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t*)*size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	
	for(i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
