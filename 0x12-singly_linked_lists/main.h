#ifndef MAIN_H
#define MAIN_H

/**
 * struct list_s - singly linked list
 * @str; string - malloc'd string
 * @len: length of the string
 * @next: pointsto next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);


#endif
