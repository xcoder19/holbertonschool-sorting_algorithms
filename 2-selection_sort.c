

#include "sort.h"
void swap(int *array, int i, int min)
{
	int tmp = array[min];
	array[min] = array[i];
	array[i] = tmp;
}
void selection_sort(int *array, size_t size)
{
	int i, j, min;

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