#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node at end
 * @head: pointer to first node
 * @n: input data(n)
 * Return: address of newNode or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		newNode = *head;
		while (newNode->next != NULL)
			newNode = newNode->next;
		newNode->next = temp;
	}

	return (*head);
}
