#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void)
{
	for (int num = 0; num <= 9; num++)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
