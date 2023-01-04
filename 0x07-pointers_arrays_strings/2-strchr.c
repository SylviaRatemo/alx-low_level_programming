#include "main.h"

/**
 * _strchr - function to locate a character in a string
 * @s: input string
 * @c: character to search
 * Return: pointer to the first character c or NULL if no character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
