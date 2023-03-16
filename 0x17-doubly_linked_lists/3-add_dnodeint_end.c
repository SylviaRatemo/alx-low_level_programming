#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of list
 * @head: last node
 * @n: input data
 * Return: address of new element, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = ptr;
	ptr->prev = temp;
	return (*temp);
}
