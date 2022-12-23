#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array input
 * @n: number of elements of the array
 * Returns: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, j , temp;

	for (; i < n / 2; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (i - 1)) = temp;
		}
	}
}	
