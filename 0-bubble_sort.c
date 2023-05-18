#include "sort.h"

/**
 * bubble_sort -  a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array
 * @size: size_t
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j = 0;
	int aux;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size - 1; j++)
			if(array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
	}
}
