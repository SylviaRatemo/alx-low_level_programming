#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array input
 * @n: number of elements of the array
 * Returns: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}	
