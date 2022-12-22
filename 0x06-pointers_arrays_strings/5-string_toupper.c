#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @str: input string
 * Return: Nothing
 */

char *string_toupper(char *str)
{
	int i = 0, index = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[index] >= 'a' || str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
}
		
