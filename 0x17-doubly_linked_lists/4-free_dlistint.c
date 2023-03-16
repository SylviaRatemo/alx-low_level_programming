#include "lists.h"

/**
 * free_dlistint - free double list
 * @head: doubly linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	new = head;
	while (new != NULL)
	{
		free(new->n);
		free(new);
		new = new->next;
	}
}
