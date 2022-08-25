
#include "sort.h"
void helper(int *array, int idx0, int idxn, size_t size);
/**
 * swap - swap
 * @array: array
 * @i: index
 * @j: index
 */
void swap(int *array, int i, int j)
{
	int tmp = array[i];

	array[i] = array[j];
	array[j] = tmp;
}
/**
 * quick_sort - quick sort
 * @array: array
 * @size: size
 */

void quick_sort(int *array, size_t size)
{
	helper(array, 0, size - 1, size);
}
/**
 * helper - quick sort with Lomuto partition scheme
 * @array: array
 * @idx0: index0
 * @idxn: last index
 * @size: size
 */
void helper(int *array, int idx0, int idxn, size_t size)
{
	int i, j, pivot;

	if (idxn > idx0)
	{
		pivot = idx0;
		i = idx0;
		j = idxn;

		while (j > i)
		{
			if (array[i] <= array[pivot] && i < idxn)
				i++;
			while (array[j] > array[pivot])
				j--;

			if (j > i)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
		swap(array, pivot, j);
		print_array(array, size);

		helper(array, idx0, j - 1, size);
		helper(array, j + 1, idxn, size);
	}
}
