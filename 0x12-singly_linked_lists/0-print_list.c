#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: singly linked list.
 * Return: number of the elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t element;

	element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		element++;
	}
	return (element);
}
