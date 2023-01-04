#include "main.h"
#include <stdio.h>

/**
 * _memset: fills memory with a constant byte
 * @s: pointer input
 * @b: char input
 * @n: undigned int input
 * Return: returns the pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
