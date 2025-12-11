#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t temp;
	int numsmall;
	size_t index_min;

	for (i = 0; i < size - 1; i++)
	{
		numsmall = array[i];
		index_min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < numsmall)
			{
				numsmall = array[j];
				index_min = j;
			}
		}
	
		if (i != index_min)
		{
			temp = array[i];
			array[i] = array[index_min];
			array[index_min] = temp;
			print_array(array, size);
		}
	}
}
