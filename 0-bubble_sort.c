#include "sort.h"

/**
 * bubble_sort - implementation of bubble sort algorithm
 * @array: array to be sorted
 * @size: size of linked list
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (size < 2)
		return;
	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
