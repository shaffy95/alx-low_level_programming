#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 *
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
