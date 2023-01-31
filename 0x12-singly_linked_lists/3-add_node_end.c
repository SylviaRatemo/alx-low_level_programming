#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - function adds node at the end
 * @head: input list
 * @str: input string
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *ptr, *temp;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	ptr->str = strdup(str);

	while (str[i] != '\0')
		i++;
	ptr->len = i;
	ptr->next = NULL;
	
	temp = *head;
	if (temp == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}

	return (*head);
}
