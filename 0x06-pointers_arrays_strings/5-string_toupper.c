#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @str: input string
 * Return: Pointer to str
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
		
