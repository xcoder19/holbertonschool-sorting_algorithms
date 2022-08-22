#include "sort.h"
/**
 * swap - swap two values
 * @size: size of array
 * @array: array
 * @j: index
 */
void swap(int *array, size_t size, int j)
{

	int tmp = array[j];

	array[j] = array[j + 1];
	array[j + 1] = tmp;
	print_array(array, size);
}
/**
 * bubble_sort - sort array using bubble sort algorithm
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{

	int i = size, j, swaped = 0;

	while (i > 0)
	{

		j = 0;
		while (j < i - 1)
		{

			if (array[j] > array[j + 1])
			{
				swap(array, size, j);
				swaped = 1;
			}
			j++;
		}
		i--;
		if (!swaped)
			break;
	}
}
