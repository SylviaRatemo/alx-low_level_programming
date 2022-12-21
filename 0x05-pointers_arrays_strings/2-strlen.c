#include "main.h"

/**
 * _strlen - return length of a string
 * @s: String to be determined the length
 * Return: String length
 */

int _strlen(char *s)
{
	int i = 0, length = 0;

	for (; *(s + i) != 0; i++)
	{
		length++;
	}
	return (length);
}
