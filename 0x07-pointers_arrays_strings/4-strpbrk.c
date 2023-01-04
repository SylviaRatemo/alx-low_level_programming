#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: input string
 * @accept: input search string
 * Return: pointer to byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	int pos = 0, flag = 0;

	while (*(s + i))
	{
		i++;
	}

	pos = i;

	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (s[i] == accept[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
			j++;
		}
		i++;
	}
	
	if (flag == 1)
	{
		return (&s[pos]);
	}
	return (NULL);
}
