#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sume_them_all - returns sum of parameters
 * @n: argument count
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, count);

	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
