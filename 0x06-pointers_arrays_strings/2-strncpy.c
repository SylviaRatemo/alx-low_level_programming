#include "main.h"

/**
 * _strncpy - copies a string
 * @dest:pointer to destination array
 * @src: string to copy
 * @n: number of characters to be copied
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, length = 0, diff = 0;
	
	for (; i < *(dest + i); i++)
	{
		length++;
	}

	diff = length - n;

	while (*src && n-- > 0)
	{
		*dest++ = *src++;
	}

	while (diff-- > 0)
	{
		*dest++;
	}

	*dest = '\0';

	return (dest);
}
