#include "lists.h"

/**
 * list_len - Gets the number of nodes in a linked list.
 *
 * @h: Pointer to the head (first node) of the linked list.
 *
 * Return: Number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
