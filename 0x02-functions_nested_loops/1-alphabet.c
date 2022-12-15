#include "main.h"

/**
 * print_alphabet - prints the alphabet with userdefined function
 */

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
