#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete first node
 * @head: double pointer to list
 * Return: head node data or NULL if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;

	if (*head == NULL)
		return (0);

	*head = (*ptr)->next;

	return ((*head)->n);
}
