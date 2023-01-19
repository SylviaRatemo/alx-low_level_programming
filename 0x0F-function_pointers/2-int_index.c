#include "function_pointers.h"

/**
 * int_index - searches integer
 * @array: array input
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
