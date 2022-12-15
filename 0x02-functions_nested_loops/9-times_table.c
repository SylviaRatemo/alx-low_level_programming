#include "main.h"

/**
 * times_table - function that prints the 9 times table
 */

void times_table(void)
{
	int c, r, product;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 0; c < 10; c++;)
		{
			product = (c * r);
			if((product / 10) > 0)
			{
				_putchar((product / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((product % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
