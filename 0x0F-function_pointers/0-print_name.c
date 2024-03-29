#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: input string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
