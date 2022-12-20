#include  "main.h"

/**
 * swap_int - swap two integer values
 * @a: First integer
 * @b: Second intege
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
