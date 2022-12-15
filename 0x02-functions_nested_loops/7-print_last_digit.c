#include "main.h"

/**
 * print_last_digit - a function prints the last digit
 * @num: inputs the integer
 * Retun: value of the last digit
 */

int print_last_digit(int num)
{
	int n;

	n = (num % 10);

	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
