#include <stdio.h>

/**
 * main-Entry
 * Return:Always 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}

	putchar('\n');

	return (0);
}
