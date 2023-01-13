#include <stdio.h>

/**
 * main - print its name
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: nothing
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
