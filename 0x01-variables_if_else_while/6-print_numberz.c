#include <stdio.h>

/**
 * main - Entry
 * print_numbers - uses putchar to print numbers
 * Return:Always 0
 */

void print_numbers(int n)
{
	putchar((n % 10) + '0');
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
