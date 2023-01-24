#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using the bubble
 * sort algorithm
 * @array: Pointer to the array of integers
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
    int temp; i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* swap the elements */
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                /* print the array after each swap */
                print_array(array, size);
            }
        }
    }
}
