#include "main.h"

/**
 * _islower - checks if c is lowercase
 * @c: single letter input
 * Return: 1 if int c is lowercase, o otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
