#include <stdio.h>

/**
 * main - Entry
 * Return:Always 0
 */

int main(void)
{
	int num1 = 0;
	int num2 = 0;

	while (num2 < 10)
	{
		putchar((num1 % 10) + '0');
		putchar((num2 % 10) + '0');
		num2++;
	}

	return (0);
}
