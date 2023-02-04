#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free single list
 * @head: pointer to single linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		free(head);

	free(head->next);
	free(head);
}
