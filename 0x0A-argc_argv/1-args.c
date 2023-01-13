#include <stdio.h>

/**
 * main - print number of args passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
