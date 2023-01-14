#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i = 0, sum;

	if (argc == 0)
	{
		printf("%d\n", 0);
	}

	if !(argv >= '0' && argv <= '9')
	{
		printf("Error\n");
	}

	for (; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
