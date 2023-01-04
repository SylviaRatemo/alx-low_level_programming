#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: reference string
 * @needle: input string
 * Return: a pointer to he start of the substring found, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, s = 0;

	while (needle[s] != '\0')
	{
		s++;
	}

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != s)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}

	return (NULL);
}
