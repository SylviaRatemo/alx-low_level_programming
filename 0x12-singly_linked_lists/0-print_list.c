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

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d} %s\n", 0, "(nil)");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
