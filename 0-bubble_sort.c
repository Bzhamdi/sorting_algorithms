#include "sort.h"
/**
 * bubble_sort - the Bubble sort algorithm
 * @array: The arry to be sorted
 *@size: the size
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, tmp;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0 ; i < size - 1; i++)
	{
		for (j = 0 ; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
