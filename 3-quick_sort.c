#include "sort.h"

/**
 * quick_sort - Sorts an array list by the quick sort algorithm.
 * @array: Pointer to the array.
 * @size: Length of the array.
 */
void quick_sort(int *array, size_t size)
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
                print_array(array, size);
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
        print_array(array, size);
    }

    if (i > 0)
        quick_sort(array, i);
    if (i + 1 < size)
        quick_sort(array + i + 1, size - i - 1);
}
