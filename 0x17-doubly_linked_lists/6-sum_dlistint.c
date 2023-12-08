#include "lists.h"

/**
 * sum_dlistint - function for returning the sum of all the data
 * (n) of a dlistint_t list.
 * @head: the pointer to the head of the doubly linked list.
 * Return: the sum of all the data (n), or 0 if the list is empty.
 */


int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *m = head;

	while (m != NULL)
	{
		result += m->n;
		m = m->next;
	}

	return (result);
}
