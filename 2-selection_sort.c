

#include "sort.h"
/**
 * swap - swap
 * @array: array
 * @i: index
 * @min: min
 */
void swap(int *array, size_t i, size_t min)
{
	int tmp = array[min];

	array[min] = array[i];
	array[i] = tmp;
}
/**
 * selection_sort - selection sort
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}

		if (min != i)
		{
			swap(array, i, min);
			print_array(array, size);
		}
	}
}
