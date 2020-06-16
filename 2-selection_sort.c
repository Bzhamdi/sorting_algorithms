#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers.
 *
 * @array: the array of integers.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index, tmp;

	for (i = 0; i < (size - 1); i++)
	{
		index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
				index = j;
		}
		if (index != i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}

	}
}
