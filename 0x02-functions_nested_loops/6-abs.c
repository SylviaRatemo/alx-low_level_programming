#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c:integer input
 * Return:Absolute value of c
 */

int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}

