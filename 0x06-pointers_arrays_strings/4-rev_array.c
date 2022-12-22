#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array input
 * @n: number of elements of the array
 * Returns: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, b[n];

	for (; i < n; i++)
	{
		b[i] = a[n];
		n--;
	}
	a = b;
}	
