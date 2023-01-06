#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 * Returns: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
		return;
	printf("%c", *s);
}
