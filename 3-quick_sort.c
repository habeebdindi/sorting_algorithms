#include "sort.h"
/**
 * quick_sort - sorts an @array.
 * @array: the array.
 * @size: len of @array.
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot_index, i, temp;
	int pivot;

	if (size <= 1)
		return;

	pivot = array[size - 1];
	pivot_index = 0;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] <= pivot)
		{
			temp = array[i];
			array[i] = array[pivot_index];
			array[pivot_index] = temp;
			pivot_index++;
			print_array(array, size);
		}
	}
	temp = array[pivot_index];
	array[pivot_index] = pivot;
	array[size - 1] = temp;

	quick_sort(array, pivot_index);
	quick_sort(array + pivot_index + 1, size - pivot_index - 1);
}
