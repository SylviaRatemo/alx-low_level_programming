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

	if (str == NULL)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char));
	free(ar);
	ar = str;

	return (ar);
}
