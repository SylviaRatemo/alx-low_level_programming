#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * print_list - print elements of list_t
 * @h: input struct
 * Return: number of nodes
 *
 * Description - print list of element
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *ptr;

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
