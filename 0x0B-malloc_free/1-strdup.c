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
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	ar = malloc(sizeof(str));
	free(ar);
	if (ar == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}
