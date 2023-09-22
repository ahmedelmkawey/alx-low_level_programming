#include "lists.h"

/**
 * list_len - return the number of elements in the list.
 * @h: singly linked list.
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
