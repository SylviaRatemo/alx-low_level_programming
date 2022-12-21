#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: String to be reversed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		printf("%d",s[n]);
	}
	printf("\n");
}
