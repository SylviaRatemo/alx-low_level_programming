#include "main.h"

/**
 * main - Entry
 * Return:Always 0
 */

void print_alphabet(void)
{
	int c;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
