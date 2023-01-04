#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination array
 * @char: input to copy
 * @n: input size
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
