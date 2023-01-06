#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev_recursion - prints a string in reverse
 * @s: input string
 * Returns: Nothing
 */

void _print_rev_recursion(char *s)
{
	int i = 0, length;
	if (*(s + i) != 0)
	{
		length = strlen(s);
	}

	if (*(s + i) == 0)
	{
		printf("\n");
	}

	printf("%c", s[length - 1]);
	length--;
	_print_rev_recursion(s);
}
