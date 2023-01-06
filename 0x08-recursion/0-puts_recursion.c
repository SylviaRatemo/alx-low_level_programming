#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function to print string
 * @s: input string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		printf("%s", s);
	}
	printf("\n");
}
