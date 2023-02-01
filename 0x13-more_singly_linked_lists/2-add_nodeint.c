#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add new node at beg
 * @head: address of first node
 * @n: input data
 * Return: pointer to new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	newNode->next = *head;
	*head = newNode;
	return (*head);
}
