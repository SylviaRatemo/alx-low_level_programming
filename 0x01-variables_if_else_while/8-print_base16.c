#include <stdio.h>

/**
 * main - Entry
 * Return:Always 0
 */

int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}

	while (c < 'g')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return(0);
}
