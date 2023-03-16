#include "lists.h"

/**
 * print_dlistint - print elements of a dlistint_t
 * @h: pointer to the doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 1;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr->next != NULL)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
		size++;
	}
	return (size);
}
