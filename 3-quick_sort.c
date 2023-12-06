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
	if (start < end)
	{
		int pi = partition(array, start, end, size);

		qs(array, start, pi - 1, size);
		qs(array, pi + 1, end, size);
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
	int pivot = array[end];
	int i = start - 1;
	int j;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
 		}
	}
	if (array[i + 1] != array[end])
	{
		swap(&array[i + 1], &array[end]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap - swaps two variables.
 * @a: tvariable one.
 * @b: variable two.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
