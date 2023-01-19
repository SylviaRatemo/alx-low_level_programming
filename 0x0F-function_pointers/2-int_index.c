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
		cmp(array[i]);
		i++;
	}
	if (cmp(array[i]) == 0)
		return (-1);
	return (i);
}
