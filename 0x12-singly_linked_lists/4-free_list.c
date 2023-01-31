#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: input list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
}
