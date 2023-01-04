#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: input string
 * @accept: input search string
 * Return: pointer to byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
