#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: String to be reversed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length, i;

	for (i = 0; *(s + i) != 0; i++)
	{
		length++;
	}

	for (i = length; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
}
