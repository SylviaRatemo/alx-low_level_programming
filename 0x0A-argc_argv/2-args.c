#include <stdio.h>

/**
 * main - print all arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int i = 0;

	print("Number of arguments: %d\n", argc);
	print("Array of arguments:\n ");

	for(; i < argc; i++)
	{
		printf("argv[%d] = %c", i, argv[i]);
	}

	return (0);
}
