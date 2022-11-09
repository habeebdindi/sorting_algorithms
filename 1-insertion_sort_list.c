#include "sort.h"
/**
 * insertion_sort_list - sorting algortitm to be implemented
 *
 * @list: list to be sorted
 * Retrun: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *ptr = *list;
	listint_t *temp_p, *temp_ne, *inner_temp, *inner_temp_t;
	if (head == NULL)
		return;

	while (head != NULL || list != NULL)
	{
		ptr = head;
		head = head->next;
		temp_p = ptr->n;
		temp_ne = ptr->next;

		if (ptr->n > temp_n->n)
		{
			ptr->next = ptr->prev;
			temp_p->next = ptr->next;
			ptr->prev = temp_p->prev;
			temp_p->prev = temp_p->next;

			ptr = ptr->next;
			while(ptr->prev != NULL)
			{
				if (ptr->prev->n > ptr->n)
				{
					inner_temp->ne = ptr->next;
					inner_temp_t->p = ptr->n;
					ptr->next = ptr->prev;
					inner_temp->next = ptr->next;
					ptr->prev = inner_temp->prev;
					inner_temp->prev = inner_temp->next;
				}
				print_list(list);
			}
		}
	}
}
