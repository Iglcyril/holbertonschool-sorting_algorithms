#include "sort.h"

/**
 * sorts - Helper function that performs the quick sort.
 * @array: Pointer to the array.
 * @size: Length of the array.
 * @array_og: Pointer to the original array for printing.
 * @size_og: Pointer to the original size for printing.
 */
void sorts(int *array, size_t size, int *array_og, size_t *size_og)
{
	int pivot;
	int temp;
	size_t i, j;

	pivot = array[size - 1];
	i = 0;
	j = 0;

	while (j < size - 1)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array_og, *size_og);
			}
			i++;
		}
		j++;
	}

	if (i != size - 1)
	{
		temp = array[i];
		array[i] = array[size - 1];
		array[size - 1] = temp;
		print_array(array_og, *size_og);
	}

	if (i > 0)
		sorts(array, i, array_og, size_og);
	if (i + 1 < size)
		sorts(array + i + 1, size - i - 1, array_og, size_og);
}

/**
 * quick_sort - Sorts an array list by the quick sort algorithm.
 * @array: Pointer to the array.
 * @size: Length of the array.
 */
void quick_sort(int *array, size_t size)
{
	int *array_og = array;
	size_t *size_og = &size;
	size_t i;

	if (*size_og < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] != array[i + 1])
			sorts(array, size, array_og, size_og);
	}
}
