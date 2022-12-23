#include "main.h"

/**
 * rot13 - Encodes a string using rot 13
 * @str: Input string
 * Returns: Pointer to encoded string
 */

char *rot13(char *str)
{
	int count = 0, i = 0;
	char alphabet[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMONPQRSTUVWXYZ"};
	char rot13key[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	while (*(str + count) != '\0')
	{
		for(; i < 52; i++)
		{
			if (*(str + count) == alphabet[i])
			{
				*(str + count) = rot13key[i];
				break;
			}
		}

		count++;
	}

	return (str);
}
