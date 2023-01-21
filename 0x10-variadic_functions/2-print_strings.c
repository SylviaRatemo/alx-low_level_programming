#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, n);

	for (; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char*));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
