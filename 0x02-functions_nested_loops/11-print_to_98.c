#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: lower limit integer
 */

void print_to_98(int n)
{
	for(int i = n; i <= 98; i++)
	{
		_putchar((i % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
}
