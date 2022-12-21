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
	char *begin, *end, ch;

	for (i = 0; *(s + i) != 0; i++)
	{
		length++;
	}

	begin = s;
	end = s;

	for (i = 0; i < length - 1; i++)
	{
		end++;
	}

	for (i = 0; i < length / 2; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}

	printf("%s\n", s);
}
