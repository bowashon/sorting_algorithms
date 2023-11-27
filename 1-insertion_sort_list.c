#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list u
 *
 * @list: points to the head node
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *next;

	if (!*list || !(*list)->next)
		return;

	while (current != NULL)
	{
		next = current->next;

		while (sorted != NULL && sorted->n < current->n)
			sorted = sorted->next;

		current->prev = sorted != NULL ? sorted->prev : NULL;
		current->next = sorted;

		if (sorted != NULL)
			sorted->prev = current;

		if (current->prev != NULL)
		{
			current->prev->next = current;
		}
		else
		{
			*list = current;
		}
		print_list((const listint_t *)*list);
		sorted = *list;
		current = next;
	}
}
