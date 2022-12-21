#include "main.h"
#include <stdio.h>

/**
 * str_len - get length of string
 * @s: String to be measured
 * Return: length of string
 */

int str_len(char *s)
{
	int length, i;

	for (i = 0; *(s + i) != 0; i++)
	{
		length++;
	}

	return (length);
}


/**
 * print_rev - prints a string in reverse
 * @s: String to be reversed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length, i;
	char *begin, *end, ch;

	length = str_len(s);
	begin = s;
	end = s;

	for (i = 0; i length / 2; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}

	printf("%s\n", s);
}
