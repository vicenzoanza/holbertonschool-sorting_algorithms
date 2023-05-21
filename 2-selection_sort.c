#include "sort.h"
/**
 * selection_sort - In a function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 * @array: array
 * @size: size_t
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, min;
	int aux;

	for (a = 0; a < size; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[min] > array[b])
			{
				min = b;
			}
		}
		aux = array[a];
		array[a] = array[min];
		array[min] = aux;
		print_array(array, size);
	}
}
