#include <stdio.h>

/**
 * main - Entry
 * print_numbers - uses putchar to print numbers
 * Return:Always 0
 */

void print_numbers(int n)
{
	if (n != 0)
	{
		print_numbers(n / 10);
		putchar((n % 10) + '0');
	}
}

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		print_numbers(num);
		num++;
	}
	putchar('\n');

	return (0);
}
