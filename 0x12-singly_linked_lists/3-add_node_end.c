#include "lists.h"
#include <stdio.h>
#include <stdlib>

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
       
	ptr = head;
	temp = (list_t *)malloc(sizeof(list_t));

	if (ptr = NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	temp->str = str;

	while (str[i] != '\0')
		i++;
	temp->len = i;
	
	temp->next = NULL;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;

	return (temp);
}
