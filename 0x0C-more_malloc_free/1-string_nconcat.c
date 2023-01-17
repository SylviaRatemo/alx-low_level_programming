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
	char *ar;
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
	
	ar = malloc(len + n + 1);
	if (ar == NULL)
	{
		return (NULL);
	}

	for (; j < (len + n + 1); j++)
	{
		if (j < len)
			ar[j] = s1[j];
		else
			ar[j] = s2[j - len];
	}
	ar[j] = '\0';
	return (ar);
}
