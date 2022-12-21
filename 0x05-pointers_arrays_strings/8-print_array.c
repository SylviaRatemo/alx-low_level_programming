#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements if an array of integers
 * @a: array input
 * @n: number of elements in array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		printf("\n");
	}
}
