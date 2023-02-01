#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements
 * @h: singly linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	do {
		printf("%d\n", h->n);
		h = h->next;
		i++;
	} while (h);
	return (i);
}
