#include "main.h"

/**
 * _strlen - return length of a string
 * @s: String to be determined the length
 * Return: String length
 */

int _strlen(char *s)
{
	char a[];
	a = s;
	int i, length = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		length++;
	}
	
	return length;
}
