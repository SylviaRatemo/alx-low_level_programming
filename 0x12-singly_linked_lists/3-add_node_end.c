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
	unsigned int i = 0;
	list_t *ptr, *temp;

	temp = malloc(sizeof(list_t));

	if (temp = NULL)
	{
		free(temp);
		return (NULL);
	}
	
	temp->str = strdup(str);

	while (str[i] != '\0')
		i++;
	temp->len = i;
	temp->next = NULL;
	
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
