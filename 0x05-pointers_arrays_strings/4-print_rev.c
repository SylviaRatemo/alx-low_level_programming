#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: String to be reversed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length, c;
	char *begin, *end, temp;

	for (int i = 0; *(s + i) != 0; i++)
	{
		length++;
	}

	begin = s;
	end = s;

	for (c = 0; c <(length - 1); c++)
	{
		end++;
	}

	for (c = 0; c < (length / 2); c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}

	print_rev(s);

	printf("%s", s);
}
