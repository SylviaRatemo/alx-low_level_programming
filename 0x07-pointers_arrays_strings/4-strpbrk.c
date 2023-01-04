#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: input string
 * @accept: input search string
 * Return: pointer to byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++
	}
	return ('\0');
}
