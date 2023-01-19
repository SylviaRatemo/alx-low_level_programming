#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function in parameter
 * @array: input array
 * @size: array size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
