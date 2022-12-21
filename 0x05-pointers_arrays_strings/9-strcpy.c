#include "main.h"

/**
 * *_strcpy - copies the tring pointed to by src
 * @dest: input buffer
 * @src: input string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	*dest ^= *src;
	*src ^= *dest;
	*dest ^= *src;

	return (dest);
}
