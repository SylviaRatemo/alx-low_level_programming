#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory of an array
 * @nmemb: elements of an arrary
 * @size: size of elements
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = (int*)calloc(nmemb, size);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	free(ar);
	return (ar);
}
