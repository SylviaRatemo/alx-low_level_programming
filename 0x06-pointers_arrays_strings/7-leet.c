#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: Input string
 * Return: A pointer to the encoded str
 */

char *leet(char *str)
{
	int count = 0, i = 0;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (; i < 5; i++)
		{
			if (*(str + count) == low_letters[i] || *(str + count) == upp_letters[i])
			{
				*(str + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (str);
}
