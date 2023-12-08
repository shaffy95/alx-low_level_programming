#include "lists.h"
/**
 *print_dlistint - Print the elements in the list
 *@h: head node
 *Return: node number
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t element;

	size_t num = 0;

	for (element = 0; h != NULL; element++)
	{
		printf("%d\n", (*h).n);

		h = (*h).next;

		num += 1;
	}

	return (num);
}
