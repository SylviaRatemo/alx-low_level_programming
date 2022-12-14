#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function 2 dimensional array of int
 * @width: width of array
 * @height: height of array
 * Return: Null on error or failure
 */

int **alloc_grid(int width, int height)
{
	int **arr, i = 0, j = 0, k = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}

	for (; j < height; j++)
	{
		for (; k < width; k++)
			arr[j][k] = 0;
	}

	return (arr);
}
