#include "main.h"

/**
 * puts2 - print every other character starting with the first
 * @str: input string
 * Return: Nothing
 */

void puts2(char *str)
{
	int i, length;

	for (i = 0; *(i + str) != 0; i++)
	{
		while (length % 2 == 0)
		{
			printf("%s", str);
		}
		length++;
	}
}
