#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: input b
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	int *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
