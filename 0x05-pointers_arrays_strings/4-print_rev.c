#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: String to be reversed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0, length = strlen(s), temp;

	for (; i < length/2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[len - i - 1] = temp;
	}

	printf("%s", s;
}	
