#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void swap(int *a, int *b);
int partition(int *array, int start, int end, size_t size);
void qs(int *array, int start, int end, size_t size);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void sorted_insert(listint_t **head, listint_t *new);
void selection_sort(int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *y, listint_t *x);
void quick_sort(int *array, size_t size);
#endif /* SORT_H */
