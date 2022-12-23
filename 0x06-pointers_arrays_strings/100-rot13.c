#include "main.h"

/**
 * rot13 - encodes a string using rot 13
 * @str: Input string
 * Return: Pointer to encoded string
 */

char *rot13(char *str)
{
	int count = 0, i = 0;
	char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','O','N','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char rot13key[] = {'n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};

	while (*(str + count) != '\0')
	{
		for (; i < 52; i++)
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
