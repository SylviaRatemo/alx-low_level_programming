#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updae value of pointer to 98
 * @*n: pointer that will be changed
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - check code
 * Return: Always 0;


int main(void)
{
	int n;

	n = 402;

	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);

	return (0);
}
*/
