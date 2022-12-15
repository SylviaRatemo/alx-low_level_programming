#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: single character input
 * Return: returns 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
