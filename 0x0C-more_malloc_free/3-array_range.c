#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: input min
 * @max: input max
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc(max - min + 1);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	while (min < max)
	{
		ar[i] = min;
		if (ar[i] == NULL)
		{
			return (NULL);
		}
		i++;
		min++;
	}

	return (ar);
}
