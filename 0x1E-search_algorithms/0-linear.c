#include "search_algos.h"

/**
 * linear_search: fn to search val in array
 * @array: input array
 * @size: number of elements
 * @value: search item
 * Return: index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array) { return (-1); }
	for (; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
