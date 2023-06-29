#include "sort.h"

/**
 * insertion_sort_list - insert sort algorithm using doubly linked list.
 * @list: the list head.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *inner_curr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		inner_curr = curr;
		while (inner_curr->prev != NULL && inner_curr->prev->n > inner_curr->n)
		{
			swap_nodes(list, inner_curr->prev, inner_curr);
			print_list(*list);
		}
		curr = curr->next;
	}
}

/**
 * swap_nodes - swaps nodes of a @list.
 * @list: the list.
 * @y: first node.
 * @x: second node.
 */
void swap_nodes(listint_t **list, listint_t *y, listint_t *x)
{
	if (y->prev != NULL)
		y->prev->next = x;
	else
		*list = x;
	if (x->next != NULL)
		x->next->prev = y;
	y->next = x->next;
	x->prev = y->prev;
	x->next = y;
	y->prev = x;
}
