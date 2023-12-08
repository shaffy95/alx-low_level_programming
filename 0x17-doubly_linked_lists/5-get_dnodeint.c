#include "lists.h"

/**
 * get_dnodeint_at_index - function for returning the nth node of a
 * dlistint_t linked list.
 * @head: the pointer to the head of the doubly linked list.
 * @index: the index of the node, starting from 0.
 * Return: the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *m = head;
	unsigned int element = 0;

	while (m != NULL && element < index)
	{
		m = m->next;
		element++;
	}

	return (m);
}
