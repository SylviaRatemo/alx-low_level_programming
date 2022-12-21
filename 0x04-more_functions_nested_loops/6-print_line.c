#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straightline
 * @n: input times to draw _
 * Return: Nothing
 */

void print_line(int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		else if (n == i)
		{
			putchar('_');
			putchar('\n');
		}
		else
		{
			putchar('_');
		}
	}
}
