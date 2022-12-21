#include <stdio.h>

/**
 * main - print fizz buzz, fizz, and buzz
 * Return: Always 0
 */

int main(void)
{
	int n = 1;

	for (; n <= 100; n++)
	{
		if (n < 100)
		{
			if ((n % 3 == 0) && (n % 5 == 0))
			{
				printf("FizzBuzz");
			}
			else if (n % 3 == 0)
			{
				printf("Fizz");
			}
			else if (n % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", n);
			}
			printf(" ");
		}
		else
		{
			printf("Buzz\n");
		}
	}

	return (0);
}
