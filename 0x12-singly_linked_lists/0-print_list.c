#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		/* if str is NULL, print [0] (nil), else print length and str */
		printf("[%d] %s\n", (h->str == NULL ? 0 : h->len), (h->str == NULL ? "(nil)" : h->str));

		/* move to the next node and increase node_count */
		h = h->next;
		node_count++;
	}

	return (node_count);
}
