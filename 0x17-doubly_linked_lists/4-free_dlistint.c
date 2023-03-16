#include "lists.h"

/**
 * free_dlistint - free double list
 * @head: doubly linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
