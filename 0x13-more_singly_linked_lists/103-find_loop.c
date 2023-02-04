#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find loop in linked lit
 * @head: pointer to head
 * Return: address of node, NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (first);
		}
		first = first->next;
		second = (second->next)->next;
	}
	return (NULL);
}
