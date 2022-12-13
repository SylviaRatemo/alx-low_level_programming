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
		if (num != 9)
		{
			putchar((num % 10) + '0');
			putchar(44);
			putchar(32);
			num++;
		}
		else
		{
			putchar((num % 10) + '0');
			num++;
		}
	}

	putchar('\n');

	return (0);
}
