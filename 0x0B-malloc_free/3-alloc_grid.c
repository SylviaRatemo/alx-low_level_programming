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
	int arr[width][height];

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(arr));
	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
