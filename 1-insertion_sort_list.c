#include "sort.h"

/**
 * insertion_sort_list - insert sort algorithm using doubly linked list.
 * @list: the list head.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *inner_curr;

	if (*list == NULL || (*list)->next == NULL)
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
 * @node1: first node.
 * @node2: second node.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	listint_t *prev1, *prev2, *next1, *next2;

	prev1 = node1->prev;
	prev2 = node2->prev;

	/* Update next pointers */
	if (prev1 != NULL)
		prev1->next = node2;
	else
		*list = node2;

	if (prev2 != NULL)
		prev2->next = node1;
	else
		*list = node1;

	next1 = node1->next;
	next2 = node2->next;

	node1->prev = prev2;
	node1->next = next2;

	node2->prev = prev1;
	node2->next = next1;

	/* Update prev pointers */
	if (next1 != NULL)
		next1->prev = node2;

	if (next2 != NULL)
		next2->prev = node1;
}
