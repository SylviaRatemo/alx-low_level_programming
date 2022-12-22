#include "main.h"

/**
 * _strcmp - compares two stringd
 * @s1: input first string
 * @s2: input second string
 * Return: Returns -1 if *s1 is less, 1 if *s1 is greater, and 0 if equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 < *s2)
	{
		return (-1);
	}
	else if (*s1 > *s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
