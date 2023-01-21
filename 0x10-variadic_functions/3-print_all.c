#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: lists the type of argument
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s, *spacer = "";

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spacer, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", spacer, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", spacer, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char*);
					if (!s)
						s = "(nil)";
					printf("%s%s", spacer, s);
					break;
				default:
					i++;
					continue;
			}
			spacer = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
