#include "main.h"

/**
 * _strspn - function to get length of a prefic substring
 * @s: input string
 * @accept: input check string
 * Return: returns number if bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, size = 0;

	while (*s)
	{
		if (s[i] == accept[i])
		{
			size++;
		}
		i++;
	}
	
	return (size);
}
