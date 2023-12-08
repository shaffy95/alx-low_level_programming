#include "lists.h"

/**
* dlistint_len - this is a function for the number of elements in a list.
* @h: head node of the linekd list.
* Return: number of element in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	size_t element;

	for (element = 0; h != NULL ; element++)
	{
		h = (*h).next;

		num += 1;
	}

	return (num);
}
