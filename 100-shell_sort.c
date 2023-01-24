#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in ascending
 * order using shell sort algorithm, using the Knuth sequence
 * @array: array of integers to sort
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	/**
	 * set the initial gap value using the Knuth sequence
	 * gap = 1, 4, 13, 40, 121, ...
	 */
	while (gap < size / 3)
		gap = 3 * gap + 1;

	/**
	 * sort the array using the gap value
	 * Decrease the gap value by a factor of 3 each iteration
	 */
	while (gap >= 1)
	{
		/* sort the array using insertion sort */
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
