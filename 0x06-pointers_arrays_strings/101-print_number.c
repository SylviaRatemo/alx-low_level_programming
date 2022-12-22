#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: input integer to be printed
 * Return: Nothing
 */

void print_number(int n)
{
	if (n != 0)
	{
		print_number(n / 10);
		putchar((n % 10) + '0');
	}
	else
	{
		putchar('0');
	}
}
