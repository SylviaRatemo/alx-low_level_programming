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
	void *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(nmemb) * size);
	if (ar == NULL)
	{
		return (NULL);
	}

	return (ar);
}
