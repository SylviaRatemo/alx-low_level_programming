#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers 0 to 9 but 2 and 4
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c!= '4')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
}
