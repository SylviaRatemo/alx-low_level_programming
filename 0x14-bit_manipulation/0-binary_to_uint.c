#include "main.h"

/**
 * print_binary - convert to binary from dec
 * @n: decimal input
 */

void print_binary(unsigned long int n)
{
	int index, count = 0;
	unsigned long int current;

	for (index = 63; index >= 0; index--)
	{
		current = n >> i;

		if (current & i)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
