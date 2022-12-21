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

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	
	return (dest);
}
