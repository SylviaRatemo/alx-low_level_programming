#include "main.h"

/**
 * _strspn - function to get length of a prefic substring
 * @s: input string
 * @accept: input check string
 * Return: returns number if bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, size = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					size++;
				}
				i++;
			}
		}
		else
		{
			return (size);
		}
	}
	return (size);
}
