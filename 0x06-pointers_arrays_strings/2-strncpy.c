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
	int i = 0, length = 0;
	int j = 0, len = 0;
	int destindex = 0, srcindex = 0;
	int diff;

	for (; i < *(dest + i); i++)
	{
		length++;
	}

	destindex = length;

	for (; j < *(src + j); j++)
	{
		len++;
	}

	if (len < n)
	{
		while (src[srcindex] != '\0')
		{
			dest[destindex] = src[srcindex];
			destindex++;
			srcindex++;
		}
		diff = n - len;
		while(diff != 0)
		{
			dest[destindex] = NULL;
			destindex++;
			diff--;
		}
	}
	else
	{
		while (src[srcindex] != '\0')
		{
			dest[destindex] = src[srcindex];
			destindex++;
			srcindex++;
		}
	}

	return (dest)
}
