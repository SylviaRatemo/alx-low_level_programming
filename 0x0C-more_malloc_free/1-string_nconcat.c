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
	int i = 0, k = 0, len = 0, len2 = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len) != '\0')
	{
		len++;
	}

	while (*(s2 + len2) != '\0')
	{
		len2++;
	}

	if (n > len2)
		n = len2;
	
	s1 = malloc(len + n + 1);
	if (s1 == NULL)
	{
		return (NULL);
	}

	for (; *(s2 + j) != '\0' && j < n; j++)
	{
		s1[len] = s2[j];
		if (s1 == NULL)
		{
			free(s1);
			return (NULL);
		}
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
