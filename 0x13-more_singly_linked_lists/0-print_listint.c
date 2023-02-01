#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all elements
 * @h: singly linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *head = malloc(sizeof(listint_t));

	head = h;

	do {
		printf("%d\n", head->n);
		head = head->next;
		i++;
	} while (head->next != NULL);
	return (i);
}
