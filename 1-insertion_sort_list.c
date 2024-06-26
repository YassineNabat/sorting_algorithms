#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 */

void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2) {

	(*n1)->next = n2->next;
	if (n2->next != NULL)
	{
		n2->next->prev = *n1;
		n2->prev = (*n1)->prev;
		n2->next = *n1;
	}		
   	if ((*n1)->prev != NULL)

		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * sortedInsert - Inserts a new node in a sorted way in a sorted doubly linked list.
 * @head_ref: A pointer to the head of the sorted doubly linked list.
 * @newNode: The new node to be inserted.
 */

void insertion_sort_list(listint_t **list) {
	 
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp) 
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n) 
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
