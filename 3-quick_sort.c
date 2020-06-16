#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - swap
 * @array: array
 * @i: int
 * @j: int
 */
void swap(int *array, int i, int j)
{
	size_t tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}




/**
* devide - Quick Sort algorithm
*
* @array: the array
* @x: first element
* @y: last element
* @size: size of the array
* Return: returns index of big value
*/
size_t devide(int *array, size_t x, size_t y, size_t size)
{
size_t  i;
size_t pivot = x;
	for (i = x; i < y; i++)
	{
		if (array[i] < array[y])
		{
			if (i != pivot)
			{
				swap(array, (int)(i), (int)(pivot));
				print_array(array, size);
			}
			pivot++;
		}
	}

	if (array[pivot] > array[y])
	{
		swap(array, (int)(y), (int)(pivot));
		print_array(array, size);
	}
	return (pivot);
}
/**
* tri - the Quick sort algorithm
* @array: The array of integers
* @x: first element
* @y: last element
* @size: size of the array
*/

void tri(int *array, size_t x, size_t y, size_t size)
{
	size_t pivot;

	if (x <= y)
	{
		pivot = devide(array, x, y, size);
		if (pivot > x && pivot != 0)
			tri(array, x, pivot - 1, size);
		if (pivot < size - 1)
			tri(array, pivot + 1, y, size);
	}
}

/**
* quick_sort - sorts an array of integers.
* @array : array to be sorted.
* @size: the size of the array.
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	tri(array, 0, size - 1, size);
}
