#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: final string
 * @src: source string
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;
	int destindex = 0, srcindex = 0;

	for (; i < *(dest + i); i++)
	{
		length++;
	}

	destindex = length - 1;

	while (src[srcindex])
	{
		dest[destindex] = src[srcindex];
		destindex++;
		srcindex++;
	}

	return dest;
}
