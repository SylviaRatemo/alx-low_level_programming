#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * size_t print_list - print elements of list_t
 * @h: input struct
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	list_t *ptr = malloc(sizeof(list_t));
	
	ptr = h;
	if (ptr->str == NULL)
		printf("[0] (nil)");

	while (ptr->next != NULL)
	{
		count++;
		printf("[%d] %s\n", count, ptr->str);
		ptr = ptr->next;

	}
	return (count);
}
