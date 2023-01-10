#include "main.h"

/**
 * create_array - creates an arra of chars
 * @size: input size of array
 * @c: input char for initialization
 * Return: NULL is size is 0 or it fails, pointer to array 
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *p = (char*)calloc(size, sizeof(char));
	p[0] = c;
	return (p);
}
