#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: inputs square size
 * Return: Nothing
 */

void print_square(int size)
{
	int i = 0;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (; i < size; i++)
		{
			putchar('#');
			for (; i < size; i++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
