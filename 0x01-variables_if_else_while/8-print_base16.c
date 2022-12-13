#include <stdio.h>

/**
 * main - Entry
 * Return:Always 0
 */

int main(void)
{
	char a = 0;

	while (a < 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return(0);
}
