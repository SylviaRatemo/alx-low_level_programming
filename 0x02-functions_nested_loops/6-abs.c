#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return:Always 0
 */

int _abs(int c)
{
	int ab;

	if (c < 0)
	{
		ab = c * -1;
		_putchar(ab);
	}
	else if (c > 0)
	{
		ab = c;
		_putchar(ab);
	}
	else
	{
		ab = 0;
		_putchar(ab);
	}

	return (0);
}

