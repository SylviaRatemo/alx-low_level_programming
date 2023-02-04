#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free lists with a loop
 * @h: pointer to head of list
 * Return: szize of list
 */

size_t free_listing_safe(listint_t **h)
{
	size_t len;
	listint_t *first, *second;
	
	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		 if (first == second)
		 {
			 first = head
				 while (first != second)
				 {
					 len++;
					 first = first->next;
					 second = second->next;
				 }
			 first = first->next;
			 while (first != second)
			 {
				 len++;
				 first = first->next;
			 }
			 return (len);
		 }
		 first = first->next;
		 second = (second->next)->next
	}
	return (0);
}
