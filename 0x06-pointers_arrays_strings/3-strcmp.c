#include "main.h"

/**
 * _strcmp - compares two stringd
 * @s1: input first string
 * @s2: input second string
 * Return: Returns -1 if *s1 is less, 1 if *s1 is greater, and 0 if equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
