#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * add_node - add new node at the beginning of linked list
 * @head: input pointer to first element
 * @str: input string
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = strdup(str);
	while (str[i] != '\0')
		i++;
	ptr->len = i;

	if (*head != NULL)
		ptr->next = *head;
	if (*head == NULL)
		ptr->next = NULL;
	*head = ptr;

	return (*head);
}	
