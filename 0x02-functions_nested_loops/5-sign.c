#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n:single character input
 * Return:Returns 1 if na > 0, 0 if n = 0, and -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
