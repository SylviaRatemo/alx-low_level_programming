#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of list
 * @head: last node
 * @n: input data
 * Return: address of new element, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NILL);
	}

	temp->next = NULL;
	temp->prev = *head;
	temp->n = n;

	temp = 
