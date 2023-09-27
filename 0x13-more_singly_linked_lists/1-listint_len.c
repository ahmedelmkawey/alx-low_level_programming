#include "lists.h"

/**
 * listint_len - return numbers of nodes
 * @h: list to count
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
