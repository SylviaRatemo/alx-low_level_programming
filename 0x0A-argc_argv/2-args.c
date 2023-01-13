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

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
