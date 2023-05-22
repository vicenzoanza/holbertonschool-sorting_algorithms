#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: Pointer.
 */

void insertion_sort_list(listint_t **list)
{
listint_t *sorted, *current, *temp;

if (!list || !(*list) || !(*list)->next)
	return;

	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		sorted = current->prev;

		while (sorted && sorted->n > current->n)
		{
			sorted->next = current->next;

			if (current->next)
				current->next->prev = sorted;

			current->prev = sorted->prev;
			current->next = sorted;
			if (sorted->prev)
				sorted->prev->next = current;
			else
				*list = current;

			sorted->prev = current;
			sorted = current->prev;
			print_list(*list);
		}
	}
}

