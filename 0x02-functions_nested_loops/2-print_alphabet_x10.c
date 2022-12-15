#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int count = 0;
	int letter = 'a';

	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
