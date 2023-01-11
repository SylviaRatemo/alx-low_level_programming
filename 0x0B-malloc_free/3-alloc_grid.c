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
	int **arr, i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * width);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (; i < width; i++)
	{
		arr[i] = malloc(sizeof(int *) * height * height * height * height * height * height * height * height);
	}

	return (arr);
}
