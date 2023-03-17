#include "lists.h"

/**
 * free_dlistint - free double list
 * @head: doubly linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

