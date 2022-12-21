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
	int n = strlen(s);

	for (; i < n; i++)
	{
		num = num * 10 + (s[i] - 48);
	}

	printf("%d", num);

	return (0);
}
