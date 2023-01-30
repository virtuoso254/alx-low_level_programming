#include "lists.h"
/**
 * list_len - outputs number nodes
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num_of_elements

	num_of_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		num_of_elements++;
	}
	return (num_of_elements);
}

