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
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		printf("%s", _print_rev_recursion(s));
	}
}
