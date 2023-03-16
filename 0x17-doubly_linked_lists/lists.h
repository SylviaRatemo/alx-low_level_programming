#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: ponter to previous node
 * @next: pointer to next node
 * Description: doubly linked list node structure
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

#endif
