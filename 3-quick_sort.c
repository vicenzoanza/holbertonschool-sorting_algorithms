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
  * quick_sort_rec - sort an array of integers.
  * @array: array.
  * @lower: lower.
  * @higher: higher.
  * @size: size.
  */
void quick_sort_rec(int *array, int lower, int higher, size_t size)
{
	int l_p = 0;

	if (lower < higher)
	{
		l_p = partition(array, lower, higher, size);
		quick_sort_rec(array, lower, l_p - 1, size);
		quick_sort_rec(array, l_p + 1, higher, size);
	}
}

/**
  * partition - divide a subarray into two parts around a pivot.
  * @array: pointer
  * @lower: lower
  * @higher: higher
  * @size: size of array.
  * Return: The new pivot.
  */
int partition(int *array, int lower, int higher, size_t size)
{
	int i = 0, j = 0, pivot = 0, aux = 0;

	pivot = array[higher];
	i = lower;

	for (j = lower; j < higher; ++j)
	{
		if (array[j] < pivot)
		{
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;

			if (aux != array[i])
				print_array(array, size);

			++i;
		}
	}

	aux = array[i];
	array[i] = array[higher];
	array[higher] = aux;

	if (aux != array[i])
	print_array(array, size);

return (i);
}
