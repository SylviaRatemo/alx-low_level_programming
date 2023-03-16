#include "lists.h"

/**
 * add_dnodeint - add new node at the beg
 * @head: pointer to node
 * @n: input data
 * Return: address of new element, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t **temp = malloc(sizeof(dlistint_t));

	temp->prev = NULL;
	temp->data = n;
	temp->next = head;
	head->prev = temp;
	head = temp;
	return (head);
}
