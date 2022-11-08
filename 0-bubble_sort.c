#include "sort.h"
/**
 * bubble_sort - Sorts an array in ascending order by swapping after comparison
 *
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * Return: type is void, no return
 */

void bubble_sort(int *array, size_t size)
{
	int m_size = size;
	int start, i, temp;

	for (start = 0; start < m_size; start++)
	{
		for (i = 0; i < m_size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
				print_array(array, size);
			}
		}
	}
}
