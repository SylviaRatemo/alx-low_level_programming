#include "main.h"

/**
 * _strchr - function to locate a character in a string
 * @s: input string
 * @c: character to search
 * Return: pointer to the first character c or NULL if no character
 */

char *_strchr(char *s, char c)
{
	int length = 0;

	for (int i = 0; *(s + i) != 0; i++)
	{
		length++;
	}
	length = length - 1;

	while (length > -1)
	{
		if (s[length] != c)
		{
			length--;
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
