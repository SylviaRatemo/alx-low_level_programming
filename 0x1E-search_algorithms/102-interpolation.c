#include "search_algos.h"

/**
 * interpolation_search - fn for jump search
 * @array: input array
 * @size: number of elements
 * @value: search item
 * Return: index of value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		i = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
		if (i >= size)
		{
			printf("Value checked array[%lu] is out of range\n", i);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
