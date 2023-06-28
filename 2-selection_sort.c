#include "sort.h"

/**
 * selection_sort - sorts selectively.
 * @array: the array.
 * @size: size of @array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx, temp;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		temp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = temp;
		print_array(array, size);
	}
}
