#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * strtow - splits string into words
 * @str: input string
 * Return: pointer to words, NULL
 */

char **strtow(char *str)
{
	char *ar;
	int len = 0, i = 0, j = 0;

	if (str == NULL || str == "")
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * len);

	for (; *(str + i) != '\0'; i++)
	{
		len++;
	}

	if (; j < len; j++)
	{
		ar[i] = strtok(str[j], " ");
		if (ar[i] == NULL)
		{
			return (NULL);
		}
	}

	return (ar);
}
