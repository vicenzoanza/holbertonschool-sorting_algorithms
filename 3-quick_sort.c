#include "sort.h"

/**
  * quick_sort - sorts an array of integers in ascending order using the 
  * Quick sort algorithm.
  * @array: array.
  * @size: size.
  */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}

/**
  * quick_sort_rec - quick sort.
  * @array: array.
  * @start: start.
  * @end: end.
  * @size: size.
  */
void quick_sort_rec(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		quick_sort_rec(array, start, pivot - 1, size);
		quick_sort_rec(array, pivot + 1, end, size);
	}
}

/**
  * partition - partition.
  * @array: array.
  * @start: start.
  * @end: end.
  * @size: size.
  * Return: The new pivot.
  */
int partition(int *array, int start, int end, size_t size)
{
	int pivot, i, j, temp;

	pivot = array[end];
	i = start - 1;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
	{
		i++;
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
	}

	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;
	print_array(array, size);

	return (i + 1);
}
