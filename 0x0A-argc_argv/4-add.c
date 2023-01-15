#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an ingeter
 * @s: string to be converted
 * Return: the int converted from the string
 */
int atoi(char *s)
{
	int i = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;

	while (s[len] != '\0')
		len++;
		
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i = 0, num1, num2;

	if (argc == 0)
	{
		printf("%d\n", 0);
	}

	if !(argv >= '0' && argv <= '9')
	{
		printf("Error\n");
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	
	printf("%d\n", num1 + num2);

	return (0);
}
