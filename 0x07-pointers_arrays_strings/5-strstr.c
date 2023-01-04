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
	int h = strlen(haystack), n = strlen(needle);

	for (int i = 0; i <= h - n; i++)
	{
		int j;
		
		for (j = 0; j < n; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (j == n)
			{
				return i;
			}
		}
	}

	return (NULL);
}
