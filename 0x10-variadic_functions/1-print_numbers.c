#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @seperator: characteer between numbers
 * @n: argument count
 * Return: Nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	int i = 0;

	if (seperator == NULL)
		return;

	va_start(ap, n);

	for (; i < n; i++)
		printf("%d%c ", va_arg(ap, int), *seperator);
	printf("\n");
}
