#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _atoi - Entry
 * @s: input variable
 * Return Always 0
 */


int _atoi(char *s)
{
	int i = 0, num = 0;

	for (; s[i] != '\0'; ++i)
	{
		if (s[i] > 9 || s[i] < '\0')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (s[i] - '0');
		}
	}

	printf("%d", num);

	return (0);
}
