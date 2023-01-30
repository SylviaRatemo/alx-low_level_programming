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
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = str;
	ptr->next = *head;
	*head = ptr;

	return (head);
}	
