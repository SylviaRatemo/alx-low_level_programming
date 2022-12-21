#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print \
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i = 0, s = 0;

	for (; s <= n; s++)
	{
		putchar(' ');
		for (; i <= n; i++)
		{
			putchar('\\');
			putchar('$');
		}
	}
}
