#include "sort.h"

/**
 * quick_sort - sorts an @array.
 * @array: the array.
 * @size: len of @array.
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}

/**
 * qs - sorts an @array recursively.
 * @array: the array.
 * @size: len of @array.
 * @start: start position.
 * @end: end position.
 */
void qs(int *array, int start, int end, size_t size)
{
	int partition_index;
	if (start < end)
	{
		partition_index = partition(array, start, end, size);
		qs(array, start, partition_index - 1, size);
		qs(array, partition_index + 1, end, size);
	}
}

/**
 * partition - partitioning logic.
 * @array: the array.
 * @size: len of @array.
 * @start: start position.
 * @end: end position.
 * Return: the pivot index.
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot, pindex;
	int i;

	pivot = array[end];
	pindex = start;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			swap(&array[i], &array[pindex]);
			pindex++;
		}
	}
	swap(&array[pindex], &array[end]);
	print_array(array, size);
	return pindex;
}

/**
 * swap - swaps two variables.
 * @a: tvariable one.
 * @b: variable two.
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
