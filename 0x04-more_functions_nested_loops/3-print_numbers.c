#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
}
