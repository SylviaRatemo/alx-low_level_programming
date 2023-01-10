#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: pointer to new memory, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int len = 0, len2 = 0, i = 0, j = 0;

	while (s1[len] != 0)
	{
		len++;
	}
	len += 1;

	while (s2[len2] != 0)
	{
		len2++;
	}
	len2 += 1;

	ar = malloc((len + len2) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		ar[i] = s1[i];
		i++;
	}

	while (i < (len + len2))
	{
		ar[i] = s2[j];
		j++;
		i++;
	}
	ar[i] = '\0';

	return (ar);
}
