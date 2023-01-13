#include "main.h"
#include <stdlib.h>

/**
 * realloc - reallocates memory block
 * @ptr: memory pointer
 * @old_size: input old
 * @new_size: input new
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		return (ptr);
	}
}
