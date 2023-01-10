#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an arra of chars
 * @size: input size of array
 * @c: input char for initialization
 * Return: NULL is size is 0 or it fails, pointer to array 
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc (size * sizeof(char));

	while (size != 0)
	{
		ar[size] = c;
		size++;
	}

	return (ar);
}
