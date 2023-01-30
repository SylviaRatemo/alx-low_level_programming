#include "lists.h"
#include <stdio.h>

/**
 * list_len - computes number of element in list
 * @h: input single linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
