#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: input string
 * @accept: input search string
 * Return: pointer to byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*(accept + i) != '\0')
	{
		while (*(s + i) != '\0')
		{
			if (s[i] == accept[i])
			{
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
