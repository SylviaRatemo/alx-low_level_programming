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
	int c, sign, offset, n;

	if (s[0] == '-')
	{
		sign = -1;
	}

	if (sign == -1)
	{
		offset = 1;
	}
	else 
	{
		offset = 0;
	}

	n = 0;

	for (c = offset; a[c] != '\0'; c++)
	{
		n = * 10 + a[c] - '0';
	}

	if (sign == -1)
	{
		n = -n;
	}
}
