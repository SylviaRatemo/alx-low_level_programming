#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: input string
 * @accept: input search string
 * Return: pointer to byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int flag;

	while (*s != '\0')
	{
		flag = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
			{
				flag = 1;
			}
			j++;
		}
		j = 0;
		if (flag == 1)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
