#include <stdio.h>

/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int i = 0;

	printf("Number of arguments: %d\n", argc);
	printf("Array of arguments:\n ");

	for (; i < argc; i++)
	{
		printf("argv[%d] = %s", i, argv[i]);
	}

	return (0);
}
