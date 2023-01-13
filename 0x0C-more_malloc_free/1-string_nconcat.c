#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: max length
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, len = 0, j = 0;

	while (*(s1 + i) != '\0')
	{
		len++;
		i++;
	}

	s1 = malloc(len + n);
	if (s1 == NULL)
	{
		return (NULL);
	}

	for (; *(s2 + j) != '\0' && j < n; j++)
	{
		s1[len] = s2[j];
		if (s1[len] == NULL)
		{
			free(s1);
			return (NULL);
		}
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
