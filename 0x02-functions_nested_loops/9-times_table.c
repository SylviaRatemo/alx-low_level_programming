#include "main.h"

/**
 * times_table - function that prints the 9 times table
 */

void times_table(void)
{
	int c, r, product;

	for (c = 0; c < 10; c++)
	{
		for (r = 0; r < 10; r++)
		{
			product = (c * r);
			_putchar((c % 10) + '0');
			_putchar((r % 10) + '0');
			_putchar((product % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
