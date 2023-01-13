#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i = 1, mult, num1, num2;

	if (argc > 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mult = num1 * num2;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

