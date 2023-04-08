#include "hash_tables.h"

/**
 * key_index - returns index of key
 * @key: the key
 * @size: size of array of hash table
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int key_index = hash_djb2(key) % size;

	return (key_index);
}
