#include "main.h"
#include <stdio.h>

/**
 * print_rev_recursion - prints a string in reverse
 * @s: input string
 * Returns: Nothing
 */

void _print_rev_recursion(char *s)
{
	int length, i = 0;
	for (; (*(s + i) != 0); i++)
	{
		length++;
	}

	if (length != 0)
	{
		printf("%s", s[length - 1], _print_rev_recursion(s[length - 2]));
		length--;
	}
}
