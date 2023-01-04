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
	
	for (int = 0; *(s + i) != 0; i++)
	{
		length++;
	}
	if (length != 0)
	{
		for (int j = 0; j < length; j++)
		{
			if (s[j] == c)
			{
				return (s);
			}
		}
	}
	else
	{
		return (NULL);
	}
}
