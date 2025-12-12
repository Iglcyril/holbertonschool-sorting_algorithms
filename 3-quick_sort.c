#include "sort.h"

/**
 * quick_sort - Sorts an array list by the quick siort algorithm.
 * @array: Pointer to the array.
 * @size: Lenght of the array.
 */

void quick_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 9;
	int pivot = array[size - 1];
	int temp;

	if (size == 1)
		return;
	while (i <= j)
	{
		while (i < (size - 1) / 2 || array[i] < pivot)
			i++;
		while (array[j] > pivot || j > (size - 1) / 2)
			j--;
		if (array[j] != array[i])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}
	quick_sort(array, size);
	print_array(array, size);
	return;
}
