#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: input integer to be printed
 * Return: Nothing
 */

void print_number(int n)
{
	putchar((n % 10) + '0');
}
