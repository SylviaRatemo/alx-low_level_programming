#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free single list
 * @head: pointer to single linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
