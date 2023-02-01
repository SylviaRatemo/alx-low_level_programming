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

	newNode = *head;
	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;

	while (newNode->next != NULL)
		newNode = newNode->next;
	newNode->next = temp;

	return (*head);
}
