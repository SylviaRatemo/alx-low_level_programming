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
	int i, length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		printf("%s", s[length - 1], _print_rev_recursion(s));
	}
}
