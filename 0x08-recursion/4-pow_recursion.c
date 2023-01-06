#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: integer input
 * @y: power input
 * Return: the value of x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x));
	}
}
