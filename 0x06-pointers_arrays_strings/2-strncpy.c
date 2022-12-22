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
	char *start = dest;

	if ((dest == NULL) && (src == NULL))
	{
		return NULL;
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
