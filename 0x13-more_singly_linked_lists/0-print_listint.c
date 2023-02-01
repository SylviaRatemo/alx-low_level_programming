#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements
 * @h: singly linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *temp = malloc(sizeof(listint_t));
	size_t i = 0;

	temp = h;

	do {
		printf("%d\n", temp->n);
		temp = temp->link;
		i++;
	} while (temp->next != NULL);
	return (i);
}
