#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 *                using the Bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t temp;
	size_t n = size;

	for (i=0; i < size; i++)
	{
		for (j=0; j < n-1; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
		n--;
	}
}
