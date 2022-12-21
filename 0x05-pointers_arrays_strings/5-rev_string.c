#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: input char/string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = 0, length = 0;
	char *begin, *end, ch;

	for (; *(s + i) != 0; i++)
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
}
