#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print \
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int s = 0;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (; s < n; s++)
		{
			do 
			{
				putchar(' ');
			}
			while (n);
			putchar('\\');
			putchar('\n');
		}
	}
}
