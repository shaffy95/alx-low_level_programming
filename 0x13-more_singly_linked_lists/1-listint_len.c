#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the first node.
 *
 * Return: Number of elements.
*/

size_t listint_len(const listint_t *h)
{
	size_t ment = 1;

	/*return 0 as no of elements when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count no of elements*/
		if (h->n != '\0')
			ment++;

		/*go to next node*/
		h = h->next;
	}

	return (ment);
}
