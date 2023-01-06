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

	if (length = 0)
	{
		printf("\n");
	}
	printf("%d", s[length - 1]);
	length--;
	_print_rev_recursion(s);
}
