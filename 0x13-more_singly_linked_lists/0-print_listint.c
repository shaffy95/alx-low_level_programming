#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list.
 * @h: Pointer to the first node.
 *
 * Return: The number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t node_cnt = 1;

	/* return 0 as no of nodes when h is null*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*go to the next node*/
		h = h->next;
		/*cnt no of nodes*/
		node_cnt++;
	}

	/*print last node*/
	printf("%d\n", h->n);

	return (node_cnt);
}
