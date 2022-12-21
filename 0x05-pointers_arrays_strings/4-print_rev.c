#include "main.h"
#include <stdio.h>
#include <conio.h>

/**
 * print_rev - prints a string in reverse
 * @s: String to be reversed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length, i;
	length = strlen(s);

	for (i = length; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
}
