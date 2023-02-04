#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free single linked list
 * @head: double pointer to list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t **ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}
