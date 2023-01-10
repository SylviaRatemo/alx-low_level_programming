#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns pointer to newly allocated space in memory
 * @str: input string array
 * Return: NULL if str is NULL or insufficient memory, pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *ar;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		len++;
	}

	ar = malloc(len * sizeof(char));	
	if (ar == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		ar[i] = str[i];
		i++;
	}
	ar[i] = '\0';

	return (ar);
}
