#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i = 1, mult;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			printf("%d", (int)argv[i]);
			mult *= argv[i];
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

