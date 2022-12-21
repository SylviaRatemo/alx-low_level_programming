#include "main.h"

/**
 * *_strcpy - copies the tring pointed to by src
 * @dest: input buffer
 * @src: input string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	for (i = 0; *(src + i) != 0; i++)
	{
		do
		{
			dest[length] = src[length];
		}
		while (src[length] != 0);
		length++;
	}

	return (dest);
}
