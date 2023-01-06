#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: input number
 * Retunrs: the factorial of the number
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
