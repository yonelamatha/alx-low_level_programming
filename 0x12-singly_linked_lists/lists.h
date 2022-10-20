

#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing prototypes and definitions for all functions
 *       and types written in the 0x12-more_singly_linked_lists directory.
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif /* LISTS_H */
