#include "main.h"
#include <stdlib.h>

/**
 * argstosr - concatenates arguments
 * @ac: first input
 * @av: array input
 * Return: NUKK or pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *ar;
	int i, j, k = 0, n, m, counter = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);

	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;
		counter++;
	}
	counter++; /* to account for \n that needs to be added later*/
	
	ar = malloc(sizeof(char) * counter);
	if (ar == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			ar[k] = av[n][m];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
