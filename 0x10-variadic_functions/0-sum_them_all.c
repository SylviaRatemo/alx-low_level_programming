#include <stdio.h>
#include "variadic_functions.h"

/**
 * sume_them_all - returns sum of parameters
 * @n: argument count
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
