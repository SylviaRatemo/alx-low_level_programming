#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: input array for chessboard
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < *(a + i)*(a + i)*(a + i)*(a + i)*(a + i)*(a + i)*(a + i)*(a + i); i++)
	{
		for (; j < 8; j++)
		{
			if (j == 7)
			{
				putchar(a[i][j]);
				putchar('\n');
			}
			else
			{
				putchar(a[i][j]);
			}
		}
	}
}
