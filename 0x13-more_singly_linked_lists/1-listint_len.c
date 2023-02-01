#include "lists.h"
#include <stdio.h>

/**
 * listint_len - calculate number of mnodes
 * @h: singly linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
