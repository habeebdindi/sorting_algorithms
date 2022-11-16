#include "sort.h"
/**
 * insertion_sort_list - sorting algortitm to be implemented
 *
 * @list: list to be sorted
 * Retrun: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;

	if (list == NULL || (*list)->next == NULL)
		return;
	while (current->next != NULL)
	{
		current = current->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->prev->next = current->next;
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}
	}
}
