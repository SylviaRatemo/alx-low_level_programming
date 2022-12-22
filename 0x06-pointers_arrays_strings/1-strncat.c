#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: resulting string
 * @src: source string
 * @n: size of src
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;
	int destindex = 0, srcindex = 0;

	for (; i < *(dest + i); i++)
	{
		length++;
	}

	destindex = length;

	while (src[srcindex] != '\0')
	{
		dest[destindex] = src[srcindex];
		destindex++;
		srcindex++;
	}

	dest[destindex] = '\0';

	return (dest);
}
