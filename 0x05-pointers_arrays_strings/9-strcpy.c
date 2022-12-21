#include "main.h"

/**
 * *_strcpy - copies the tring pointed to by src
 * @dest: input buffer
 * @src: input string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	do
	{
		dest[index] = src[index];
		index++;
	}
	while (src[index] != 0);

	return (dest);
}
