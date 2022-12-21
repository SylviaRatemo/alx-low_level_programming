#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, length = 0, n;

	for (i = 0; *(str + i) != 0; i++)
	{
		length++;
	}

	if ((length - 1) / 2 != 0)
	{
		n = (length - 1) / 2;
		while (*(str + n) != 0)
		{
			printf("%s\n", str);
		}
	}
	else
	{
		n = length / 2;
		while (*(str +n) != 0)
		{
			printf("%s\n", str);
		}
	}
}
