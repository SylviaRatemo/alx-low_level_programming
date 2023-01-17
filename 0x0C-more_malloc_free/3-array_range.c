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

	ar = malloc(sizeof(*ar) * (max - min + 1));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	while (min < (max + 1))
	{
		ar[i] = min;
		i++;
		min++;
	}

	return (ar);
}
